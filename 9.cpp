#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int n;
    int count=0;

    for(int i=1;i<=a;i++){
        cin >> n;
        count+=n;
    }
    cout << count;
}