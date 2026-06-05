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
void PrintLetters(int number){
	for(int i=65+number-1;i>=65;i--){
		for(int j=1;j<=number- ( 65 + number - 1 - i );j++){
			cout << char(i);;
		}
		cout << endl;
	}
}
int main(){
	PrintLetters(ReadNumber("Enter positive number: "));
}