//(Finding Both Min and Max)
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void findMinMax(vector<int>& arr)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < mini)
            mini = arr[i];

        if(arr[i] > maxi)
            maxi = arr[i];
    }

    cout << "Minimum = " << mini << endl;
    cout << "Maximum = " << maxi << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findMinMax(arr);

    return 0;
}
Example
Input
5
4 8 2 10 1
Output
Minimum = 1
Maximum = 10
If you want to return both values

Use pair.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<int,int> findMinMax(vector<int>& arr)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int x : arr)
    {
        mini = min(mini, x);
        maxi = max(maxi, x);
    }

    return {mini, maxi};
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    pair<int,int> ans = findMinMax(arr);

    cout << "Minimum = " << ans.first << endl;
    cout << "Maximum = " << ans.second << endl;

    return 0;
}
