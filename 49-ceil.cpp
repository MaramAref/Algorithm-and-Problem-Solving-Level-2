#include<iostream>
#include<cmath>
using namespace std;
float Readnumber(){
	float number;
	cout<<"Enter a number: ";
	cin>>number;
	return number;
}
float GetFractionPart(float number){
	return number-(int)number;
}
float MyCeil(float number){
float FractionPart=GetFractionPart(number);
int Intpart=(int)number;

	if(abs(FractionPart)>=0.5)
		if(number>0)
	return (int)number+1;
	else
	return (int)number;
	else
		return(int)number;
	
}
int main(){
	float number=Readnumber();
	cout<<"My Ceiling  Result: "<<MyCeil (number)<<endl;
	cout<<"C++ Ceiling  Result: "<<MyCeil(number)<<endl;
	return 0;
}