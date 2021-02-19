//newは型によって自動でメモリを割り当てる sizeofがいらない
//デストラクタは配列の要素ごとに一回呼び出される

#include <iostream>
using namespace std;

class samp{
  int i, j;
public:
  void set_i_j(int a, int b){
    i = a;
    j = b;
  }
  ~samp(){
    cout << "destractor" << endl;
  }
  int get_product(){
    return i * j;
  }
};

int main(){
  samp* p;
  int i;

  //p = new int  (整数のメモリ割当)
  //オブジェクト配列の割当
  p = new samp[10];

  if(!p){
    cout << "memory error" << endl;
    return 1984;
  }
  for(i=0; i<10; i++){
    p[i].set_i_j(i, i);
  }
  for(i=0; i<10; i++){
    cout << i << "の二乗は" << p[i].get_product() << endl;
  }

  delete [] p;
  return 0;
}
