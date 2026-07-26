#include <iostream>
using namespace std;
int main(){
    int product = 1;
    int n;
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size; i++){
        product *= arr[i];
    }
    cout<<product;
}