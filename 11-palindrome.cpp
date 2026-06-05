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
int ReverseNumbers (int Number)
	{
	int Remainder=0;
	int Number2=0;
	while(Number>0){
		 Remainder=Number%10;
		Number/=10;
	     Number2=Number2 * 10 + Remainder; 
	}
return Number2 ;
}
bool CheckPalindromenumber(int Number){
	if(Number==ReverseNumbers(Number))
	return true;
	else 
	return false;
}
int main(){
	int number=ReadNumber(" Enter Positve Number: \n");
	if(CheckPalindromenumber(number))
	cout<<"Yes , it is a Palindrome number\n";
	else
	cout<<"No , it is NOT a Palindrome number\n";
	return 0;
}