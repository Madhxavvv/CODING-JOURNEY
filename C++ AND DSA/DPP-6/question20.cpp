/* Complex Array Rotation. Given an array of size N, first right-rotate the array by X

positions, and then left-rotate the resulting array by Y positions. Write an optimal O(N) ap-
proach.

Constraints: 1 ≤ N ≤ 105

, 0 ≤ X, Y ≤ 109

, −109 ≤ arr[i] ≤ 109
.
Sample Input: N = 5, arr = {1, 2, 3, 4, 5}, X = 2, Y = 1
Sample Output: {5, 1, 2, 3, 4}
Explanation: Right by 2 gives {4, 5, 1, 2, 3}. Then left by 1 gives {5, 1, 2, 3, 4}. */

#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &nums, int i, int j){
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}

int main()
{
    int n; int m;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        cin>>m;
        nums.push_back(m);
    }
    int x; int y;
    cout<<"Enter how many positions to rotate right: ";
    cin>>x;
    cout<<"Enter how many positions to rotate left: ";
    cin>>y;
    int Size = nums.size();
    x%=Size , y%=Size;
    rev(nums, Size-x, Size-1);
    rev(nums, 0, Size-x-1);
    rev(nums, 0, Size-1);
    rev(nums,0,y-1);
    rev(nums,y,Size-1);
    rev(nums,0,Size-1);
    for(int ele : nums){
        cout<<ele<<" ";
    }


    return 0;
}