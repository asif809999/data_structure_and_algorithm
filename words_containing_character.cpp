using namespace std;
#include <bits/stdc++.h>

vector<int> findWordsContaining(vector<string> &words, char x)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    vector<int> answer;
    int arrayLength = words.size();

    for (int i = 0; i < arrayLength; i++)
    {

        if (words[i].find(x) != string::npos)
        {
            answer.push_back(i);
            continue;
        }
    }
    return answer;
}

int main()
{
}
