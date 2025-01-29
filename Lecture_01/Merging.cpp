#include <bits/stdc++.h>>
using namespace std;

int main() {
    int arr1[] = {5, 2, 9};
    int arr2[] = {4, 8, 1};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merge[size1 + size2];

    
    int i;
    for (i = 0; i < size1; i++) {
        merge[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++) {
        merge[i + j] = arr2[j];
    }
    for (int k = 0; k < size1 + size2; k++) {
        cout << merge[k] << " ";
    }

    return 0;
}
