// Pin definitions
/*
const int analogPin = A0;  // Analog input pin that the raindrop sensor is attached to
const int digitalPin = 2;  // Digital input pin that the raindrop sensor is attached to

// Variables to store the sensor values
int analogValue = 0; // Variable to store the analog value coming from the sensor
int digitalValue = 0; // Variable to store the digital value coming from the sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
  pinMode(digitalPin, INPUT); // Set the digital pin as input
}

void loop() {
  // Read the analog value from the sensor
  analogValue = analogRead(analogPin); 
  // Read the digital value from the sensor
  digitalValue = digitalRead(digitalPin);

  // Print the values to the serial monitor
  Serial.print("Analog value: ");
  Serial.print(analogValue);
  Serial.print(" | Digital value: ");
  Serial.println(digitalValue);
  
  // Wait for a second before the next loop
  delay(1000); 
}*/
// Pin definitions  
/*Inventor DIY Inventor (Krishna Agarwal)
Desingner DIY Inventor (Krishna   Agarwal)
Codder DIY Inventor (Krishna Agarwal)
*/

//set pin numbers
//const   won't change
// Pin definitions
/*
const int raindropAnalogPin = A0;  // Analog input pin that the raindrop sensor is attached to
const int raindropDigitalPin = 2;  // Digital input pin that the raindrop sensor is attached to
const int lightSensorPin = A1;     // Analog input pin that the light sensor is attached to
const int ledPin = 3;              // Digital output pin that the LED is attached to

// Variables to store the sensor values
int raindropAnalogValue = 0; // Variable to store the analog value from the raindrop sensor
int raindropDigitalValue = 0; // Variable to store the digital value from the raindrop sensor
int lightSensorValue = 0;     // Variable to store the value from the light sensor

// Threshold for turning the LED on or off
const int lightThreshold = 500; // Adjust this value based on your environment

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
  pinMode(raindropDigitalPin, INPUT); // Set the raindrop digital pin as input
  pinMode(ledPin, OUTPUT); // Set the LED pin as output
}

void loop() {
  // Read the analog value from the raindrop sensor
  raindropAnalogValue = analogRead(raindropAnalogPin); 
  // Read the digital value from the raindrop sensor
  raindropDigitalValue = digitalRead(raindropDigitalPin);
  // Read the value from the light sensor
  lightSensorValue = analogRead(lightSensorPin);

  // Control the LED based on the light sensor value
  if (lightSensorValue < lightThreshold) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED
  }

\
  // Print the values to the serial monitor
  Serial.print("Raindrop Analog: ");
  Serial.print(raindropAnalogValue);
  Serial.print(" | Raindrop Digital: ");
  Serial.print(raindropDigitalValue);
  Serial.print(" | Light Sensor: ");
  Serial.println(lightSensorValue);
  
  // Wait for a second before the next loop
  delay(1000); 
}
*\
