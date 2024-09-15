#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int count = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int diff = arr[mid] - target;
        if (diff == 0) {
            count++;
            int i = mid - 1;
            while (i >= 0 && arr[i] == arr[mid]) {
                count++;
                i--;
            }
            i = mid + 1;
            while (i < arr.size() && arr[i] == arr[mid]) {
                count++;
                i++;
            }
            return count;
        } else if (diff > 0) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return count;
}
int countPairsWithDifferenceK(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int num : arr) {
        count += binarySearch(arr, num + k);
    }
    return count;
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pairsCount = countPairsWithDifferenceK(arr, k);
    cout << pairsCount << endl;
    return 0;
}

