#include<iostream>
#include<cmath>
using namespace std;
	float Readnumber(){
	float number;
	cout<<"Enter a number: ";
	cin>>number;
	return number;
}
int MySqrt(float number){
	return pow(number ,0.5);					
}
int main(){
	float number=Readnumber();
	cout<<"My sqrt Result: "<<MySqrt(number)<<endl;
	cout<<"C++ sqrt Result: "<<sqrt(number)<<endl;
	return 0;
}