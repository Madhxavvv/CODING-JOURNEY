/* Q21. Check if an array is strictly sorted in non-increasing order. Return true if every ele-
ment is less than or equal to the previous element, else false.

Constraints: 1 ≤ N ≤ 105

, −109 ≤ arr[i] ≤ 109
.
Sample Input 1: {8, 5, 5, 2} ⇒ Output: true
Sample Input 2: {4, 2, 8} ⇒ Output: false */

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
    int n = arr.size();
    bool flag = true;
    int i = 0;
    while(i<n-1){
        if(arr[i]<arr[i+1]){
            flag = false;
            break;
        }
        i++;
    }
    if(flag) cout<<"True";
    else cout<<"False";


    return 0;
}