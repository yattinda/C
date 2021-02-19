#include <iostream>
using namespace std;

class samp{
  int a,b;
public:
  samp(int n,int m){
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
  samp ob[3] = {
    samp(33, 04),
    samp(04, 12),
    samp(11, 92),
  };
  int i;

  samp* p;
  //配列の開始アドレス
  p = ob;

  for(i=0; i<3; i++){
    cout << p->get_a() << p->get_b() << endl;
    //次のオブジェクトへ
    p++;
  }
  return 0;
}
