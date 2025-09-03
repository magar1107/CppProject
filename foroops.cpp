#include<iostream>
#include<string>
using  namespace std ;
class Car {
    public:
    string name ;
    int price;
    int seats ;
    string type ;

};
void print(Car C ){

    cout<<C.name<<" "<<C.price<<" " <<C.seats<<" "<<C.type<<" "<<endl;

}
int main(){
        Car C1;
    int j;
    cin>>j;
    for(int i=0 ; i<=j ; i++){

       cin>>C1.name;
   cin>> C1.price;
   cin>> C1.seats;
   cin>> C1.type;
print (C1);

    }

}
