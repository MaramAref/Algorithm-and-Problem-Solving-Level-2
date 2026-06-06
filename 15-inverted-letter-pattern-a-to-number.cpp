#include<iostream>
using namespace std;
int ReadNumber(string message){
	int Number;
	do{
	cout<<message<<endl;
	cin>>Number;
	}while(Number<0);
	return Number;
}
void PrintPatternAtoN(int Number){
	for(int i=65;i<=65+Number-1;i++){
		for(int j=1;j<=i-64;j++){
			cout<<char(i);
		}
		cout<<endl;
	}
	
}
int main(){
	PrintPatternAtoN(ReadNumber("Pleas enter a Positive Number"));
	return 0;
}
