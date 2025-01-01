# include <iostream>
using namespace std;

int main() {
    int N;
    int M = -1;
    double total = 0;
    double num;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> num;   
        total += num;
        if (M < num)
            M = num;
    }
    cout << total/N/M*100;
    return 0;
}