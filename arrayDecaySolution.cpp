using namespace std;
#include <iostream>
// #include <math.h>
//#include <string>
// #include <unordered_map>
// #include <vector>
// #include <bits/stdc++.h>
// #include <sstream>
#define SIZEOF(arr) sizeof(arr) / sizeof(*arr)

void func(int arr[],size_t array_size){
    for(int i=0; i<array_size; i++){
        arr[i]=i;
    }
}

int main()
{
    int inputValue[7]={1,2,3,4,5,6,7};
    //array_size n = sizeof(inputValue) / sizeOf(inputValue[0]);
    size_t n = SIZEOF(inputValue);
    func(inputValue,n);
    for(int i=0; i<n; i++){
        cout<<inputValue[i];
    }
    return 0;
}
