/* Q26. Count the number of Even and Odd numbers in a given array.
Constraints: 1 ≤ N ≤ 105

, 0 ≤ arr[i] ≤ 109
.

Sample Input: arr = {1, 2, 3, 4, 5, 8} ⇒ Output: Even: 3, Odd: 3 */

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
    int countodd = 0, counteven = 0;
    for (int ele : arr)
    {
        if (ele % 2 == 0)
            counteven++;
        else
            countodd++;
    }
    cout << "Even: " << counteven << " " << "Odd: " << countodd;

    return 0;
}