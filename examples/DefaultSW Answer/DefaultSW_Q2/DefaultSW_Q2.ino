#include <Nefry.h>

// ON/OFFを管理
int sw = 0;

void setup() {
  // SW有効化
  Nefry.enableSW();
  // LEDが白に光る（起動時の光り方）
  Nefry.setLed(255, 255, 255);
}
 
void loop() {
  // SWを押した時を判定する Nefry.readSW
  if (Nefry.readSW()) {
    // ON/OFFを管理
    if( sw == 1 ){
      // OFF
      sw = 0;
      // LEDが赤に光る
      Nefry.setLed(255, 0, 0);
    } else {
      // ON
      sw = 1;
      // 青に戻る
      Nefry.setLed(0, 0, 255);
    }
    // 押されたら1秒待つ
    Nefry.ndelay(1000);
  }
}
