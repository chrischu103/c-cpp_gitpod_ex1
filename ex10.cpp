#include <stdio.h>
#include <iostream>
using namespace std ;

int main()
{ int a,i;
    printf("please input a number \n");
    scanf("%d",&a);
    if( a > 84 ){
    printf(" A grade \n");
    }else if (a <=85 && a <75){
       printf(" B grade \n");
    }else if (a <=86 && a <76){
       printf(" C grade \n");
    }else if (a <=87 && a <77){
       printf(" D grade \n");
    }else if (a <=88 && a <78){

    }else
    cout << "bye";
    printf(" hello world \n");
    
    return 0;
}
