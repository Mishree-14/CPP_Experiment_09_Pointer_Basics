//Mishree Kalaria
//24070123052
//Batch:A2

#include <iostream>
using namespace std;

int main() {
    int m = 50;
    int y = 100;
    int *mptr;
    mptr = &m;
    int *yptr;
    yptr = &y;
    
    int sum = *mptr + *yptr;
    cout<<"Sum: "<<sum<<"\n";

    int difference = *mptr - *yptr;
    cout<<"Difference: "<<difference;
    
    return 0;
}

## SAMPLE OUTPUT

Sum: 150
Difference: -50

=== Code Execution Successful ===
