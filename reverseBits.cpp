using namespace std;
#include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
//#include <vector>
// #include <bits/stdc++.h>

uint32_t reverseBits(uint32_t n)
{
    int power = 31;
    uint32_t result = 0;

    while (n != 0)
    {
        result += ((n & 1) << power);
        power--;
        n = n >> 1;
    }
    return result;
}

int main()
{

    return 0;
}
