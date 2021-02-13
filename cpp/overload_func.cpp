#include <iostream>
#include <string>

using namespace std;

// void date(string date){
//   cout << "日付 " << date << endl;
// }

//オーバーロードのインライン
inline string date(string date){
  return date;
}

// void date(char* date){
//   cout << "日付 " << date << endl;
// }

void date(int year, int month, int day){
  cout << "日付 " << year << "/" << month << "/" << day << endl;
}

int main(){
  //date("2020/02/14")
  cout << "日付 " <<  date("2020/02/14") << endl;
  date(2020, 02, 10);
  return 0;
}
