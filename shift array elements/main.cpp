#include <iostream>

using namespace std;
int main() {

    int N, K;
    cin >> N >> K;

    int arr1[N], arr2[N];

    for(int i = 0; i < N; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < N; i++) {
        arr2[i] = arr1[ (((i - K) % N ) + N) % N];
    }
    for (int i = 0; i < N; ++i) {
        cout << arr2[i] << ' ';
    }

    return 0;
}
