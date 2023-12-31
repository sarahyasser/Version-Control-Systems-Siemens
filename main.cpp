#include <bits/stdc++.h>
#include <vector>
using namespace std;

int getSum(vector<int> &vec)
{
    int sum=0;
    vector<int>::iterator iter = vec.begin();
    for(iter; iter< vec.end(); iter++)
    {
        sum+=*iter;
    }
    return sum;
}
int getMinimum(vector<int> &vec) {
    int min = INT_MAX;

    vector<int>::iterator iter = vec.begin();
    for(iter; iter< vec.end(); iter++){
        if (*iter < min) {
            min = *iter;
        }
    }
    return min;
}
double getAverage(vector<int> &vec)
{
    if (vec.empty())
        return 0;
    int sum = getSum(vec);
    return (double) sum / vec.size();
}
int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    cout << "Sum: "<< getSum(vec) << endl;
    cout << "Average: " << getAverage(vec) << endl;
    cout << "Minimum: " << getMinimum(vec) << endl;
    return 0;
}
