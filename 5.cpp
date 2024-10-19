#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int a;
   cin >> a;
   int c=0;

   for(int i=0;i<=sizeof(a);i++){
    int d=a%10;
    c+=d;
    a=a/10;
   }
   cout << c;
}