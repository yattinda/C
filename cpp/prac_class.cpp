#include <iostream>
using namespace std;

class myclass {
  int seacret_num;

public:
  void set_seacret_num(int num);
  //自動インライン化
  // void set_seacret_num(int num){
  //   seacret_num = num;
  // }
  int get_seacret_num();
  //自動インライン化
  // int get_seacret_num(){
  //   return seacret_num;
  // }
};

void myclass::set_seacret_num(int num){
  seacret_num = num;
}

int myclass::get_seacret_num(){
  return seacret_num;
}

int main(){
  int i;
  myclass ob1, ob2, ob3;
  int ob3_num;
  ob1.set_seacret_num(3);
  ob2.set_seacret_num(114514);
// ob2.seacret_num = 100 はseacret_numが非公開のため無理
  cout << "数字を入力"  << endl;
  cin >> ob3_num;
  ob3.set_seacret_num(ob3_num);

  cout << "ob1 is " << ob1.get_seacret_num() << endl;
  cout << "ob2 is " << ob2.get_seacret_num() << endl;
  for(i=0; i<2; i++) cout << "ob3 is " << ob3.get_seacret_num() << endl;
}
