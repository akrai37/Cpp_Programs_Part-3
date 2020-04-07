#include<iostream>
#include<cstdlib>
using namespace std;

namespace app{

namespace verson1{
void display(){
cout<<"this is display one"<<endl;
}
}

namespace verson2{
void display(){
cout<<"this is display two"<<endl;
}
}

inline namespace verson3{
void display(){
cout<<"this is display three"<<endl;
}
}

namespace verson3{
void whatisit(){
cout<<"this is display four"<<endl;
}
}
}

int main(){

app::display();
app::verson3::whatisit();


return 0;

}


