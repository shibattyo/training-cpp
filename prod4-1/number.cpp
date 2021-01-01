#include "number.h"
#include <iostream>

//　コンストラクタ
Number::Number() : a(0), b(0)
{
  std::cout << "オブジェクトを生成します" << std::endl;
};

//　デストラクタ
Number::~Number()
{
  std::cout << "オブジェクトを削除します" << std::endl;
}

//  二つの数値を設定
void Number::setNumbers(int n1, int n2)
{
    a = n1;
    b = n2;
}
int Number::getAdd()
{
    return a + b;
}