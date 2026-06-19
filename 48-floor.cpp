#include<iostream>
#include<cmath>
using namespace std;
float Readnumber(){
	float number;
	cout<<"Enter a number: ";
	cin>>number;
	return number;
}
float MyFloor(float number){
	if(number>0)
return(int)number;
else
return (int)number-1;	
}
int main(){
	float number=Readnumber();
	cout<<"My floor Result: "<<MyFloor(number)<<endl;
	cout<<"C++ floor Result: "<<floor(number)<<endl;
	return 0;
}