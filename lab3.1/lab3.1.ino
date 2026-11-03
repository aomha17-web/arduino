#define LED_PIN1  17
#define LED_PIN2  2
#define LED_PIN3  15
#define SW1 16
#define SW2 14

void setup() {
    pinMode(LED_PIN1, OUTPUT);
    pinMode(LED_PIN2, OUTPUT);
    pinMode(LED_PIN3, OUTPUT);
    pinMode(SW1, INPUT_PULLUP);
    pinMode(SW2, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(SW1) == LOW) {
        digitalWrite(LED_PIN1, LOW);
    } else {
        digitalWrite(LED_PIN1, HIGH);
    }
    if (digitalRead(SW2) == LOW) {
        digitalWrite(LED_PIN2, LOW);
    } else {
        digitalWrite(LED_PIN2, HIGH);
    }
     if (digitalRead(SW2) == LOW) {
        digitalWrite(LED_PIN3, LOW);
    } else {
        digitalWrite(LED_PIN3, HIGH);
    }
}