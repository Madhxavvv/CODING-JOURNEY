/*Q30. Max Consecutive Ones. Given a binary array (containing only 0s and 1s), find the max-
imum number of consecutive 1s in the array.

Constraints: 1 ≤ N ≤ 105

, arr[i] ∈ {0, 1}.

Sample Input: arr = {1, 1, 0, 1, 1, 1} ⇒ Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum is
3. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
                    int k;
    int m;
    cout << "Enter number of elements: ";
    cin >> k;
    vector<int> arr;
    cout << "Enter array elements: ";
    for (int i = 0; i < k; i++)
    {
        cin >> m;
        arr.push_back(m);
    }
    int n = arr.size();
    int Max = 0; int c_max = 0;
    for(int i=0;i<n; i++){
        if(arr[i]==1){
            c_max++;
            Max = max(c_max,Max);
        }
        else if(arr[i]==0){
            c_max = 0;
        }
    }
    cout<<Max;

    return 0;
}