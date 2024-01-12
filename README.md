# Intelligent Arduino Robot 🟢
<p style="text-align:justify;">This repository that holds the codes, libraries and guides on how to build up a bluetooth controlled car. 
Later this project may extented by the author [Laxr24](https://github.com/Laxr24) for further development and experiment with new technologies.
</p>

### Specialities of this robot

<p style="text-align:justify;">The core technology of this robot is that it uses a L293D motor driver shield which is built for Arduino UNO board. in 2023 this motor driver with full sized UNO board is outdated in the tech community because there are modern solutions available out there. If you notice you'll also find out that the body of this robot is made in a modular way to keep everything organized and clean as much as possible. The reason being is that this helped me to understand how to build something modular from the scratch with available staffs around me.
Another reason is that if focuses on the power management of the robot seriously. I've put a lot of effort to figure out the most reliable and effecient non-tradition/DIY way of supplying power to this robot seperately to the motherboards and to the motor drivers.

Another cool thing is this robot is more focused on the <b><i>Communication and Control</i></b> systems. Because this is where the fun begins. This robot can communicate over the internet with the controller unit send data back and forth for status update and in the future it will also be able to collect data form the environment to store or send to remote database for further analyzing. 

To achieve this, I had to go through lots of tech. stacks to figure out the most reliable and secure way for a communication - control system for this robot. You'll find out more in the rest part. 
</p>


## Components used 🛠
1. Arduino UNO x1
2. HC-05 x1 ( Bluetooth Module )
3. Car Module x1
4. External wiring (as per need)
5. Android App to control the car
6. Batteries (Li-ion 1850mAh) x3

## API References 🔎
1. Motor driver board [L293D](https://lastminuteengineers.com/l293d-motor-driver-shield-arduino-tutorial/)



2. HC-05 Operation [HC-05](https://lastminuteengineers.com/hc05-bluetooth-arduino-tutorial/)

### Arduino Libraries
All libraries are includend in the library folder.
1. AdaFruit Motor Shield Library ---- To control L293D motor driver.

    📔In the Library folder the Adafruit Library is included.
    <br/>
    ✅ Simply add the library from the Arduino IDE.
    * Sketch >>Include Library>>Add .ZIP Library

2. SoftwareSerial(Internal) ------->>   To use unused IO as Tx & Rx pins. 

### Diagram and image 💠
<img src="https://europe1.discourse-cdn.com/arduino/original/4X/8/6/9/8696ccaf689dc8e0bd0cf6bb9924871f98febb76.jpeg" width="100%" style="max-width:400px; margin:10px auto; display:block;"/>
    
<p style="text-align:center;"> Figure 1.1: Car Circuit setup</p> 
    
<img src="./Images/car.jpg" width="100%" style="max-width:400px; margin:10px auto; display:block;"/>

<p style="text-align:center;"> Figure 1.2: Arduino Car</p>


