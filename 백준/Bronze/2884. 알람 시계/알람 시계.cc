# include <iostream>
using namespace std;

int main() {
    int h, m, time;
    cin >> h >> m;
    time = h*60 + m;
    time -= 45;
    if (time<0)
        time += 1440;
    h = time/60;
    m = time%60;
    cout << h << " " << m;
}