#include<iostream>
#include<cstdlib>
using namespace std;

template<class type1=string,class type2=int>  class myclass{
type1 p1;
type2 p2;

public:
    myclass(type1 x,type2 y){
    p1=x;
    p2=y;
    }

    void display(){
    cout<<"vlaue of p1= "<<p1<<" and value  of p2 = "<<p2<<endl;
    }
};

int main(){

myclass <> object1("ankush",13);
myclass <int,float> object2(546,154.44);
myclass <float> object3 (212.433,13);
myclass <> object4("ank",134);

object1.display();
object2.display();
object3.display();
object4.display();

return 0;
}
