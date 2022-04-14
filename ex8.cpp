#include<stdio.h>

int main(void){
	int x,y; 
	int bool_value;
	
	x = 3 ; y= 4; 
	
	bool_value = ( x > y );
	printf(" x > y ==> %d \n ",bool_value);

	bool_value = ( x < y );
	printf(" x < y ==> %d \n ",bool_value);	

    bool_value = ( x == y );
	printf(" x == y ==> %d \n ",bool_value);

    bool_value = ( x != y );
	printf(" x != y ==> %d \n ",bool_value);	

    bool_value = ( x >= y );
	printf(" x >= y ==> %d \n ",bool_value);		

    bool_value = ( x <= y );
	printf(" x <= y ==> %d \n ",bool_value);	
    
     bool_value = ( x < 5 &&  x < 10);
	printf(" x < 5 and x < 10 ==> %d \n ",bool_value );

    bool_value = (  x < 5 || x < 4 );
	printf(" x < 5 or x < 4 ==> %d \n ",bool_value);

    bool_value = !(x < 5 && x < 10);
	printf(" x < 5 not x < 10 ==> %d \n ",bool_value);

}
