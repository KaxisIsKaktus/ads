#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<char> vec1;
    vector<char> vec2;
    string a, b;
    bool tf = true;
    cin >> a >> b;
    
    //vector input
    for(int i = 0; i < a.size(); i++){
        if (a[i] >= 'a' and a[i] <= 'z') vec1.push_back(a[i]);
        else vec1.pop_back();
    }
    for(int i = 0; i < b.size(); i++){
        if (b[i] >= 'a' and b[i] <= 'z') vec2.push_back(b[i]);
        else vec2.pop_back();
    }

    //checking
    if(vec1.size() != vec2.size()) {
        tf = false;
    }
    else {
        for(int i = 0; i < vec1.size(); i++){
            if(vec1[i] == vec2[i]) continue;
            else {
                tf = false;
                break;
            }
        }
    }
    
    if(tf) cout << "Yes";
    else cout << "No";
}