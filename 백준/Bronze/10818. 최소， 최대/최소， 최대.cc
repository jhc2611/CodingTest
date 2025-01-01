# include <iostream>
using namespace std;

int main() {
    int N, num;
    cin >> N ;
    int min = 1000000;
    int max = -1000000;
    for (int i=0;i<N;i++){
        cin >> num;
        if (num < min) min = num;
        if (num > max) max = num;
    }
    cout << min << " " << max << endl;
    return 0;
}