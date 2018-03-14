// Firebaseライブラリを使うのに必要
#include<NefryFireBase.h>

// Firebaseで作成したデータベースのホスト名とアクセスするためのシークレット
#define HOST "xxxxx"
#define SECRET "xxxxx"

// Firebaseと通信するために必要なインスタンス
NefryFireBase firebase;

void setup() {
  // Firebaseとの接続を初期化
  firebase.begin(HOST, SECRET);
  Nefry.println("Firebase initialized");
}

void loop() {
  // A0ピンのアナログ値を読み取って、DataElementインスタンスに"A0"というキーで格納する
  DataElement dataElement = DataElement();
  dataElement.setValue("A0", analogRead(A0));

  // セットした値を"Nefry"というグループに追加
  firebase.write("Nefry", &dataElement);
  Nefry.println("Data pushed");

  delay(1000);
}
