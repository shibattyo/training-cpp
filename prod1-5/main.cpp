#include <iostream>

/*
「問題」
C++のcinおよびcoutを使って、
2つの整数をキーボードから入力させ、その二つの数の和・差を表示するプログラムを作りなさい。ß
*/

using namespace std;

int add(int a, int b) {
  int result = a + b;
  return result;
}

int sub(int a, int b) {
  int result = a - b;
  return result;
}

int main() {
  int input1, input2;
  int add_result, sub_result;
  cout << "1つ目の数を入力してください:";
  cin >> input1;
  cout << "2つ目の数を入力してください:";
  cin >> input2;
  cout << "2つの合計は:" << add(input1, input2) << endl;
  cout << "2つの差分は:" << sub(input1, input2) << endl;
  return 0;
}