#include <iostream>
#include <string>

using namespace std;

class base{
  int x;
public:
  void set_x(int n){
    x = n;
  }
  void show_x(){
    cout << x << endl;
  }
};

//基本クラスをprivateで継承
class derived : private base{
  int y;
public:
  //派生クラス内からは継承元にprivateによってアクセスできる
  void set_x_y(int n, int m){
    set_x(n);
    y = m;
  }

  void show_x_y(){
    show_x();
    cout << y << endl;
  }
};

int main(){
  derived ob;
  ob.set_x_y(100, 24);
  ob.show_x_y();

  return 0;
}
