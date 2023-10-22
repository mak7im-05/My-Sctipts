#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n]; //0

    for (long long i = 0; i < n; ++i) {
        arr[i] = i;
    }

    for (long long i = 2; i < n; ++i) {
        swap(arr[i], arr[i / 2]);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i]+1 << ' ';
    }
}