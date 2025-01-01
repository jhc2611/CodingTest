# include <iostream>
using namespace std;

int main() {
    int N, M;
    int arr[100] = {0,};
    cin >> N >> M;
    for (int i=0;i<N;i++)
        arr[i] = i+1;
    for (int i=0; i<M;i++){
        int a, b;
        cin >> a >> b;
        for (int j=0; j<=(b-a)/2;j++)
            swap(arr[a+j-1], arr[b-j-1]);
    }
    for (int i=0;i<N;i++)
        cout << arr[i] << " ";
    return 0;
}