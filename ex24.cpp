#include <stdio.h>
#include <stdlib.h>
int is_prime( int );
int main()
{
	int number;
	scanf(" %d " , & number);
	if(is_prime ( number )){
		printf("是質數 \n");
	}else{
		printf("不是質數 \n");
	}
  
}
int is_prime( int a ){
	int i;
	if(a == 1){
	}else{
		for(i = 2; i < a ; i++){
			if(a % i == 0){
				
			}
		}
	}
	return 0;
}
