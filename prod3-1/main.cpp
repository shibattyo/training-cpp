#include "data.h"
#include <iostream>

/*
以下のプログラムのクラスCDataに、メンバ変数のセッターおよびゲッターを追加し、
ビルドが通るようにし、期待される実行結果を得られるように書き換えなさい。
*/

using namespace std;

int main() {
  CData d;
  d.init();
  d.setNum(100);
  d.setCom("Programming C++");
  cout << "number = " << d.getNum() << " comment = " << d.getCom() << endl;
  return 0;
}