#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int nearestNum(const int arr[], int n, int k){
    int dif[n], nearest = 0, min = INT_MAX;
    for (int i = 0; i < n; i++){
        dif[i] = abs(arr[i] - k);
        if (dif[i] == 0) { 
            nearest = i;
            break;
        } else if (dif[i] < min) {
            min = dif[i];
            nearest = i;
        }
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