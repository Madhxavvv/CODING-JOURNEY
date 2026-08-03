/* Difference Array. Given an array, create a new array where the value at index i is the

absolute difference between arr[i] and arr[i+1]. For the last element, it should be the ab-
solute difference between the last and the first element.

Constraints: 2 ≤ N ≤ 105

, −109 ≤ arr[i] ≤ 109
.

Sample Input: arr = {5, 9, 2} ⇒ Output: {4, 7, 3}
Explanation: |5 − 9| = 4, |9 − 2| = 7, |2 − 5| = 3. */

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
    int push;
    vector<int> NEW;
    for(int i = 0; i<n ; i++){
        if(i == n-1){
            push = abs(arr[0]-arr[n-1]);
        }
        else{
        push = abs(arr[i]-arr[i+1]);
       }
       NEW.push_back(push);
    }
    for(int ele : NEW){
        cout<<ele<<" ";
    }



    return 0;
}