#include<iostream>
using namespace std;
	int ReadNumber(string Message)
	{
	int number=0;
	do{
	cout<<Message;
	cin>>number;
	}while(number<=0);
	return number;
}
void PrintDigits (int number)
	{
		cout<<"-----------\n";
	int Remainder=0;
	while(number>0){
		 Remainder=number%10;
		number=number/10;
		cout<<Remainder<<"\n";
	}
}
int main(){
	PrintDigits(ReadNumber("Enter positive number:  \n "));
	return 0;
}