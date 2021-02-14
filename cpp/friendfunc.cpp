#include <iostream>
using namespace std;

class myclass{
  int a, b;
public:
  myclass(int i, int j){
    a = i;
    b = j;
  }
//フレンド関数の宣言
  friend int isfactor(myclass ob);
};

//フレンド関数なので非公開メンバのa,bにアクセスできる
//フレンド関数はフレンド元のクラスのメンバでない => ob1.isfactor();は無理
int isfactor(myclass ob){
  if ((ob.a % ob.b) == 0){
    return 1;
  } else {
    return 0;
  }
}

int main(){
  myclass ob1(100, 50), ob2(88, 3);
  if(isfactor(ob1) == 1){
    cout << "50は100の因数" << endl;
  } else {
    cout << "50は100の因数ではない" << endl;
  }
  return 0;
}
