#include <Nefry.h>

void setup() {
  
}

// フルカラーLEDの色要素（赤 red,緑 green,青 blue）をいれる値の箱（変数）をつくる
int red,green,blue;

void loop() {
  // random関数は0-255の数値をランダムに返します
  
  // フルカラーLEDの赤要素をランダムに指定
  red = random(255);
  // フルカラーLEDの緑要素をランダムに指定
  green = random(255);
  // フルカラーLEDの青要素をランダムに指定
  blue = random(255);
  
  // LEDがランダムに点灯します
  Nefry.setLed(red,green,blue);

  // 1秒待つ
  Nefry.ndelay(1000);
}
