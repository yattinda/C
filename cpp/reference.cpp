#include <iostream>
using namespace std;

//&をつけて参照仮引数を宣言
void swapargment(int& x, int& y){
  int tmp;

  tmp = x;
  x = y;
  y = tmp;
}

int main(){
  int i, j;
  cout << "整数を2つ入力" << endl;
  cin >> i >> j;
  cout << i << " "<< j << endl;
  cout << "swap" << endl;
  //参照仮引数を使う場合引数に＆いらない
  swapargment(i, j);
  cout << i << " " << j << endl;
}
