#include<iostream>
using namespace std;

template<typename ankush> void display(ankush variable){
cout<<"we have passed "<<variable<<endl;
}//we can use class also

int main(){

display(10);
display(17.3543);
display(" this is string");


return 0;
}
