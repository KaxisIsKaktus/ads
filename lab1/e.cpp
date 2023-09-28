#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> boris;
    queue<int> nursik;
    int a = 0;

    for(int i = 0; i < 5; i++){
        cin >> a;
        if (a == 0) a = 10;
        boris.push(a);
    }
    for(int i = 0; i < 5; i++){
        cin >> a;
        if (a == 0) a = 10;
        nursik.push(a);
    }

    a = 0;

    while(!boris.empty() && !nursik.empty()){
        if (boris.front() == 0 && nursik.front() == 9){
            boris.push(boris.front());
            boris.push(nursik.front());
            boris.pop();
            nursik.pop();
        } else if (nursik.front() == 0 && boris.front() == 9){
            nursik.push(boris.front());
            nursik.push(nursik.front());
            nursik.pop();
            boris.pop();
        } else if ((boris.front() > nursik.front())){
            boris.push(boris.front());
            boris.push(nursik.front());
            boris.pop();
            nursik.pop();
        } else if (nursik.front() > boris.front()){
            nursik.push(boris.front());
            nursik.push(nursik.front());
            nursik.pop();
            boris.pop();
        }

        if (a == 1000000) {
            cout << "blin nichya";
            break;
        } 
        a++;
    }

    if (nursik.size() == 0) cout << "Boris " << a;
    else if (boris.size() == 0) cout << "Nursik " << a;
}