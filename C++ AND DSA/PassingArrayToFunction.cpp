#include <iostream>
using namespace std;
void change(int y[]){
    y[0] = 20;

}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = size(arr);
    change(arr);
    cout<<arr[0]<<endl;
}