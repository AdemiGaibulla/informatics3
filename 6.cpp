#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int a;
    cin >> a;
    int b;

    for(int i=a;i>1;i--){
        if(a%i==0){
            b=i;
        }
    }
    cout << b;
}