/* Q29. Minimum Absolute Difference. Find the minimum absolute difference between any two
adjacent elements in the given array.
Constraints: 2 ≤ N ≤ 105

, −109 ≤ arr[i] ≤ 109
.

Sample Input: arr = {10, 20, 15, 30, 28} ⇒ Output: 2
Explanation: Differences: |10 − 20| = 10, |20 − 15| = 5, |15 − 30| = 15, |30 − 28| = 2. The
minimum is 2. */

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
    int i = 0;
    int min = abs(arr[i] - arr[i+1]);
    int diff;
    for(int i = 0; i<n-1 ; i++){
        diff = abs(arr[i]-arr[i+1]);
        if(diff<min){
            min = diff;
        }
    }
    cout<<min;




    return 0;
}