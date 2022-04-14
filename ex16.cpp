#include <iostream>

using namespace std;

int main()
{
    int i[9] = {1,2,3,5,6,9,8,7,4};
    int ii;
    int a = 10 , b = 3 , c = 7;
    cin >> i[0] ; // i[0]
    cin >> i[1] ; // i[1]
    cin >> i[2] ; // i[2]
    if( i[0] > i[1]){
        if(i[1] > i[2]){
            int temp=i[1];
            printf(" a > b > c \n");
        }else{ //  a > b ,  b < c  , a > c or a < c 
           if( i[0] > i[1]){
               int temp=i[1];
               printf(" a > c > b \n");
               printf(" %d  %d  %d \n",i[0],i[1],i[2]);
                i[1] = i[0];
                i[0] = temp;
               printf(" %d  %d  %d \n",i[0],i[1],i[2]);
               temp=i[2];
               i[2] = i[1];
               i[1] = temp;
               printf(" %d  %d  %d \n",i[0],i[1],i[2]);
           }else{
               int temp=i[1];
               printf(" %d  %d  %d \n",i[0],i[1],i[2]);
               printf(" c > a > b\n");
               
           }
        } 
    }else{  // b > a , 
        if (i[0] > i[2]){
            if(i[1] > i[2]){
                int temp=i[1];
                i[1] = i[0];
                i[0] = temp;
                //printf(" b > c > a \n");
                printf(" %d  %d  %d \n",i[0],i[1],i[2]);
            }else{
                int temp=i[1];
                i[1] = i[0];
                i[0] = temp;
                //printf(" c > a > b \n");
                printf(" %d  %d  %d \n",i[0],i[1],i[2]);
            }
        }else{ // a > c  , b > a
            int temp=i[1];
            //printf(" b > a > c \n");
            printf(" %d  %d  %d \n",i[0],i[1],i[2]);
                i[1] = i[0];
                i[0] = temp;
            //printf(" b > a > c \n");
            printf(" %d  %d  %d \n",i[0],i[1],i[2]);
        }
    }
    return 0;
}
