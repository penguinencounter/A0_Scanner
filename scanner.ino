
void setup() {
    pinMode(2, OUTPUT);
    digitalWrite(2, HIGH);
    Serial.begin(9600);
    while (!Serial) {
        ; // wait for serial port to connect. Needed for native USB port only
    }
}

// Use pin 3 for PWM lighting
void loop() {
    
    int reading = analogRead(A0);
    Serial.print(reading);
    Serial.print('\n');
    delay(1000);
}