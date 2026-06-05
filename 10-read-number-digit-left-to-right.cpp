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
void PrintDigits(int Number){
	cout<<"---------\n";
	int Remainder=0;
	while(Number>0){
		Remainder=Number%10;
		Number/=10;
		cout<<" "<<Remainder<<" ";
	}
}
int main(){
PrintDigits(ReverseNumbers(ReadNumber(" Enter Positve Number: \n")));
cout<<endl;
	return 0;
}