#include <bits/stdc++.h>
#include <vector>
using namespace std;
int getSum(vector<int> vec)
{
    int sum=0;
    vector<int>::iterator iter = vec.begin();
    for(iter; iter< vec.end(); iter++)
    {
        sum+=*iter;
    }
    return sum;
}
int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
     cout<< getSum(vec);
    return 0;
}
