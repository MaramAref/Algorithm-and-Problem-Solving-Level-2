#include<iostream>
using namespace std;
void PrintWordsFromAAAtoZZZ(){
	string word="";
	for(int i=65;i<=90;i++){
		for(int j=65;j<=90;j++){
			for(int n=65;n<=90;n++){
				
			word=word+char(i);
			word=word+char(j);
			word=word+char(n);
			cout<<word<<endl;
			word=" ";
		}
		cout<<"\n----------------------------------------\n";
	}
}
}
int main(){
	PrintWordsFromAAAtoZZZ();
	return 0;
}
