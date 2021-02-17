#include <iostream>
#include <string>

using namespace std;

class samp {
  int a;
protected:
  int b;
public:
  int c;
  samp(int n, int m){
    a = n;
    b = m;
  }
  int get_a(){
    return a;
  }
  int get_b(){
    return b;
  }
};

int main(){
  samp ob(10,34);
  /*bは被保護のため非公開
  ob.b = 99;
  */
  ob.c = 91;

  cout << ob.get_a() << endl;
  cout << ob.get_b() << endl;
  cout << ob.c << endl;

  return 0;
}
