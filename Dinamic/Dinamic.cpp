#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Input size masiv: ";
    cin >> size;

    int* arr1 = new int[size];
    cout << "Input " << size << " number: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    cout << "Masiv 1: ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    int* arr2 = new int[size + 1];
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
    arr2[size] = 100;
    cout << "Masiv 2: ";
    for (int i = 0; i < size + 1; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;

}