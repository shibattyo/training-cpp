#include <iostream>
#include "fighter.h"

/*
以下のプログラムに、飛行機クラスAirplaneを継承した戦闘機クラスFighterを指定されたとおりの仕様で追加し、
期待された実行結果通りにプログラムが動くように改造しなさい。
*/

int main() {
  Fighter f;
  Airplane a;
  a.fly();
  f.fly();
  f.fight();
  return 0;
}

