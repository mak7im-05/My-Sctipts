#include <iostream>

using namespace std;

void quickSort(int a[], int left, int right) {
    int i = left;
    int j = right;
    int key = a[(left + right) / 2];

    while (i <= j) {
        while (a[i] < key) {
            i++;
        }
        while (a[j] > key) {
            j--;
        }
        if (i <= j) {
            int buf = a[i];
            a[i] = a[j];
            a[j] = buf;
            i++;
            j--;
        }
    }

    if (left < j) {
        quickSort(a, left, j);
    }
    if (i < right) {
        quickSort(a, i, right);
    }
}

int main() {
    int n;
    int k = 3;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int t = a[i];
        a[i] = a[(((i - k) % n) + n) % n];
        a[(((i - k) % n) + n) % n] = t;
    }


    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }

    return 0;
}