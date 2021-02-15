#include <iostream>
using namespace std;

/*動的配列は初期化できないため初期値があるコンストラクタがある場合は
初期値のないコンストラクタもオーバーロードする*/
class myclass{
  int x;
public:
  //コンストラクタを2通りにオーバーロード

  //初期値なし
  myclass(){
    x = 0;
  }
  //初期値あり
  myclass(int n){
    x = n;
  }
  int get_x(){
    return x;
  }
  // void set_x(int n){
  //   x = n;
  // }
};

int main(){
  myclass* p;

  //一つのメンバ変数のみ初期化
  myclass ob(10);

  //動的配列は初期値を設定できない
  p = new myclass[10];

  if(!p){
    cout << "memory error" << endl;
    return 1;
  }

  int i;

  //全ての要素に対し、obで初期化
  for(i=0; i<10; i++){
    p[i] = ob;
  }
  for(i=0; i<10; i++){
    cout << "p[" << i << "] " << p[i].get_x() << endl;
  }

  return 0;
}
