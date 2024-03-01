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

    string stringToBePrinted = "bangladesh";
    cout << "length of the string is: " << stringToBePrinted.length() << endl;
    cout << "capacity of the string is: " << stringToBePrinted.capacity() << endl;
    stringToBePrinted.resize(5);
    cout << "The string after using resize function is: " << stringToBePrinted.length() << endl;
    cout << "The string after using resize function is: " << stringToBePrinted << endl;

    stringToBePrinted.resize(10);
    cout << "length of the string after resizing is: " << stringToBePrinted.length() << endl;
    cout << "capacity of the string after resizing is " << stringToBePrinted.capacity() << endl;
    stringToBePrinted.shrink_to_fit();
    cout << "The capacity of string after using shrink_to_fit function is " << stringToBePrinted.capacity() << endl;

    return 0;
}
