#include <Nefry.h>

void setup() {
  
}

void loop() {
  // 青
  Nefry.setLed(0,0,255);
  // 1秒待つ
  Nefry.ndelay(1000);
  // 赤
  Nefry.setLed(255,0,0);
  // 1秒待つ
  Nefry.ndelay(1000);
  // 黄色
  Nefry.setLed(255,255,0);
  // 1秒待つ
  Nefry.ndelay(1000);
}
