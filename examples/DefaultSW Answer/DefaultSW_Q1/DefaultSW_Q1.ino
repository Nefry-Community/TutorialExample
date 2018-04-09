#include <Nefry.h>

// カウントさせる変数
int delayTime = 1000;

void setup() {
  // SW有効化
  Nefry.enableSW();
  // LEDが白に光る（起動時の光り方）
  Nefry.setLed(255, 255, 255);
}

void loop() {
  // SWを押した時を判定する Nefry.readSW
  if (Nefry.readSW()) {
    // カウントアップ
    delayTime = delayTime - 100;
    //
    if(delayTime < 100){
      delayTime = 1000;
    }
    // 押されたら1秒待つ
    Nefry.ndelay(1000);
  }
  Nefry.setLed(0, 0, 255);
  Nefry.ndelay(delayTime);
  Nefry.setLed(0, 0, 0);
  Nefry.ndelay(delayTime);
  Serial.println(delayTime);
}
