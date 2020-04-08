#include<iostream>
#include<cstdlib>
using namespace std;


template<class ankush> class whoareyou{
ankush p1;
ankush p2;

public:
    whoareyou(ankush x, ankush y){
    p1=x;
    p2=y;
    }

    void display(){
    cout<<"value of p1= "<<p1<<" and the value of p2= "<<p2<<endl;
    }
};

int main(){

whoareyou<int> integerobject(23,54);
whoareyou<string> stringobject("ankush","anil");

integerobject.display();
stringobject.display();


return 0;
}

