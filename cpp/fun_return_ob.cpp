#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class samp{
  char s[10];
public:
  void show(){
    cout << s << endl;
  }
  void set(char* str){
    strcpy(s, str);
  }
};

//samp型のオブジェクトを返す
samp input(){
  char s[10];
  samp str;

  cout << "文字列入力" << endl;
  cin >> s;

  str.set(s);

  return str;
}

int main(){
  samp object;

  object = input();
  object.show();
  return 0;
}
