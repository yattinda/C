#include <iostream>
#include <string>

using namespace std;

//基本クラス（継承元）
class base {
  int b;

public:
  void set_b(int n);
  int get_b();
};

//派生クラス

class derived : public base {
  int d;
public:
  void set_d(int d);
  int mul();
};

void base :: set_b(int n){
  b = n;
}

int base :: get_b(){
  return b;
}

void derived::set_d(int n){
  d = n;
}

int derived::mul(){
  return d * get_b();
}

int main (){
  derived object;

  object.set_b(4);
  object.set_d(25);

  cout << object.mul() << endl;
}
