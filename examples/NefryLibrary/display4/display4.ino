#include <NefryDisplay.h>

void setup() {
  NefryDisplay.setAutoScrollFlg(true);
  NefryDisplay.autoScrollFunc(pokioPrint);
}

void loop() {
}

void pokioPrint() {
  NefryDisplay.drawString(0, 0, "POKIO");
  NefryDisplay.drawString(20, 15, "POKIO");
  NefryDisplay.drawString(40, 30, "POKIO");
  NefryDisplay.drawString(60, 45, "POKIO");
}
