#include "minmax.h"
#include <iostream>

/*
以下のプログラムを改造し、クラスMinMaxのメンバ関数max(),min()の引数の数を3つにし、
期待される実行結果にならい、3つの数の最大値・最小値を出せるようにプログラムを改造しなさい。
*/

using namespace std;

int main() {
  MinMax m;
  int n1 = 4;
  int n2 = 2;
  int n3 = 7;
  cout << n1 << "と" << n2 << "と" << n3 << "のうち、最大のものは" << m.max(n1,n2,n3) << endl;
  cout << n1 << "と" << n2 << "と" << n3 << "のうち、最小のものは" << m.min(n1,n2,n3) << endl;
  return 0;
}