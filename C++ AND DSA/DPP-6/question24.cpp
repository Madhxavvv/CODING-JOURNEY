/* Q24. Move all 0s to the end of the array while maintaining the relative order of the non-zero
elements.
Constraints: 1 ≤ N ≤ 105

, 0 ≤ arr[i] ≤ 109
.

Sample Input: arr = {0, 1, 0, 3, 12} ⇒ Output: {1, 3, 12, 0, 0} */

#include <bits/stdc++.h>
using namespace std;
void swapping(vector<int> &arr,int i, int j){
    swap(arr[i],arr[j]);
}

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
    vector<int> ans;
    int i = 0, count0 = 0, countt = 0;
    for(int ele : arr){
        if(ele == 0) count0++;
        else ans.push_back(ele);
    }
    int put0 = 0;
    while(put0<count0){
        ans.push_back(0);
        put0++;

    }
    for(int ele : ans){
        cout<<ele<<" ";
    }





    return 0;
}