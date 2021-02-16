#include <iostream>
using namespace std;

class myclass{
  int x;
public:
  //コンストラクタのオーバーロードの代わりにデフォルト引数
  myclass(int n = 0){
    x = n;
  }
  int get_x(){
    return 0;
  }
};

int main(){
  myclass ob1(100);
  myclass ob2;

  cout << "ob1: " <<  ob1.get_x() << endl;
  cout << "ob2: " <<  ob2.get_x() << endl;
  return 0;
}
