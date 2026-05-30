#include<iostream>
using namespace std;
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
bool IsPerfectNumber(int number)
	{
	if(number<=1)
	return false;
	int HalfNumber=number/2; 
	int sum=1;
	for(int counter=2;counter<=HalfNumber;counter++)
	{
		if(number%counter==0)
	sum+=counter;
	}
	return sum==number;
}
void PrintRuslt(int number)
	{
      if(IsPerfectNumber(number))
	cout << "  " << number << " Is Perfect Number \n"; 
      else 
  cout << "  " << number << " Is Not Perfect Number \n"; 
} 
int main(){
       PrintRuslt(ReadNumber("Enter positive number : "));
	return 0;
}
