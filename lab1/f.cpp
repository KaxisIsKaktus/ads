#include <bits/stdc++.h>
using namespace std;

long long n;

int main(){
    cin>>n;
    vector<bool> prime (7925, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= 7924; ++i){
        if (prime[i]){
            if (i * 1ll * i <= 7924){
                for (int j=i*i; j <= 7924; j+=i){
                    prime[j] = false;
                }
            }
        }
    }
    long long k = 2, ans, x = 0;
    while(x < n){
        if(prime[k]){
            ans = k;
            x++;
        }
        k++;
    }
    cout << ans;
}