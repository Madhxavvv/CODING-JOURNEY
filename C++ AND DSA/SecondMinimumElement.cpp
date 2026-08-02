// SECOND MINIMUM ELEMENT ARRAY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(5);
    int min = INT_MAX;
    int s_min = INT_MAX;
    cout<<"Enter Elements: ";
    for(int i=0;i<arr.size(); i++){
        cin>>arr[i];
    }
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<=min){
            s_min = min;
            min = arr[i];
        }
        else if(arr[i]<s_min && arr[i] != min){
            s_min = arr[i];
        }
    }
    cout<<min<<" "<<s_min;
    


    return 0;
}