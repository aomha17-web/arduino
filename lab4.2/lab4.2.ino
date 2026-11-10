void setup() {
    Serial.begin(115200);
    int count = 10;
    do {
        Serial.println(count);
        count--;
    } while (count >= 0);
}

void loop() {
}