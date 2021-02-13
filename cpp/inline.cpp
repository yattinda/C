#include <iostream>
using namespace std;

inline int even(int x){
    return !(x%2);
}

int main(void){
    cout << "数字を入力" << endl;
    cin >> a;
    if(even(a)){
        cout << a << "は偶数です" << endl;
    } else {
        cout << a << "は奇数です" << endl;
    }
    return 0;
}

//高速化が可能（関数呼び出しが必要ない）、ファイルサイズが大きくなる
//インライン関数が長いとコンパイラが判断すれば、自動的に関数にするらしい
