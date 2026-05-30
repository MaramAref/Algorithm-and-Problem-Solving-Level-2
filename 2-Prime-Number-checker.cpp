#include<iostream>
using namespace std;

enum enPimeNotPrime{prime=1,NotPrime=2};
int ReadNumber(string Message)
	{
	int number=0;
	do
	{
	cout<<Message;
	cin>>number;
	}while(number<=0);
	
	return number;
}
enPimeNotPrime PrimeNotPrimeChecker(int Number)
	{
	int HalfOfNumber=Number/2;
	      for(int counter=2;counter<=HalfOfNumber;counter++)
	{
		if(Number%counter==0)
		return enPimeNotPrime::NotPrime;
	}
	return enPimeNotPrime::prime;
}
void PrintPrimeNumbers(int number)
	{
	cout<<"Prime numbers from "<<1<<"To"<<number<<"are: \n";
	for(int counter=2;counter<=number;counter++)
	{
	if(PrimeNotPrimeChecker(counter)==enPimeNotPrime::prime)
	cout<<counter<<endl;
}
}
int main(){
	PrintPrimeNumbers(ReadNumber("Enter Positive number: "));
	return 0;
}
