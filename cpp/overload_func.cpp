#include <iostream>
#include <string>

using namespace std;

void date(string date){
  cout << "日付 " << date << endl;
}

// void date(char* date){
//   cout << "日付 " << date << endl;
// }

void date(int year, int month, int day){
  cout << "日付 " << year << "/" << month << "/" << day << endl;
}

int main(){
  date(2020, 02, 10);
  date("2020/2/10");
}
