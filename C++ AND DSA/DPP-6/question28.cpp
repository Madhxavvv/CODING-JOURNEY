/* Q28. Absolute Difference of Sums. Calculate the sum of elements at even indices and the
sum of elements at odd indices in the array. Output the absolute difference between these two
sums.
Constraints: 1 ≤ N ≤ 105

, −104 ≤ arr[i] ≤ 104
.
Sample Input: arr = {10, 5, 20, 15} ⇒ Output: 10
Explanation: Even indices sum = 10 + 20 = 30. Odd indices sum = 5 + 15 = 20. Difference
= |30 − 20| = 10. */

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
    int sumodd = 0, sumeven = 0;
    for(int i = 0; i<n; i++){
        if(i%2 == 0) sumeven+=arr[i];
        else sumodd+=arr[i];
    }
    cout<<abs(sumeven - sumodd);


    return 0;
}