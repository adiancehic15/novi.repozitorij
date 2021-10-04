#include<iostream>
using namespace std;
 int main()
 {
 	int a,b;
 	cout<<"Unesite dva broja po izboru:"<<endl;
 	cin>>a>>b;
 	
 	 if(a>b){
 		cout<<"Veci broj je: "<<a<<endl;
 		cout<<"Manji broj je: "<<b<<endl;
 	
	 }
	 
	 else if(b>a){
	 	cout<<"Veci broj je: "<<b<<endl;
	 	cout<<"Manji broj je: "<<a<<endl;
	 }
 	 else if (a=b){
 		cout<<"Brojevi su jednaki."<<endl;
     }
 	
 	
 	return 0;
 	
 }
