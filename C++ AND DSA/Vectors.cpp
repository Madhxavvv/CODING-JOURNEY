#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(5);
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }

    int n = arr.size(); //SIZE OF VECTOR

    arr.push_back(5);
    arr.push_back(14);
    arr.pop_back();
    arr.push_back(7);
    cout<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }


    return 0;
}