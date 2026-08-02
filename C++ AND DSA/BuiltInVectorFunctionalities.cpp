#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4,3,8,2,9};
    sort(v.begin(),v.end());

    for(int ele : v){
        cout<<ele<<" ";
    }

    reverse(v.begin(), v.end());

    for(int ele:v){
        cout<<ele<<" ";
    }


    return 0;
}