#include <Arduino.h>

//  pin connections
#define echoPin 2 // connection between ecopin to 2 
#define trigPin 3 // connection between trig to -3
// connection between vcc to 5v
//connection between ground to ground
// Declare variables
long duration; // Variable to store time taken by the pulse to reach the receiver
int distance;  // Variable to store calculated distance

void measureDistance();

void setup() {
    // Initialize pin modes
    pinMode(trigPin, OUTPUT); // Set the trigPin as an OUTPUT
    pinMode(echoPin, INPUT);  // Set the echoPin as an INPUT

    // Start Serial Communication
    Serial.begin(9600);
    Serial.println("Distance measurement using Arduino Uno.");
    delay(500);
}

void loop() {
    measureDistance(); // Call the distance measurement function
    delay(100);        // Delay to prevent spamming measurements
}

// Function definitions
void measureDistance() {
    // Generate a 10 µs pulse to trigger the sensor
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2); // Wait for 2 µs
    digitalWrite(trigPin, HIGH); // Turn on the Trigger
    delayMicroseconds(10); // Keep the Trigger on for 10 µs
    digitalWrite(trigPin, LOW); // Turn off the Trigger

    // Measure the duration of the pulse
    duration = pulseIn(echoPin, HIGH);

    // Calculate the distance in cm
    distance = duration * 0.0344 / 2;

    // Print the distance to the Serial Monitor
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
}
