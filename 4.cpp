#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    char x;
    cin >> a >> x;
    int count=0;

    for(int i=0;i<a.length();i++){
        if(a[i]==x){
            count+=1;
        }

    }
    cout << count;
}