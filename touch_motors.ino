const int dirPin1 = 2;  // Direction
const int stepPin1 = 3; // Step
const int dirPin2 = 4;  // Direction
const int stepPin2 = 5; // Step
 
 
// Motor steps per rotation
const int STEPS_PER_REV = 200;

int thresholdValue=400;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(stepPin1, OUTPUT);
   pinMode(dirPin2, OUTPUT);
   pinMode(stepPin2,OUTPUT); 
   pinMode(dirPin2,OUTPUT);
}
void forward (){
 // Set motor direction clockwise
  digitalWrite(dirPin1,LOW);
  digitalWrite(dirPin2,LOW); 
  
  // Spin motor one rotation slowly
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(2000); 
  }
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(2000); 
  }
  
    
  }

  void backward (){
  // Set motor direction clockwise
  digitalWrite(dirPin1,HIGH);
  digitalWrite(dirPin2,HIGH); 
  
  // Spin motor one rotation slowly
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(2000); 
  }
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(2000); 
  }
  
  }
  
   void right (){
  // Set motor direction clockwise
  digitalWrite(dirPin1,HIGH);
  digitalWrite(dirPin2,LOW); 
  
  // Spin motor one rotation slowly
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(2000); 
  }
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(2000); 
  }
  
  }
  
   void left (){
  // Set motor direction clockwise
  digitalWrite(dirPin1,LOW);
  digitalWrite(dirPin2,HIGH); 
  
  // Spin motor one rotation slowly
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(2000); 
  }
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(2000); 
  }
  
  }
 


void loop() {
  // put your main code here, to run repeatedly:
int osos=analogRead(A0);
{forward();} 

int sensorValue2=analogRead(A1);
{backward();} 

int sensorValue3=analogRead(A2);
{right();}

int sensorValue4=analogRead(A3);
{left();}  
}
