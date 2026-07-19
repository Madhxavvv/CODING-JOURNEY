#include <iostream>
using namespace std;
void sumit();void anu(); void arjun();
void sumit(){

    cout<<"Hi, This is Sumit!"<<endl;

}
void anu(){
    arjun();
    cout<<"This is Anu"<<endl;
    
}
void arjun(){
    cout<<"This is Arjun"<<endl;
    sumit();
}
int main(){
    anu();
    
    
}