#include <iostream>
#include <string>
using namespace std;

int main(){
    // values to find 
    int t; cin >> t;
    int toFind[t];
    for(int i = 0; i < t; i++){
        cin >> toFind[i];
    }
    // for(int i = 0; i < t; i++){
    //     cout << toFind[i] << " ";
    // }

    // our array 
    int n, m; cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int k = 0; k < t; k++){
        bool tf = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(toFind[k] == arr[i][j]) {
                    string lol = to_string(i) + " " + to_string(j);
                    cout << lol << endl;
                    tf = true;
                }
            }
        }

        if (tf) continue;
        else cout << -1 << endl;
    }
}