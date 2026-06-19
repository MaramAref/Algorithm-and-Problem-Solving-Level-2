#include<iostream>
#include<cmath>
using namespace std;
float Readnumber(){
	float number;
	cout<<"Enter a number: ";
	cin>>number;
	return number;
}
float MyABS(int number){
	if(number>0)
	return number;
	else
	return number*-1;

}
int main(){
	float number=Readnumber();
	cout<<"My abs Result: "<<MyABS(number)<<endl;
	cout<<"C++ abs Result: "<<abs(number)<<endl;
	return 0;
}
