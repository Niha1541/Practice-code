
#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

double avgArray(int arr[], int n) {
    int s = sumArray(arr, n);
    return (double)s / n;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s = sumArray(arr, n);
    double avg = avgArray(arr, n);

    cout << "Sum = " << s << endl;
    cout << "Average = " << avg << endl;

    return 0;
} NIHA
