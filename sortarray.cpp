#include <iostream>
using namespace std;

void sortArray(int arr[], int n, bool ascending) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if((ascending && arr[j] > arr[j+1]) || (!ascending && arr[j] < arr[j+1])) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, order;
    cout << "Enter the number of elements:\n";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Choose sorting order (1 for Ascending, 2 for Descending): ";
    cin >> order;

    bool ascending = (order == 1);

    sortArray(arr, n, ascending);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}