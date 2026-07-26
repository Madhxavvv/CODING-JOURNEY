#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,1,-10,55};
    int min = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    cout<<min;
}