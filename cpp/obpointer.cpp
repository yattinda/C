#include <iostream>
#include <string>

using namespace std;

class myclass{
  int i;
public:
  myclass(int x); //コンストラクタ
  int get_square();
};

myclass::myclass(int x){
  i = x;
}

int myclass::get_square(){
  return i * i;
}

int main(){
  myclass object(50);
  myclass* object_pointer;  //オブジェクトへのポインタ

  object_pointer = &object;  //ポインタにアドレスを代入；

//ドット演算子でオブジェクトのメンバにアクセス
  cout << "オブジェクトを使った値（二乗）：" << object.get_square() << endl;
//アロー演算子でポインタからオブジェクトのメンバにアクセス
  cout << "ポインタを使った値（二乗）：" << object_pointer->get_square() << endl;

  return 0;
}
