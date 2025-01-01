# include <iostream>
using namespace std;

int main() {
    int N;
    int arr[101];
    int v;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    cin >> v;

    int count = 0;
    for (int i=0;i<N;i++)
        if (arr[i]==v)
            count++;
    cout << count;
    return 0;
}