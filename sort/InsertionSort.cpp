#include <iostream>

using namespace std;

int main() {
    int n, key;
    cin >> n;
    int arr[n];


    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; ++i) {
        key = arr[i];
        int j = i;
        while (j > 0 and arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j -= 1;
            arr[j] = key;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }


    return 0;

};
// N^2