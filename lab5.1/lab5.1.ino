const int BT = 17;
const int WIFI = 2;
const int NTP = 15;
const int IOT = 12;

void setup() {
  Serial.begin(115200);
  pinMode(BT, OUTPUT);
  pinMode(WIFI, OUTPUT);
  pinMode(NTP, OUTPUT);
  pinMode(IOT, OUTPUT);

  digitalWrite(BT, HIGH); //ดับ
  digitalWrite(WIFI, HIGH); //ดับ
  digitalWrite(NTP, HIGH); //ดับ
  digitalWrite(IOT, HIGH); //ดับ

}

void loop() {
  digitalWrite(BT, LOW); //ติด
  digitalWrite(WIFI, HIGH);
  digitalWrite(NTP, HIGH);
  digitalWrite(IOT, HIGH);
  delay(500);

  digitalWrite(BT, HIGH);
  digitalWrite(WIFI, LOW); //ติด
  digitalWrite(NTP, HIGH);
  digitalWrite(IOT, HIGH);
  delay(500);

  digitalWrite(BT, HIGH);
  digitalWrite(WIFI, HIGH);
  digitalWrite(NTP, LOW); //ติด
  digitalWrite(IOT, HIGH);
  delay(500);

  digitalWrite(BT, HIGH);
  digitalWrite(WIFI, HIGH);
  digitalWrite(NTP, HIGH);
  digitalWrite(IOT, LOW); //ติด
  delay(500);

  digitalWrite(BT, HIGH);
  digitalWrite(WIFI, HIGH);
  digitalWrite(NTP, HIGH);
  digitalWrite(IOT, HIGH);
  delay(500);
}
