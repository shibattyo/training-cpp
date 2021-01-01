#include "counter.h"
#include <iostream>

/*
以下のプログラムは、カウンタークラスCountを使用したプログラムである。
このプログラムを、指定されたように変更しなさい。
main.cppの18行目に出ている、c1.getCount() + c2.getCount()を、
クラスCounterの静的メソッドによって出力できるようにプログラムを改造しなさい。
その際、以下のようにクラスCounterを変更すること。

Counterクラスの変更ポイント
1.作成する静的メンバ関数の名前は、getTotalCount()とする。（戻り値はint）
2.この関数内では、トータルのカウント回数を記録した静的メンバ変数を、m_totalCountとする。
*/

int main() {
  Counter c1, c2;
  c1.count();
  c2.count();
  c2.count();
  c2.reset();
  c1.count();
  c1.count();
  c2.count();
  std::cout << "c1のカウント数：" << c1.getCount() << std::endl;
  std::cout << "c2のカウント数：" << c2.getCount() << std::endl;
  std::cout << "トータルのカウント数:" << c1.getCount() + c2.getCount() << std::endl;
  return 0;
}