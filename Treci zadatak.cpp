#include<iostream>
using namespace std;

int main()
{
	float prosjek;
	cout<<"Unesite prosjek:"<<endl;
	cin>>prosjek;
	
	if (prosjek>=4.5 && prosjek<=5.0)
	{
		cout<<"ODLICAN!";
	}
	
	else if (prosjek>=3.5 && prosjek<=4.4)
	{
		cout<<"VRLODOBAR";
	}
	
	else if (prosjek>=2.5 && prosjek<=3.4)
	{
		cout<<"DOBAR";
	}
	
	else if (prosjek>=1.5 && prosjek<=2.4)
	{
		cout<<"DOVOLJAN";
	}
	
	else if (prosjek>=1 &&  prosjek<=1.4)
	{
		cout<<"NEDOVOLJAN";
	}
	
	else if(prosjek>5.0)
		{
		cout<<"Pogresan unos!";
	}
	 return 0;
}
