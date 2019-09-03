
#include <iostream>

using namespace std;

int main()
{
  int x, y, z;

  cout << "あなたの身長(cm)";
  cin >> x;
  cout << "あなたの体重(kg)";
  cin >> y;

  cout << "BMIは" << y << "を" << x << "の二乗で割ったものです" << endl;
  z = y / ((x * x)/10000);
  cout << "あなたのBMIは" << z << "です" << endl;

  if(z < 18.5){
    cout << "あなたは痩せすぎです" << endl;
  }
  else if (z > 25){
    cout << "あなたは太り過ぎです" << endl;
  }
  else{
    cout << "あなたちょうどいいね" << endl;
  }


  return 0;

}
