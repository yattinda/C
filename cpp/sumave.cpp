
#include <iostream>

using namespace std;

int main(){
  int a = 0, b = 0, c = 0 ;
  cout << "===9999で入力終了===" << endl;

  while(b != 9999){
    cin >> b;
    if(b != 9999){
      a = a + b;
      c++;
    }
  }
  cout << c << "回の合計は" << a <<"です" << endl;
  cout << "よって平均は" << a/c << "です" << endl;

  return 0;
}
