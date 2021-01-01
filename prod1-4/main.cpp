#include <iostream>
#include <string>

/*
「問題」
以下の実行例にならい、cinおよび、coutを用いて、
コンソールから数値を入力し、その数を２倍した結果を表示するプログラムを作りなさい。
*/

using namespace std;

int main()
{
  int input, result;
  cout << "数値を入力してください：" << endl;
  cin >> input;
  result = input * 2;
  cout << input <<  "を2倍した数は、" << result << "です。" << endl;
  return 0;
}