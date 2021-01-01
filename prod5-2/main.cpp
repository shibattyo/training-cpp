#include "object.h"
#include <iostream>

/*
次のプログラムの、クラスObjectは、生成したオブジェクトの数を、静的メンバ変数m_objectNumで数えている。
このクラスに、m_objectNumの値を取得するint型の静的メンバ関数getObjectNum()を追加し、
プログラムを、期待される実行結果が得られるように変更しなさい。
*/

int main() {
  Object *o1, *o2, *o3;
  o1 = new Object();
  o2 = new Object();
  o3 = new Object();
  std::cout << "オブジェクトの数:" << Object::getObjectNum() << std::endl;
  delete o3;
  std::cout << "オブジェクトの数:" << Object::getObjectNum() << std::endl;
  delete o2;
  delete o1;
  return 0;
}