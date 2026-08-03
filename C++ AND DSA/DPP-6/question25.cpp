/* Q25. Check if an array is a Palindrome. An array is a palindrome if it reads the same forward
and backward.
Constraints: 1 ≤ N ≤ 105

, −109 ≤ arr[i] ≤ 109
.

Sample Input 1: {1, 2, 3, 2, 1} ⇒ Output: Palindrome
Sample Input 2: {1, 2, 3, 4} ⇒ Output: Not Palindrome */

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
    int i = 0, j = n-1;
    bool flag = true;
    while(i<j){
        if(arr[i]!=arr[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag) cout<<"Palindrome";
    else cout<<"Not Palindrome";


    return 0;
}