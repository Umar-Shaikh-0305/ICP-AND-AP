#include <iostream>
#include <math.h>
using namespace std;

int main(){
	cout<<"Muhammad Umar 25k3077"<<endl;
	int E;
	float A;
	long ang,cosine,angle;
	cout<<"Enter Electricfield value: "<<endl;
	cin>>E;
    cout<<"Enter Area value: "<<endl;
	cin>>A;
	cout<<"Enter angle in degrees"<<endl;
	cin>>ang;
	angle= ang*3.14/180;
	cosine= cos(angle);
	long electric_Flux = E*A*cosine;
	cout<<"The calculated electric flux is "<< electric_Flux<<" N*m^2/c";
	
}
