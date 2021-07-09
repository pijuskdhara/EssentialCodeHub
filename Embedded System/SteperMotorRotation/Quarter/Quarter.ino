

// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4; 
int direct = 1;
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {
  
  //digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction

  direct = direct + 1;
  direct = direct%2;
  digitalWrite(dirPin,direct);
  // Makes 25 pulses for making 45 degree. 200 for 260 degree
  for(int x = 0; x < 25; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
  delay(10000); // 10 second delay
  
  //digitalWrite(dirPin,LOW); //Changes the rotations direction
  
}
