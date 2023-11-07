#include <AFMotor.h>
// AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
void setup(){
  Serial.begin(9600); // set up Serial library at 9600 bps
  Serial.println("Initiating communication sequence...");
  Serial.print(".");
  delay(300);
  Serial.print(".");
  delay(300);
  Serial.print(".");
  
  // Setting initial speed veriable 
   
}
void loop(){ 
if(Serial.available()) 
  {
    Serial.write(Serial.read());//Forward what Serial received to Software Serial Port
  }
  if(Serial.available()) 
  {
    Serial.write("Found message");//Forward what Software Serial received to Serial Port
  }
  delay(20);
}
