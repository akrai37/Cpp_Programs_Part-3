#include<iostream>
#include<cstdlib>
using namespace std;
#define WINDOWS 1
#define LINUX 2
#define OS 3

#define MAC LINUX

int main(){

#if MAC==WINDOWS
cout<<"mac is equal to windows"<<endl;

#elif MAC==OS
cout<<"mac is equal to LINUX"<<endl;

#else
cout<<"dont know what is it"<<endl;

#endif
cout<<"this is conditional compilation"<<endl;


return 0;
}
