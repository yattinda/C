#include <iostream>
using namespace std;

class samp{
  int i;
public:
  //コンストラクタが引数を一つのみ持つ
  samp(int n){
    i = n;
  }
  int get_a(){
    return i;
  }
};

int main(){
  samp object[5][2] = {
    1, 2,
    3, 4,
    5, 6,
    7, 8,
    9, 10,
  };

  int i, j;
  for(i=0; i<5; i++){
    for(j=0; j<2; j++){
    cout << object[i][j].get_a() << endl;
    }
  }
  return 0;
}
