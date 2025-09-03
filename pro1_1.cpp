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


    Car C1 ;
    cin>>C1.name;
   cin>> C1.price;
   cin>> C1.seats;
   cin>> C1.type;
print (C1);

Car C2;
cin>>C2.name;
   cin>> C2.price;
   cin>> C2.seats;
   cin>> C2.type;
print (C2);

}
