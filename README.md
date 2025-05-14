# Valorant Arduino Control

A modern web interface for Arduino-based Valorant assistance with screen capture and pixel detection.

## Features

- Aimbot with customizable sensitivity and hotkey
- Triggerbot with adjustable delay
- Modern web interface built with Next.js and Tailwind CSS
- Real-time status monitoring
- Background operation support
- Arduino serial communication
- Screen capture and pixel detection

## Requirements

### Hardware
- Arduino Leonardo or Pro Micro
- USB cable

### Software
- Node.js 16+
- Python 3.8+
- Chrome or Edge browser (for Web Serial API support)

## Setup Instructions

1. Install Arduino firmware:
   ```bash
   # Upload MouseControl.ino to your Arduino using Arduino IDE
   ```

2. Install Python dependencies:
   ```bash
   cd src/python
   pip install -r requirements.txt
   ```

3. Install Node.js dependencies:
   ```bash
   npm install
   ```

4. Start the Python backend:
   ```bash
   cd src/python
   python server.py
   ```

5. Start the web interface:
   ```bash
   npm run dev
   ```

6. Open http://localhost:8000 in Chrome or Edge

## Usage

1. Connect Arduino:
   - Click "Start" in the Arduino Control Panel
   - Select your Arduino from the port list
   - Wait for connection confirmation

2. Configure Settings:
   - Adjust aimbot sensitivity
   - Set custom hotkeys
   - Configure triggerbot delay

3. Operation:
   - Use MOUSE5 for aimbot (default)
   - Use MOUSE4 for triggerbot (default)
   - The assist will run in the background while the browser tab is open

## Important Notes

- Run the game in windowed or borderless windowed mode
- Ensure Python backend is running before using the web interface
- Keep the browser tab open for the assist to work
- Administrator privileges may be required for keyboard/mouse control

## Troubleshooting

1. Arduino not detected:
   - Check USB connection
   - Verify correct COM port
   - Try reinstalling Arduino drivers

2. Assist not working:
   - Confirm Python backend is running
   - Check browser console for errors
   - Verify game window is active
   - Run as administrator if needed

## Development

The project consists of three main components:

1. Web Interface (Next.js):
   - Modern UI for control and monitoring
   - Real-time status updates
   - Settings management

2. Python Backend:
   - Screen capture and pixel detection
   - Arduino serial communication
   - Background operation handling

3. Arduino Firmware:
   - Mouse movement control
   - Serial protocol handling
   - Fast response time optimization

## Security

- The web interface runs locally only
- No data is sent outside your computer
- All communication is between the web interface, Python backend, and Arduino

## Disclaimer

This project is for educational purposes only. Use at your own risk.
