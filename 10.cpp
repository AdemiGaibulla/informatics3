#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    string a;
    cin >> a;
    int b=0;
    reverse(a.begin(),a.end());

    for(int i=0;i<a.length();i++){
        if(a[i]=='0'){
            continue;
        }else if(a[i]=='1'){
            b+=pow(2,i);
        }
    }
    cout << b;
}