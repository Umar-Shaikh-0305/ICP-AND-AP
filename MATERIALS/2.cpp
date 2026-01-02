#include <iostream>
#include <math.h>
using namespace std;

int main(){
	cout<<"Muhammad Umar 25k3077"<<endl;
    float c[3]; 
    int ch;
    float eqc = 0;  
    
    for(int i = 0; i < 3; i++){   
        cout << "Enter capacitance of capacitor " << i+1 << endl;
        cin >> c[i];
    }
    
    cout << "Addition of capacitance" << endl;
    cout << "1. Series 2. Parallel: ";
    cin >> ch;
    
    if(ch == 1){
        for(int i = 0; i < 3; i++){
            eqc+= (1.0 / c[i]);  
        }
        eqc = 1.0 / eqc; 
        cout << "Capacitance in series is " << eqc << " F" << endl;
    }
    else if(ch == 2){
        
        for(int i = 0; i < 3; i++){
            eqc += c[i];
        }
        cout << "Capacitance in parallel is " << eqc << " F" << endl;
    }
    else{
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
