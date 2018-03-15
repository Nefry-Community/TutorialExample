#include <NefryAzureIoTHub.h> // Microsoft Azure IoT Hubライブラリを使うのに必要

// 接続文字列
#define CONNECTION_STRING "xxxxx"

void setup() {
  // 接続文字列を使ってIoT Hubとの接続を初期化する
  while (!Azure.begin(CONNECTION_STRING)) {
    Nefry.println("Azure begin Failed");
    delay(1000);
  }
  Nefry.println("Azure initialized");

  // IoT Hubからのメッセージを受信する関数を指定する
  Azure.setCallback(azureCallback);
}

void azureCallback(String s) {
  Nefry.print("Azure Message arrived [");
  Nefry.print(s);
  Nefry.println("] ");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    // IoT Hubに接続する
    Azure.connect();

    // A0ピンのアナログ値を読み取ってDataElementインスタンスに格納する
    DataElement dataElement = DataElement();
    dataElement.setValue("Nefry", analogRead(A0));

    // そのデータをIoT Hubに送信する
    Azure.push(&dataElement);
    Nefry.println("Data pushed");
    delay(2000);
  } else {
    Nefry.println("Not connected to the Internet");
    delay(250);
  }
}
