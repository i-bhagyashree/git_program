#include <iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
    short int num = -32768;
   
    int c = -2;
    cout<<"num "<<num<<endl;
    cout<<"num++"<<endl;
    num = c+num;
    cout<<num;
    return 0;
 }
 