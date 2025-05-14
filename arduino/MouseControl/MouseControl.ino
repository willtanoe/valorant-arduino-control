#include <Mouse.h>

// Constants for serial communication
const byte START_BYTE = 0xFF;
const byte END_BYTE = 0xFE;
const int BUFFER_SIZE = 6;

// Buffer for incoming serial data
byte buffer[BUFFER_SIZE];
int bufferIndex = 0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Initialize mouse control
  Mouse.begin();
}

void loop() {
  // Check if serial data is available
  while (Serial.available() > 0) {
    // Read incoming byte
    byte incomingByte = Serial.read();
    
    // Add byte to buffer
    if (bufferIndex < BUFFER_SIZE) {
      buffer[bufferIndex] = incomingByte;
      bufferIndex++;
    }
    
    // Process complete packet
    if (bufferIndex == BUFFER_SIZE) {
      processPacket();
      bufferIndex = 0;
    }
  }
}

void processPacket() {
  // Verify start and end bytes
  if (buffer[0] == START_BYTE && buffer[5] == END_BYTE) {
    // Extract movement values
    int16_t x = (buffer[1] << 8) | buffer[2];
    int16_t y = (buffer[3] << 8) | buffer[4];
    
    // Move mouse
    Mouse.move(x, y);
    
    // Send acknowledgment
    Serial.write(START_BYTE);
    Serial.write(0x01); // ACK
    Serial.write(END_BYTE);
  } else {
    // Invalid packet, send NACK
    Serial.write(START_BYTE);
    Serial.write(0x00); // NACK
    Serial.write(END_BYTE);
    
    // Reset buffer
    bufferIndex = 0;
  }
}
