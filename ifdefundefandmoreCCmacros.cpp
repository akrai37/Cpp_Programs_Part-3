#include<iostream>
using namespace std;


int main() {

#ifdef ANKUSH
cout<<"ankush is define"<<endl;
#else
cout<<"ankush is not define"<<endl;
#endif // ANKUSH

#undef ANKUSH
#ifndef ANKUSH
cout<<"ankush is define"<<endl;
#else
cout<<"ankush is not define"<<endl;
#endif // ANKUSH


return 0;
}
