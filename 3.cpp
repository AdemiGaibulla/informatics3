#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int a,b;
   cin >> a >> b;

   for(int i=a;i<=b;i++){
    double c = sqrt(i);
    if(fmod(c,1.0)==0){
        cout << i << " ";
    }
   }
}