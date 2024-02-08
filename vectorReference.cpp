#include <iostream>
// #include <math.h>
#include <vector>
using namespace std;


void inputFunction (vector<int> &inputVector){
    for(int i=3; i<=12;i++){
        inputVector.push_back(i);
    }
}

int main()

{
    vector<int> firstVector;
    
    inputFunction(firstVector);
    for(int j=0; j<10; j++){
        cout<<firstVector[j]<<" ";
    }
    
    return 0;
}
