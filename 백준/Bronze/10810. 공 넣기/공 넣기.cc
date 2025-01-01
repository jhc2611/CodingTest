# include <iostream>
using namespace std;

int main() {
    int N, M;
    int arr[100] = {0,};
    cin >> N >> M;
    for (int i=0; i<M;i++){
        int a, b, c;
        cin >> a >> b >> c;
        for (int j=a;j<=b;j++)
            arr[j-1] = c;
    }
    for (int i=0;i<N;i++)
        cout << arr[i] << " ";
    return 0;
}