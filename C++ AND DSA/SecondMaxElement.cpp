#include <iostream>
using namespace std;
int main(){
    int arr[] = {74,56,67,81,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int second_max = arr[0];
    for(int i=0; i<n ; i++){
        if(arr[i]>max){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i]>second_max && arr[i]!=max){
            second_max = arr[i];
        }
    }
    cout<<max<<" "<<second_max;
}


