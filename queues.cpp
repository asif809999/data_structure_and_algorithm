using namespace std;
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <unordered_map>
// #include <vector>
// #include <sstream>
#include <bits/stdc++.h>

void showQueue(queue<int> generalQueue)
{
    queue<int> initializedQueue = generalQueue;
    while (!initializedQueue.empty())
    {
        cout << '\t' << initializedQueue.front();
        initializedQueue.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> inputQueue;
    inputQueue.push(10);
    inputQueue.push(20);
    inputQueue.push(30);

    showQueue(inputQueue);
    cout << "\ninputQueue.size() :" << inputQueue.size();
    cout << "\ninputQueue.front() :" << inputQueue.front();
    cout << "\ninputQueue.back() :" << inputQueue.back();

    cout << "\ninputQueue.pop()";
    inputQueue.pop();
    showQueue(inputQueue);
    return 0;
}
