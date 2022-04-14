#include <iostream>

using namespace std;

int main()
{
    int i[9] = {1,2,3,5,6,9,8,7,4};
    int ii;
    int a = 10 , b = 3 , c = 7;
    cin >> a ; // i[0]
    cin >> b ; // i[1]
    cin >> c ; // i[2]
    if( a > b){
        if(b > c){
            printf(" a > b > c \n");
        }else{ //  a > b ,  b < c  , a > c or a < c 
           if( a > b){
               printf(" a > c > b \n");
           }else{
               printf(" c > a > b\n");
           }
        } 
    }else{  // b > a , 
        if (a > c){
            if(b > c){
                printf(" b > c > a \n");
            }else{
                printf(" a > c > b \n");
            }
        }else{ // a > c  , b > a 
            printf(" b > a > c \n");
        }
    }
    return 0;
}
