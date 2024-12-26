# include <iostream>
using namespace std;

int main() {
    int h, m, c, time;
    cin >> h >> m >> c;
    time = h*60 + m;
    time += c;
    if (time>=1440)
        time -= 1440;
    h = time/60;
    m = time%60;
    cout << h << " " << m;
}