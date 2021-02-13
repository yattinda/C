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
