#include <iostream>
using namespace std;

class myclass{
  int x;
public:
  //コンストラクタを2通りにオーバーロード
  myclass(){
    x = 0;
  }
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
  myclass ob(10);

  p = new myclass[10];

  if(!p){
    cout << "memory error" << endl;
    return 1;
  }

  int i;

  for(i=0; i<10; i++){
    p[i] = ob;
  }
  for(i=0; i<10; i++){
    cout << "p[" << i << "] " << p[i].get_x() << endl;
  }

  return 0;
}
