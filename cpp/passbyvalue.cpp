#include <iostream>
using namespace std;

class samp {
  int i;
public:
  samp(int n){
    i = n;
    cout << "コンストラクタ呼び出し" << endl;
  }

  ~samp(){
    cout << "デストラクタ呼び出し" << endl;
  }

  int get_i(){
    return i;
  }
};

int sqr_it(samp object){
  return object.get_i() * object.get_i();
}

int main(){
  samp ob(1000);

  cout << sqr_it(ob) << endl;
  cout << "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
  return 0;
}
