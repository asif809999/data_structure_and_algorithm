using namespace std;
#include <iostream>
// #include <math.h>
#include <string>
// #include <unordered_map>
// #include <vector>
// #include <bits/stdc++.h>
// #include <sstream>

int main()
{
    string :: iterator itr;
    string::reverse_iterator rit;
    string stringToBePrinted = "bangladesh";

    itr = stringToBePrinted.begin();

    cout << "pointing to the start of the string " << *itr << endl;

    itr = stringToBePrinted.end() - 1;
    cout << "pointing to the end of the string " << *itr << endl;
    rit = stringToBePrinted.rbegin();
    cout << "pointing to the end of the string " << *rit << endl;

    rit = stringToBePrinted.rend() - 1;
    cout << "pointing to the start of the string " << *rit << endl;
    return 0;
}
