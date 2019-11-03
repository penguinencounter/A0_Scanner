void setup() {
    Serial.begin(9600);
    while (!Serial) {
        ; // wait for serial port to connect. Needed for native USB port only
    }
}
void loop() {
    int reading = analogRead(A0);
    Serial.write(reading);
    delay(1000);
}