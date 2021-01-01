#include <iostream>
#include <string>
/*
「問題」
cinおよび、coutを用いて、実行例にならい、コンソールから姓と名を入力し、
名前を表示するプログラムをつくりなさい。ただし、出力する名前は、姓と名を＋演算子で結合して出力すること。
*/

using namespace std;

int main() {
  string sername, name;
  cout << "姓を入力してください" << endl;
  cin >> sername;
  cout << "名を入力してください" << endl;
  cin >> name;
  cout << "あなたの名前は「" << sername+ name << "」です。" << endl;
  return 0;
}