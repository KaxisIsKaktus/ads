#include <iostream>
#include <cmath>

using namespace std;

int nearestNum(const int arr[], int n, int k){
    int dif[n + 1], nearest = 0;
    dif[n] = 100000;
    for (int i = 0; i < n; i++){
        dif[i] = abs(arr[i] - k);
        // cout << dif[i] << " ";
    }

    for(int i = n - 1; i <= 0; i++){
        if (dif[i] == 0) nearest = dif[i];
        else if (dif[i] <= dif[i+1]) nearest = dif[i];
    }
    return nearest;
}

int main(){
    int n, k;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;

    cout << nearestNum(arr, n, k);
}