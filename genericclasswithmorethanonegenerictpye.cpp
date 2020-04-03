#include<iostream>
#include<cstdlib>
using namespace std;


template<class ankush ,class anil> class whoareyou{
ankush p1;
anil p2;
int definite;
public:
    whoareyou(ankush x, anil y){
    p1=x;
    p2=y;
    definite=103;
    }

    void display(){
    cout<<"value of p1= "<<p1<<" and the value of p2= "<<p2<<" and value of definite = "<<definite<<endl;
    }
};

int main(){

whoareyou<int,float> object1(23,54.45);
whoareyou<string,int> object2("ankush",155);

object1.display();
object2.display();


return 0;
}

