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

char& array::put(int i){
  if(i<0 || i>size-1){
    cout << "境界エラー" << endl;
    exit(1);
  }
  return p[i];
}

char array::get(int i){
  if(i<0 || i>size-1){
    cout << "境界エラー" << endl;
    exit(1);
  }
  return p[i];
}

int main(){
  array a(10);
  a.put(3) = 'x';
  a.put(2) = 'r';

  cout << a.get(3) << a.get(2) << endl;

  a.put(11) = 'E';

  return 0;
}
