# Ultrasonic-Distance-Measurement-Arduino

This project uses an ultrasonic sensor to measure the distance and display it on the serial monitor using PlatformIO in Visual Studio Code.

## Steps to Set Up the Project:

1. **Download Visual Studio Code (VS Code):**
   - Install [VS Code](https://code.visualstudio.com/).

2. **Install the PlatformIO Extension:**
   - Open VS Code, go to the Extensions view, and search for `PlatformIO`.
   - Install the **PlatformIO IDE** extension.

3. **Create a New Project:**
   - Open PlatformIO and click on **New Project**.
   - Choose **Arduino Uno** as the board.
   - Click **Finish** to create the project.

4. **Edit `platformio.ini`:**
   - After creating the project, you will find a `platformio.ini` file.
   - Configure the serial port for uploading and monitoring by adding these lines to the `platformio.ini` file:

   ```ini
   ; Specify the serial port for uploading and monitoring
   upload_port = COM3
   monitor_port = COM3

   ; Set the baud rate for Serial Monitor
   monitor_speed = 9600
   ```

   Replace `COM3` with the correct port for your microcontroller.

5. **Open `src/main.cpp`:**
   - Open the `main.cpp` file in the `src` folder and paste the given Arduino code.

6. **Connect the Microcontroller:**
   - Connect your Arduino Uno to the computer via a USB cable.

7. **Upload the Code:**
   - Use the PlatformIO interface to upload the code to the Arduino.

8. **Monitor the Distance:**
   - Open the **Serial Monitor** in PlatformIO to see the distance measurements printed from the ultrasonic sensor.

