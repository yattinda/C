
#include <iostream>

using namespace std;

int kaijyo(int n){

  if (n == 0)
    return 1;
  else
    return n * kaijyo(n - 1); //再帰呼び出し
}

int main()
{
  int i;
  for (i=0; i<16; i++)

    cout << i << "! = " << kaijyo(i) << endl;

  return 0;

}
