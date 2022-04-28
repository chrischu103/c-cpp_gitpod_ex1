#include <iostream>

using namespace std;
int add(int x,int y){
    return x+y;
    
}
int sub(int x,int y){
    return x-y;
    
}
int mul(int x,int y){
    return x*y;
}
int divi(int x,int y){
    return x/y;
}
int main()
{
    int x=3,y=6;
    cout << "add x + y = " << add(x,y) << endl;
    cout << "sub x - y = " << sub(x,y) << endl;
    cout << "aws x * y = " << mul(x,y) << endl;
    cout << "esd x / y = " << divi(x,y) << endl;
    cout<<"Hello World" << endl;
    
return 0;
}
