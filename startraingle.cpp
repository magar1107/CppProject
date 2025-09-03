
#include <iostream>
using namespace std;

int main() {
   int i = 1;
   int j ;
   int n ;
   cin>> n ;
   j=1;
while (i<=n){
    j=1;
    while (j<=i){
       cout<<"#";
      j=j+1;

    }
    cout<<endl;
    i++;
}
    return 0;
}
