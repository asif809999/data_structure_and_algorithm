using namespace std;
#include <bits/stdc++.h>


 int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int answer=0;
        for(int i=0; i<hours.size(); i++){
            if(hours[i]>=target){
                answer++;
            }
        }
        return answer;
    }

int main()
{
    vector<int> hour = {0,1,2,3,4};
    int target = 0;
    int answer = numberOfEmployeesWhoMetTarget(hour, 2);
    cout<<answer;
}
