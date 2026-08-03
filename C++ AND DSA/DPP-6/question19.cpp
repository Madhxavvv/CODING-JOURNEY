/* Find the Third Maximum element in a given array.
Constraints: 3 ≤ N ≤ 105

, −109 ≤ arr[i] ≤ 109

. You are not allowed to sort the array.

Sample Input: N = 5, arr = {4, 1, 9, 7, 2} ⇒ Sample Output: 4
Explanation: The max is 9, second max is 7, third max is 4. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter array elements: ";
    int m;
    for(int i=0; i<n; i++){
        cin>>m;
        nums.push_back(m);
    }
    int max = INT_MIN , s_max = INT_MIN , t_max = INT_MIN;
    for(int i=0; i<n; i++){
        if(nums[i]>max){
            t_max = s_max;
            s_max = max;
            max = nums[i];
        }
        else if(nums[i]>s_max && nums[i]!=max){
            t_max = s_max;
            s_max = nums[i];
        }
        else if(nums[i]>t_max && nums[i]!=s_max && nums[i]!=t_max){
            t_max = nums[i];
        }
    }
    for(int ele: nums){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<max<<" "<<s_max<<" "<<t_max;


    return 0;
}