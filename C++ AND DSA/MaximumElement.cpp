#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,1,-10,55};
    int max = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<max;
}