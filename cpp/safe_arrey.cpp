#include <iostream>
#include <cstdlib>
using namespace std;

class array{
  int size;
  char* p;
public:
  array(int num);
  ~array(){
    delete [] p;
  }
  //参照を返す
  char& put(int i);
  char get(int i);
};

array::array(int num){
  p = new char [num];

  if(!p){
    cout << "memory error" << endl;
    exit(1);
  }
  size = num;
}

//putとgetは逆の操作

//配列に情報を格納
char& array::put(int i){
  if(i<0 || i>size-1){
    cout << "境界エラー" << endl;
    exit(1);
  }
  return p[i]; //p[i]への参照
}

//配列のデータを収得
char array::get(int i){
  if(i<0 || i>size-1){
    cout << "境界エラー" << endl;
    exit(1);
  }
  return p[i]; //文字を返す
}

int main(){
  array a(10);
  a.put(3) = 'x';
  a.put(2) = 'r';

  cout << a.get(3) << a.get(2) << endl;

  a.put(11) = 'E';

  return 0;
}
