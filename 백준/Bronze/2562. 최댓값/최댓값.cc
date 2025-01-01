# include <iostream>
using namespace std;

int main() {
    int num, idx;
    int max = 0;
    for (int i=1;i<=9;i++){
        cin >> num;
        if (num > max) {max = num; idx = i;}
    }
    cout <<  max << "\n" << idx;
    return 0;
}