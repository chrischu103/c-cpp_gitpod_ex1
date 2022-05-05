#include <iostream>

using namespace std;

int y=1;
int x=1;
int main(){
    while (y <= 9){
      while (x <= 9){
         printf("%d*%d=%d \t",y,x,y*x );
         x++;
          
      }
      y++;
      x = 1;
     printf(" \n");
}
      
return 0;
}
