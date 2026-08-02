#include <iostream>
using namespace std;
int main(){
    int arr[] = {74,56,67,90,81,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int second_max = INT_MIN;
    for(int i=0; i<n ; i++){
        if(arr[i]>max){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i]>second_max && arr[i] != max){
            second_max = arr[i];
        }
    }
    cout<<max<<" "<<second_max;
}


