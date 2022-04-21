#include <iostream>

using namespace std;

#define N 3

int main()
{
    int a[N] = {5,6,2};
    int a0=5,a1=6,a2=2;
    #if 1
    cin >> a[0] ; // i[0]
    cin >> a[1] ; // i[1]
    cin >> a[2] ; // i[2]
    #endif
    /*
    
    f( a0 > a1 ){
        if( a1 > a2 ){    // a0 > a1 , a1 > a2
           
        }else{
            if(a0 > a2){  // a0 > a1 , a2 > a1 , a0 > a2 
               
               
            }else{        // a0 > a1 , a2 > a1 , a2 > a0
               
            }
        }
    
    */
    
    if(a[0] > a[1]){
        if(a[1] > a[2]){
            int temp=a[1];
            printf(" a > b > c \n");
        }else{ //  a > b ,  b < c  , a > c or a < c 
           if( a[0] > a[2]){    // a0 > a1 , a2 > a1 , a0 > a2  ==> a0 > a2 > a1 , a0 = 9 , a1 = 2 , a2 = 6
               int temp=a[1];
               printf(" a0 > a2 > a1 \n");
               printf(" %d  %d  %d \n",a[0],a[1],a[2]);
                a[1] = a[2];
                a[2] = temp;
               printf(" %d  %d  %d \n",a[0],a[1],a[2]);
           }else{               // a0 > a1 , a2 > a1 , a2 > a0 ==>  a2 > a0 > a1 , a2 = 9 , a0 = 6 , a1 = 2
               int temp=a[1];
               printf(" %d  %d  %d \n",a[0],a[1],a[2]);
               a[1] = a[2];
               a[2] = temp;
               printf(" a2 > a0 > a1  \n");
               printf(" %d  %d  %d \n",a[0],a[1],a[2]);
               temp=a[1];
               a[1] = a[0];
               a[0] = temp;
               printf(" %d  %d  %d \n",a[0],a[1],a[2]);
           }
        }
