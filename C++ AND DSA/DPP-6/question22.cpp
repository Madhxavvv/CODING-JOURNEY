/* Q22. Given an array and a target integer T, count how many elements in the array are strictly
less than T.
Constraints: 1 ≤ N ≤ 105

, −109 ≤ arr[i], T ≤ 109
.

Sample Input: arr = {5, 2, 8, 1, 9}, T = 6 ⇒ Output: 3 (Elements 5, 2, 1) */

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
    int T;
    cout<<"Enter Target element: ";
    cin>>T;
    int count = 0;
    for(int ele: arr){
        if(ele < T) count++;
    }
    cout<<count;


    return 0;
}