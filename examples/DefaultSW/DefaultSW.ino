#include <Nefry.h>

void setup() {
  // SW有効化
  Nefry.enableSW();
  // LEDが白に光る（起動時の光り方）
  Nefry.setLed(255, 255, 255);
}
 
void loop() {
  // SWを押した時を判定する Nefry.readSW
  if (Nefry.readSW()) {
    // LEDが赤に光る
    Nefry.setLed(255, 0, 0);
    // 押されたら1秒待つ
    Nefry.ndelay(1000);
    // 青に戻る
    Nefry.setLed(0, 0, 255);
  }
}
