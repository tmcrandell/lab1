const int potPin = A0;  // Analog input pin that the potentiometer is attached to
const int greenPin = 5; // Analog output pin that the LED is attached to
const int redPin=6;
const int bluePin=3;
const int xPin=A1;
const int yPin=A2;

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
}

void loop() {
  // read the analog in value from pot (soon from joystick)
  int redValue = analogRead(potPin);
  int greenValue=analogRead(xPin);
  int blueValue= analogRead(yPin); 

  // print the results to the serial monitor:
  Serial.print(redValue/4);                       
  Serial.print(",");      
  Serial.print(greenValue/4);
  Serial.print(",");   
  Serial.println(blueValue/4); 

  analogWrite(greenPin,greenValue/4);
  analogWrite(redPin,redValue/4);
  analogWrite(bluePin,blueValue/4);


  delay(2);                     
}
