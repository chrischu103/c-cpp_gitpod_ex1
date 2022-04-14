#include <iostream>

using namespace std;

int main()
{   //int i[9] = {1,2,3,5,6,9,8,7,4};
    int a[3] = {5,6,2};
    int i,j;
    
    for(i=0;i < 2;i++){
        for(j=0;j < 2;j++){
            if(a[j] > a[j+1]){
                int temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                
            }
        }
    }
    for(i=0;i<3;i++){
        cout << "a[" << i << "]=" << a [i] << " " ;
    }
    cout << endl;
    
    cout<<"Hello World";

    return 0;
}
