
void setup() {
    pinMode(2, OUTPUT);
    digitalWrite(2, HIGH);
    pinMode(13, OUTPUT);
    if (Serial) {
        digitalWrite(13, HIGH);
        Serial.begin(9600);
        while (!Serial) {
            ; // wait for serial port to connect. Needed for native USB port only
        }
        Serial.print('Serial port connected.')
    } else {
        digitalWrite(13, LOW);
    }
    delay(1000);
    digitalWrite(13, LOW);
}

// Use pin 3 for PWM lighting
void loop() {
    
    int reading = analogRead(A0);
    Serial.print(reading);
    Serial.print('\n');
    delay(1000);
}