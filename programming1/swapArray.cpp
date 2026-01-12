#include <iostream>

using namespace std;

class Solution {
   public:
    void swap(int* a, int* b) {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
    void swap2(int* a, int* b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
    void swapArray(int arr1[], int arr2[], int n) {
        for (int i = 0; i < n; i++) {
            swap2(&arr1[i], &arr2[i]);
        }
    }
};

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    Solution sol;
    sol.swapArray(arr1, arr2, n);
    cout << "Array 1 after swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Array 2 after swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}