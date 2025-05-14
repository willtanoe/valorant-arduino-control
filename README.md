# Valorant Arduino Control

A web-based GUI for controlling Arduino-based Valorant assistance with features like aimbot and triggerbot.

## Setup Instructions

### 1. Arduino Setup

1. Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software)
2. Open Arduino IDE and install the "Mouse" library:
   - Go to Tools > Manage Libraries
   - Search for "Mouse"
   - Install the "Mouse" library by Arduino
3. Connect your Arduino Leonardo or Pro Micro (or any ATmega32U4 based board)
4. Open the `arduino/MouseControl/MouseControl.ino` file in Arduino IDE
5. Select your board:
   - Tools > Board > Arduino AVR Boards > Arduino Leonardo
   - (or select Arduino Pro Micro if using that)
6. Select the correct port:
   - Tools > Port > (select your Arduino port)
7. Click Upload to flash the firmware

### 2. Web Interface Setup

1. Install Node.js if you haven't already
2. Clone this repository
3. Install dependencies:
   ```bash
   npm install
   ```
4. Start the development server:
   ```bash
   npm run dev
   ```
5. Open [http://localhost:8000](http://localhost:8000) in Chrome or Edge (Web Serial API is required)

## Usage

1. Click "Connect" and select your Arduino from the popup
2. Set your preferred hotkey
3. Enable the hotkey toggle
4. Adjust sensitivity as needed
5. Press the configured hotkey during gameplay to activate

## Important Notes

- This project requires a browser that supports the Web Serial API (Chrome or Edge)
- Only Arduino boards with ATmega32U4 (Leonardo, Pro Micro, etc.) are supported as they can act as a USB mouse
- Make sure to run the web interface with proper permissions to access serial ports
- This is for educational purposes only

## Features

- Web-based control interface
- Customizable hotkeys
- Adjustable sensitivity
- Real-time connection status
- Error handling and user feedback
- Modern dark theme UI

## Technical Details

- Uses Web Serial API for Arduino communication
- Built with Next.js and TypeScript
- Styled with Tailwind CSS
- Uses shadcn/ui components
- Arduino firmware handles mouse movement via USB HID

## Troubleshooting

1. **Arduino Not Detected**
   - Make sure you're using a compatible Arduino board (ATmega32U4 based)
   - Check if the correct port is selected in Arduino IDE
   - Try unplugging and replugging the Arduino

2. **Connection Failed**
   - Ensure the correct firmware is uploaded
   - Check if the Arduino is properly connected
   - Try refreshing the page and reconnecting

3. **Movement Not Working**
   - Verify the hotkey is properly set and enabled
   - Check the serial monitor in Arduino IDE for debugging
   - Adjust sensitivity settings

## License

This project is for educational purposes only. Use responsibly.
