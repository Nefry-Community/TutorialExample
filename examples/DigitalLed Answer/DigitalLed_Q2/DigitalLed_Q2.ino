// LEDを光らせるアナログピン番号
#define LED_PIN A1
#define LED_PIN2 A0 // A0ピンを一つ増やす
// 待ち時間（ミリ秒） 1000ミリ秒 = 1秒
#define DELAY_TIME 1000

void setup() {
  // LEDを光らせるピンを出力に指定
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT); // A2ピンを一つ増やす
}

void loop() {
  // LEDを光らせるピンにデジタル出力の HIGH = ON を指示
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(LED_PIN2, LOW);  // 交互に光る
  // DELAY_TIME の時間だけ待つ
  delay(DELAY_TIME);
  // LEDを光らせるピンにデジタル出力の LOW = OFF を指示
  digitalWrite(LED_PIN, LOW);
  digitalWrite(LED_PIN2, HIGH);  // 交互に光る
  // DELAY_TIME の時間だけ待つ
  delay(DELAY_TIME);
}
