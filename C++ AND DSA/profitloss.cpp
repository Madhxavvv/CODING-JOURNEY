// CW -5 (LEC 4)
// If cost price and selling price of an item is input through the keyboard, 
// write a program to determine whether the seller has made profit or incurred loss or no profit no loss

#include <iostream>
using namespace std;
int main(){
    float CP, SP;
    cout<<"Enter Cost Price of an item: ";
    cin>>CP;
    cout<<"Enter Selling Price of an item: ";
    cin>>SP;
    if(CP==SP){
        cout<<"DAANVEER!!  BINA KISI PROFIT AUR LOSS KE!! "<<endl;
    }
    else if(CP>SP){
        cout<<"CHUNA LAGA DIA "<<CP-SP<<" KA LOSS!!"<<endl;
    }
    else if(SP>CP){
        cout<<"MIRACLE!! MIRACLE!! MOTA PAISA KAMALIA "<<SP-CP<<" KA PROFIT"<<endl;
    }
    return 0;
}
