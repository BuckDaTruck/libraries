# evive Firmware version 1.0.0
This firmware is developed for evive. It enables the menu based visual interface for Arduino programs. A brief description of firmware menu options is stated below:

1) Control Menu: evive includes hardware interaction and plug & play interface, which can be used to control many basic utilities like controlling motors, servos, stepper, relays, solenoid valves for pneumatics using tactile switches slide switches and potentiometers. Also the user can use the inbuilt hardware (switches and potentiometers) to change/define the states of Digital I/O Pins or PWM output. Switches and potentiometers are internally connected to Arduino MEGA pins as control inputs and motor drivers are connected for output at plug & play interface. The state or values are displayed on screen

2) Sensing: evive can be used as a voltmeter or an ammeter. It uses a very accurate 24-bit dual channel ADC IC for sensing from Analog Devices (ADE7912). There are two channels for data acquisition namely Probe I/V and Probe V. The Probe I/V can be used to sense currents or voltage as per the Jumper selection. The current sensing has accuracy of 3mA with range of -3A to +3A, while in voltage mode, the accuracy is of 3mV with range of -5V to +5V. The Probe V can be used for higher voltage sensing in range of -30V to +30V with accuracy of 10mV.

3) Serial Monitor: Serial Monitor appears in one of the menu item of evive. It asks the user to select the serial and also allows users to set the baud rate at which they want to open the serial port. It then, reads and displays the data coming from the selected serial at specified baud rate by the user. With Serial Monitor it is also possible to display the multiple serial data displaying simultaneously on the screen of evive. Different Serial data are displayed in different colors i.e. Serial 1 with White ;Serial 2 with Magenta ; Serial 3 with Blue. It is an essential tool for debug.

4) Mini Oscilloscope: Visualize voltage and currents on evive using either banana jacks or jumper wires. Is has lots of function like scaling voltage level, time scaling to see the reading in better way, trigger to start the measurement at some set value, scanning modes like single or continuous, offset, save readings to SD card and send data to computer. It uses a very accurate 24-bit dual channel ADC IC for sensing from Analog Devices (ADE7912). There are two channels for data acquisition namely Probe I/V and Probe V. The Probe I/V can be used to sense currents or voltage as per the Jumper selection. The maximum sensing frequency is about 1kHz. The current sensing has accuracy of 3mA with range of -3A to +3A, while in voltage mode, the accuracy is of 3mV with range of -5V to +5V. The Probe V can be used for higher voltage sensing in range of -30V to +30V with accuracy of 10mV. Have a look at: https://www.youtube.com/watch?v=KHnaoqdOgPY&index=5&list=PLKsEDqUnyShrW8RfqVAjHGHCjeYfb7TwI

5) Arduino Pin State Monitor: Pin State monitor is included in the evive menu. It shows the state of all the digital and analog pins of evive. It shows output as high(1) or low(0) for digital pins and analog value for analog pins. The pins are displayed in tabular form on the evive screen. There are 40 digital pins in evive and 16 analog pins. Different colors are used to show the pin no. and its respective output.

6) Beta Function Generator: evive has a built-in 12-bit DAC using IC MCP4725 (IIC Address 0x60 or 0x62). It is controlled using IIC (or I2C) commands using Arduino MEGA with output range of 0 to 5V. Many inbuilt function to generate waves like sine, square, triangular or saw-tooth shapes are provided with option to control amplitude between 0 to 5V and frequency upto few hundred hertz. It’s limited to 8.5Hz ~ 500Hz. The user can set the desired output voltage and the desired frequency using potentiometer knobs.

7) Touch: evive has 12 touch inputs. Just plug a wire from the outputs to any conducting surface, and get a touch-sensitive surface!

8) User Defined Programs: Generally, while using Arduino one face problem of uploading different codes again and again as he changes some part of codes. Using evive’s user defined function submenu, the user can store different Arduino programs at once. He can switch to different program while navigating inside the menu. Here is how to do it: https://www.youtube.com/watch?v=c5ne1dfeFOQ

9)Examples: There are some example codes in example menu that can be used directly from the firmware of evive. Name of these examples are:
Blink Analog Input
TFT display (POT1)
Probe V Sense
TFT Serial Monitor (pot 1)

10) Exit Menu: While using evive Frimware as library, Exit Menu needs to be selected to enter the custom program along with evive Menu.

When evive is used for custom programming at that time also it is possible to navigate back to firmware by center pressing navigate key of evive. At this time the custom code that was previously running on evive stops and firmware runs on evive. But for this to happen custom code made should have evive.h library included. As soon as one exits firmware from menu, their custom code again starts running on evive.  
