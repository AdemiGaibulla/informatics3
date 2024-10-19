#include <iostream>

using namespace std;

int main(){
    int a;
    int count=0;

    for(int i=1;i<=100;i++){
        cin >> a;
        count+=a;
    }
    cout << count;
}