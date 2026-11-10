void setup() {
  Serial.begin(115200);

  // 1. นับขึ้นจาก 1 ไปถึง 10
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
            break;
        }
    Serial.println(i);
  }
  Serial.println("----------");

  // 2. นับลงจาก 10 กลับมาที่ 1
  for (int i = 10; i >= 1; i--) {
    if (i == 5) {
            continue;
        }
    Serial.println(i);
  }
}

void loop() {
}