/* Q23. First Repeated Element. Given an array of size N, find the first element from the
left that appears more than once in the array. If no element repeats, print -1.
Constraints: 1 ≤ N ≤ 105

, 0 ≤ arr[i] ≤ 105
.

Sample Input: N = 7, arr = {10, 5, 3, 4, 3, 5, 6} ⇒ Output: 5
Explanation: Both 5 and 3 are repeated, but traversing from the left, 5 is the first element we
encounter that will be repeated later. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
        int k; int m;
    cout<<"Enter number of elements: ";
    cin>>k;
    vector<int> arr;
    cout<<"Enter array elements: ";
    for(int i=0; i<k; i++){
        cin>>m;
        arr.push_back(m);
    }
    bool flag = false;
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                return 0;
            }
        }
    }
    cout<<-1;


    return 0;
}