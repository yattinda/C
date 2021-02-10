#include <iostream>

using namespace std;

/*オブジェクト作成から破棄までの時間測定
デストラクタが呼び出されると経過時間が表示*/
class timer {
  clock_t start;

public:
  timer()//constructor
  ~timer()//destructor
};

timer::timer(){
  cout << "計測開始 (コンストラクタ呼び出し)" << endl;
  start = clock();
}

timer::~timer(){
  clock_t end;
  end = clock();
  cout << "計測終了 (デストラクタ呼び出し)" << endl;
  cout << "経過時間 " << (end - start) / ClOCK_PER_SEC << endl;
}

int main(){
  timer object;
  char enter;

  cout << "Press Enter to stop" << endl;
  cin >> c;
  return 0;
}
