// LEDを光らせるアナログピン番号
#define LED_PIN A1
// 待ち時間（ミリ秒） 1000ミリ秒 = 1秒
#define DELAY_TIME 1000

void setup() {
  // LEDを光らせるピンを出力に指定
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // LEDを光らせるピンにデジタル出力の HIGH = ON を指示
  digitalWrite(LED_PIN, HIGH);
  // DELAY_TIME の時間だけ待つ
  delay(DELAY_TIME);
  // LEDを光らせるピンにデジタル出力の LOW = OFF を指示
  digitalWrite(LED_PIN, LOW);
  // DELAY_TIME の時間だけ待つ
  delay(DELAY_TIME);
}
