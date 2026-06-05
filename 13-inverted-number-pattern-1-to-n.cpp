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
void PrintInvertedNumberPattern(int number){
	for(int i=1;i<=number;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<"  ";			
}
cout<<endl;
}
}
int main(){
	PrintInvertedNumberPattern(ReadNumber("Enter Postive Number : \n"));
	return 0;
}