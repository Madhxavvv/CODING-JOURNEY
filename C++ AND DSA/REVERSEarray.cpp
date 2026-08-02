#include <bits/stdc++.h>
using namespace std;

void rev(vector<int>& nums, int i, int j){
    while(i<j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    vector<int> nums = {1,2,3,6,5,3};
    int n = nums.size();
    rev(nums,0,n-1);
    for(int ele : nums){
        cout<<ele<<" ";
    }


    return 0;
}