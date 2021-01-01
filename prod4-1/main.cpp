#include <iostream>
#include "number.h"

/*
以下のプログラムに、指定した変更を加えなさい。
1,Numberクラスにコンストラクタをつけ、メンバ変数a,bを0で初期化する。
2,main.cpp内の最後で、pNのメモリを解放する。
*/


int main(){
    Number* pN;
    pN = new Number();
    pN->setNumbers(1, 2);
    std::cout << pN->getAdd() << std::endl;
    delete pN;
    return 0;
}