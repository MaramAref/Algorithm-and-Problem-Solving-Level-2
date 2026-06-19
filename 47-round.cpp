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
float MyRound(float number){
float FractionPart=GetFractionPart(number);
int Intpart=(int)number;

	if(abs(FractionPart)>=0.5)
		if(number>0)
	return (int)number+1;
	else
	return (int)number-1;
	else
		return(int)number;
	
}
int main(){
	float number=Readnumber();
	cout<<"My round Result: "<<MyRound(number)<<endl;
	cout<<"C++ round Result: "<<round(number)<<endl;
	return 0;
}