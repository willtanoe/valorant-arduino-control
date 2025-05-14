@echo off
echo Starting Valorant Arduino Control...

:: Start Python backend
start cmd /k "cd src/python && python server.py"

:: Wait a moment for Python server to start
timeout /t 2

:: Start web interface
start cmd /k "npm run dev"

:: Wait a moment
timeout /t 2

:: Open browser
start http://localhost:8000

echo System started! Do not close this window.
pause
