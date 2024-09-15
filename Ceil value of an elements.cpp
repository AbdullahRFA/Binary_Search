#include <iostream>
#include <algorithm>
using namespace std;

int ceilValue(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int ceilVal = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            ceilVal = arr[mid];
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            ceilVal = arr[mid];
            right = mid - 1;
        }
    }

    return ceilVal;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int target;
    cin >> target;

    int ceilVal = ceilValue(arr, n, target);

    if (ceilVal != -1) {
        cout << "Ceil value of " << target << " is " << ceilVal << endl;
    } else {
        cout << "Ceil value not found in the array" << endl;
    }

    return 0;
}
