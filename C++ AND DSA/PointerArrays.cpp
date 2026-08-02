#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int x[] = {1,2,3,4,6};
    int* x = new int[7]; // DYNAMIC ALLOCATION
    *x = 7;
    for(int i=0; i<7; i++){
        cout<<x[i]<<" ";
        
    }

    // int arr[] = {1,2,3,4,5,6};//ARRAY
    // cout<<*arr<<endl;
    // for(int i=0; i<size(arr); i++){
    //     cout<<*(arr+i);
    // }
    // cout<<arr[0]<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<arr[1];

    // TOH ARRAY KO POINTER KI TARAH BHI ACCESS KAR SKTE BUT HUM arr++ NAHI KAR SKTE
    // KYUKI arr ka address fixed hai usko change nahi kar skte hai hum
    // PAR POINTER KA HO SKTA

    // ALSO FUNCTION PARAMETER MEI ARRAY KA USE KARNA IS LIKE POINTER AS A PARAMETER POINTING TO FIRST ELEMENT OF THE ARRAY



    return 0;
}