#include <iostream>
using namespace std;

int main(){
  int h_wage, time;

  cout << "時給を入力(円)" << endl;
  cin >> h_wage;
  cout << "労働時間を入力(時間)" << endl;
  cin >> time;

  cout << h_wage * time << endl;

  return 0;
}
