// #include <AFMotor.h>



// // DC Motors
// // Left side of the car
// AF_DCMotor motor1(1, MOTOR12_64KHZ);
// AF_DCMotor motor4(4, MOTOR12_64KHZ);


// // Right side of the car
// AF_DCMotor motor2(2, MOTOR12_64KHZ);
// AF_DCMotor motor3(3, MOTOR12_64KHZ);


// // Motor operation parameters

// int motorSpeed = 180;  // initial value is less than the full speed to preserve battery power.



// // Beginning of control flow;
// void setup() {

//   Serial.begin(9600); // set up Serial library at 9600 bps
//   Serial.println("Initiating communication sequence...");
//   Serial.print("Loading");
//   delay(800);
//   // Loading screen
//   for (int i = 0; i <= 3; i++) {
//     Serial.print(".");
//     delay(800);
//   }
//   Serial.println("");
//   Serial.println("Successfull!");

//   // Setting motor's initial speed

//   motor1.setSpeed(motorSpeed);
//   motor2.setSpeed(motorSpeed);
//   motor3.setSpeed(motorSpeed);
//   motor4.setSpeed(motorSpeed);

//   // Realising motors
//   motor1.run(RELEASE);
//   motor2.run(RELEASE);
//   motor3.run(RELEASE);
//   motor4.run(RELEASE);


// }
// void loop() {
//   if (Serial.available()) {
//     char input = Serial.read();
//     Serial.println("Input from the user: " + String(input)); 
//     setSpeed(input);
//     forward(input); 
//     backward(input); 
//     right(input); 
//     left(input);
//     Serial.flush();
//     delay(100);
//   }
// }


// // Setting speed from user input
// void setSpeed(char speedMode) {
//   if (speedMode == 'f') {
//     motorSpeed = 255;
//     Serial.println("SPeed Mode- Fast");
//   } else if (speedMode == 'm') {
//     motorSpeed = 200;
//     Serial.println("SPeed Mode- Medium");
//   } else if (speedMode == 's') {
//     motorSpeed = 150;
//     Serial.println("SPeed Mode- Slow");
//   } else {
//     motorSpeed = 180;
//   }

// }


// // Directional control

// void forward(char cmd) {
//   if (cmd == 'F') {
//     Serial.println("Forward");
//     motor1.run(FORWARD);
//     motor2.run(FORWARD);
//     motor3.run(FORWARD);
//     motor4.run(FORWARD);
//   } else {
//     Serial.println("Stopped -- Forward");
//     motor1.setSpeed(0);
//     motor2.setSpeed(0);
//     motor3.setSpeed(0);
//     motor4.setSpeed(0);
//   }
// }

// void backward(char cmd) {
//   if (cmd == 'B') {
//     Serial.println("Backward");
//     motor1.run(BACKWARD);
//     motor2.run(BACKWARD);
//     motor3.run(BACKWARD);
//     motor4.run(BACKWARD);
//   } else {
//     Serial.println("Stopped -- Backward");
//     motor1.setSpeed(0);
//     motor2.setSpeed(0);
//     motor3.setSpeed(0);
//     motor4.setSpeed(0);
//   }
// }


// // Rotational direction accrozz 'Z' axis.


// void right(char cmd) {
//   if (cmd == 'R') {
//     Serial.println("Right");
//     //Left side up force
//     motor1.run(FORWARD);
//     motor4.run(FORWARD);

//     //Right side down force
//     motor2.run(BACKWARD);
//     motor3.run(BACKWARD);
//   } else {
//     Serial.println("Stopped -- Right");
//     motor1.setSpeed(0);
//     motor2.setSpeed(0);
//     motor3.setSpeed(0);
//     motor4.setSpeed(0);
//   }

// }

// void left(char cmd) {
//   if (cmd == 'L') {
//     Serial.println("Left");
//     //Left side down force
//     motor1.run(BACKWARD);
//     motor4.run(BACKWARD);

//     //Right side up force
//     motor2.run(FORWARD);
//     motor3.run(FORWARD);
//   } else {
//     Serial.println("Stopped -- Left");
//     motor1.setSpeed(0);
//     motor2.setSpeed(0);
//     motor3.setSpeed(0);
//     motor4.setSpeed(0);
//   }
// }
