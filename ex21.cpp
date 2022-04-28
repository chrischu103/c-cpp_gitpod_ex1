#include <iostream>
using namespace std;
/*
主函式輸入 輸入 a ，其中自定義一函式，時間換算，輸出  b 小時 c 分
               90                                     1      30
*/
int min(int a,int b,int c){ 
    b = a/60;c = a % 60;
    printf("b = %d hr  ", b);
    printf("c = %d min", c);
    
    return a ;
}
int main()
{
    int a,b,c;
    printf(" please input a min:"); 
    scanf("%d",&a);
    min(a,b,c);
   
    
return 0;
}
