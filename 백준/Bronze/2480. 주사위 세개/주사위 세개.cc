# include <iostream>
using namespace std;

int main() {
    int a, b, c, count;
    cin >> a >> b >> c;
    if (a == b&&a == c)
        cout << 10000 + a*1000;
    else if (a==b||a==c)
        cout << 1000 + a*100;
    else if (b == c)
        cout << 1000 + b*100;
    else
        cout << max(max(a,b),c)*100;
}
