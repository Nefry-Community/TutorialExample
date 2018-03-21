#include <NefryDisplay.h>

void setup() {
  NefryDisplay.setAutoScrollFlg(true);
  NefryDisplay.autoScrollFunc(pokioPrint);
}

void loop() {
}

void pokioPrint() {
  NefryDisplay.drawCircle(10, 10, 10);
  NefryDisplay.fillCircle(40, 40, 20);
  NefryDisplay.drawRect(40, 10, 20, 20);
  NefryDisplay.fillRect(70, 30, 30, 30);
  NefryDisplay.drawHorizontalLine(100, 10, 15);
  NefryDisplay.drawHorizontalLine(100, 15, 15);
  NefryDisplay.drawVerticalLine(105, 5, 15);
  NefryDisplay.drawVerticalLine(110, 5, 15);
}
