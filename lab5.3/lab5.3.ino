int Led[4] = {17, 2, 15, 12};

void setup() {
   Serial.begin(115200);
   pinMode(Led[0], OUTPUT); 
   pinMode(Led[1], OUTPUT); 
   pinMode(Led[2], OUTPUT); 
   pinMode(Led[3], OUTPUT);
}

void loop() {
  for (int i = 0; i <= 3; i++) {
   digitalWrite(Led[i], LOW);
   delay(200);
   digitalWrite(Led[i], HIGH);
   delay(200);
  }
  
  for (int i = 3; i >= 0; i--) {
   digitalWrite(Led[i], LOW);
   delay(200);
   digitalWrite(Led[i], HIGH);
   delay(200);
  }
}
