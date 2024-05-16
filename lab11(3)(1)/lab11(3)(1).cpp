#include <iostream>
#include <Windows.h>
using namespace std;

int countOnes(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 1) {
            count++;
        }
    }
    return count;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "Введіть елемент " << i << ": ";
        cin >> arr[i];
    }
    int onesCount = countOnes(arr, n);
    cout << "Кількість елементів дорівнює 1: " << onesCount << endl;
    delete[] arr;

    return 0;
}
