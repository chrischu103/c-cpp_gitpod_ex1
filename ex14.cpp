#include <iostream>

using namespace std;

int main()
{
    int i[9] = {1,2,3,5,6,9,8,7,4};
    int ii;
    int a = 10 , b = 3 , c = 7;
    cin >> i[0] ; // i[0]
    cin >> i[1] ; // i[1]
    cin >> c ; // i[2]
    if( i[0] > i[1]){
        if(b > c){
            printf(" a > b > c \n");
        }else{ //  a > b ,  b < c  , a > c or a < c 
           if( a > c){
               printf(" a > c > b \n");
           }else{
               printf(" c > a > b\n");
           }
        } 
    }else{  // b > a , 
        if (a > c){
            if(b > c){
                
            }else{
                printf(" a > c > b");
            }
            }else{
                printf(" b > c > a");
        }
        
        }
    return 0;
}    
