#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double m1,m2,r,G=6.67*pow(10,-11),F;
	cout<<"\n\n\t\tEnter the mass M1 (kg)= "; cin>>m1;
	cout<<"\n\t\tEnter the mass M2 (kg)= "; cin>>m2;
	cout<<"\n\t\tEnter the distance between two bodies r (m)= "; cin>>r;
	F=(G*m1*m2)/(r*r);
	cout<<endl<<endl;
	cout<<"***********************************************************";
	cout<<"\n\n\t\t\tGravetational Force= "<<F<<" N\n";
	
	return 0;
}
