#include<iostream>
using namespace std;
int main()
{
int vehicleClass;
double toll;
cout<<"Enter vehicle class:";
cin>>vehicleClass;
switch(vehicleClass)
{
	case 1:
		cout<<"Passenger car";
		toll=0.50;
		break;
	case 2:
		cout<<"Bus";
		toll=1.50;
		break;
	case 3:
		cout<<"Truck";
		toll=2.00;
		break;
	default:
		cout<<"Unknown vehicle class!";
}
	
}
