// Ambientライブラリを使うのに必要
#include <NefryAmbient.h>

// データを送りたいAmbientのチャネルのIDとライトキー
#define CHANNEL_ID xxxxx
#define WRITE_KEY "xxxxx"

// Ambientと通信するために必要なインスタンス
NefryAmbient nefryAmbient;

void setup() {
  //Ambientを使えるように初期設定をする
  nefryAmbient.begin(CHANNEL_ID, WRITE_KEY);
  Nefry.println("Ambient initialized");
}

void loop() {
  // A0ピンの値をセットします。第一引数はセットしたいフィールド（1〜8）です。
  nefryAmbient.set(1, analogRead(A0));

  //Ambientにデータを送信します。
  nefryAmbient.send();
  Nefry.println("Data pushed");

  Nefry.ndelay(1000);//1秒待つ
}
