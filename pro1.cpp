#include <iostream>
#include<string>
using namespace std;
class Car {
public:
string name ;
int price;
int seats;
string type ;
};
void print (Car c ){
    cout<< c.name<<" " << c.price<<" "<< c.seats<<" "<< c.type<< endl;

}
int main(){
    Car C1 ;
    cin>> C1.name;
     cin>>C1.price;
    cin>>C1.seats;
     cin>>C1.type;
     print(C1);
     return(0);

}