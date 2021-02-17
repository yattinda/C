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

class derived : public base{
  int y;
public:
  void set_x_y(int n, int m){
    set_x(n);
    y = m;
  }

  void show_x_y(){
    show_x();
    cout << y << endl;
  }
}

int main(){
  derived object;
  ob.set_x_y(100, 24);
  ob.show_x_y();

  return 0;
}
