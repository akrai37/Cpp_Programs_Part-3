#include<iostream>
#include<cstdlib>
using namespace std;

template<class type> class nation{
type p1;

public:
    nation(type x){
    p1=x;
    cout<<"this is template"<<endl;
    }
   void display(){
   cout<<"value of p1 = "<<p1<<endl;
   }
};

template<> class nation<int>{
int p1;

public:
    nation(int x){
    p1=x;
    cout<<"this is explicit template"<<endl;
    }
   void display(){
   cout<<"value of p2 = "<<p1<<endl;
   }
};

int main(){

nation<string> object1("ankush");
nation<int> object2(323);

object1.display();
object2.display();

return 0;
}



















