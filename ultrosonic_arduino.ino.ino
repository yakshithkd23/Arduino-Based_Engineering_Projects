#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 // attach pin D3 Arduino to pin Trig of HC-SR04

long duration; // Variable to store time taken to the pulse to reach receiver
int distance;  // Variable to store distance calculated using formula

void setup()
{
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
    pinMode(echoPin, INPUT);  // Sets the echoPin as an INPUT

    Serial.begin(9600); // Start Serial Communication

    Serial.println("Distance measurement using Arduino Uno.");
    delay(500);
}

void loop()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2); // wait for 2 microseconds

    digitalWrite(trigPin, HIGH); // Trigger pulse
    delayMicroseconds(10);       // Duration of pulse
    digitalWrite(trigPin, LOW);  // Stop pulse

    duration = pulseIn(echoPin, HIGH);             // Measure duration
    distance = duration * 0.0344 / 2;               // Calculate distance

    Serial.print("Distance: ");
    Serial.print(distance); // Output the distance
    Serial.println(" cm");
    delay(100);
}
