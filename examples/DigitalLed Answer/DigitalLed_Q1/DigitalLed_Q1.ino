// LEDを光らせるアナログピン番号
#define LED_PIN A1

void setup() {
  // LEDを光らせるピンを出力に指定
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // LEDを光らせるピンにデジタル出力の HIGH = ON を指示
  digitalWrite(LED_PIN, HIGH);
  // ランダム
  delay(200 + random(800));
  // LEDを光らせるピンにデジタル出力の LOW = OFF を指示
  digitalWrite(LED_PIN, LOW);
  // ランダム
  delay(200 + random(800));
}
