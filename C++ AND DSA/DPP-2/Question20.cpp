/* An energy cooperative charges electricity rates dynamically depending on consumer usage units.
Write a program to compute total charges based on the input consumption units:
• First 100 units: $1.50 per unit
• Next 200 units (101 to 300): $2.50 per unit
• Above 300 units: $4.00 per unit
An additional structural safety surcharge of 15% is appended to the total amount generated.
Find the net bill payable.
Sample — Input: 150 units ⇒ Output: Total Bill = $316.25 */

#include <iostream>
using namespace std;
int main(){
    float units;
    cout<<"Enter units consumed: ";
    cin>>units;
    float charge;
    if(units<=100){
        charge = 1.50 * units;
    }
    else if(units>100 && units<=300){
        charge = ((units-100)*2.50)+(100*1.50);
    }
    else if (units>300){
        charge = ((units-300)*4.00)+ (200*2.50) + (100*1.50);
    }
    charge = (charge*115)/(100.0);
    cout<<"Total Bill ="<<" "<<charge;
    return 0;

        
    }
