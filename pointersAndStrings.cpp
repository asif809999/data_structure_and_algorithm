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

    char *p = &stringToBePrinted[0];
    while (*p != '\0')
    {
        cout << *p;
        p++;
    }
    cout << endl;
    return 0;
}
