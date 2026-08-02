// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<"Enter array elements: ";
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]==num) cout<<"Number is present at "<<i<<" Index"<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    bool flag = false;
    cout<<"Enter size: ";
    cin>>n;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter array elements: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            flag = true;
            // j = i;
            cout<<"Element found at "<<i<<endl;
        }
    }
    if(flag){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}