//Mishree Kalaria
//24070123052
//Btach:A2

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    
    int *ptr = arr+4;
    
    for(int i=4; i>=0 ; i--){
        cout<<*ptr<<"\t";
        ptr--;
    }

    return 0;
}

## SAMPLE OUTPUT

5	4	3	2	1
