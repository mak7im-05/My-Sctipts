#include <iostream>
using namespace std;


void merge(long long arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Создаем временные подмассивы
    int L[n1], R[n2];

    // Копируем данные во временные подмассивы L[] и R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Слияние временных подмассивов обратно в arr[l..r]
    i = 0; // Индекс первого подмассива
    j = 0; // Индекс второго подмассива
    k = left; // Индекс сливаемого подмассива
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Копирование оставшихся элементов L[], если они есть
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Копирование оставшихся элементов R[], если они есть
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Функция сортировки слиянием
void mergeSort(long long arr[], int left, int right) {
    if (left < right) {
        // Находим среднюю точку
        int mid = left + (right - left) / 2;

        // Рекурсивно сортируем оба подмассива
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Сливаем два подмассива
        merge(arr, left, mid, right);
    }
}