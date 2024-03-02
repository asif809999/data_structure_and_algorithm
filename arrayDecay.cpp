using namespace std;
#include <iostream>
// #include <math.h>
//#include <string>
// #include <unordered_map>
// #include <vector>
// #include <bits/stdc++.h>
// #include <sstream>

void aDecay(int *p){
    cout<<"passing by value: "<<sizeof(p)<<endl;
}
void pDecay(int (&p)[7]){
    cout<<"passing by pinter: "<<sizeof(p)<<endl;
}

int main()
{
    int inputValue[7]={1,2,3,4,5,6,7};
    cout<<"actual value: "<<sizeof(inputValue)<<endl;
    aDecay(inputValue);
    pDecay(inputValue);
    return 0;
}
