# include <iostream>
using namespace std;

int main() {
    int total, num, p, n, score;
    cin >> total >> num;
    for (int i=0; i<num;i++){
        cin >> p >> n;
        total -= p*n;
    }
    if (total == 0)
        cout << "Yes";
    else
        cout << "No";
}