#include <iostream>
using namespace std;

class myclass{
  int a, b;
public:
  myclass(int n, int m){
    a = n;
    b = m;
  }
  int add(){
    return a + b;
  }
  void show();
};

void myclass::show(){
  int t;
  // t = add() 省略形
  t = this->add();

  cout << t << endl;
}

int main(){
  myclass ob(10, 56);
  ob.show();
  return 0;
}
