#include<iostream>
#include<string>
using namespace std;
string ReadPassWord(){
	string password;
	cout<<"Enter the password :\n";
	cin>>password;
	return password;
}
bool GuessPassword(string password){
	string word="";
	int counter=0;
	for(int i=65;i<=90;i++){
		for(int j=65;j<=90;j++){
			for(int n= 65;n<=90;n++){
			      counter++;
				word=word+char(i);
				word=word+char(j);
				word=word+char(n);
			
				cout<<"Trial ["<<	counter<<"]:"<<word<<endl;
				if(word==password){
				cout<<"Password is: "<<password <<endl;
				cout<<"password found after: "<<counter<<endl;
				return true;
				}
				word="";
		
		}
	}
}
return false;
}
int main(){
	GuessPassword(ReadPassWord());
	return 0;
}