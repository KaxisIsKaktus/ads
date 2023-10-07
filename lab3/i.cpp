#include <iostream>
using namespace std;

string binarySearch(const int arr[], int low, int high, int k){
    while (low <= high){
        int mid = low + (high - low) / 2;

        if (arr[mid] == k) return "Yes";

        if (k > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return "No";
}

int main(){
    int n, k; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> k;
    cout << binarySearch(arr, 0, n - 1, k);
}