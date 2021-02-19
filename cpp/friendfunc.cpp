#include <iostream>
using namespace std;
//前方宣言
class track;

class car{
  int passengers, speed;
public:
  car(int p, int s){
    passengers = p;
    speed = s;
  }
//フレンド関数の宣言
  friend int speed_comparision(car c, track t);
};

class track{
  int weight, speed;
public:
  track(int w, int s){
    weight = w;
    speed = s;
  }
//フレンド関数の宣言
  friend int speed_comparision(car c, track t);
};

//フレンド関数なので非公開メンバのspeedにアクセスできる
//フレンド関数はフレンド元のクラスのメンバでない => ob1.car();は無理
int speed_comparision(car c, track t){
  return (c.speed - t.speed);
}

int main(){
  car c(4, 100);
  track t(1145614, 100);
  int speed_def = speed_comparision(c, t);
  speed_comparision(c, t);
  cout << "speedを比較" << endl;
  if(speed_def > 0){
    cout << "車が速い" << endl;
  } else if (speed_def < 0) {
    cout << "トラックが速い" << endl;
  } else {
    cout << "同じ速さ" << endl;
  }
  return 0;
}
