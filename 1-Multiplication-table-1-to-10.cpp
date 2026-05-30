#include<iostream> 
using namespace std;
void PrintHeaderTable()
	{
	cout<<"\n\n\t\t\t Multipliaction Table From 1 to 10\n\n ";
	cout<<"\t";
	for(int counter=1;counter<=10;counter++)
		{
		cout<<counter<<"\t";
	}
	cout<<"\n_______________________________________________________________________________________________\n";
}
 string ColumnSperator(int i){ 
 if(i<10)
  return"   |"; 
    else 
    return"  |";
        
} 
void PrintMultiplicationTable()
	{
	PrintHeaderTable();
	
	for(int i=1;i<=10;i++)
		{
	cout<<i<<ColumnSperator(i);
	for(int j=1;j<=10;j++)
		{
		cout<<"\t"<<j*i;
	}
	cout<<endl;
	}
}
int main(){
	PrintMultiplicationTable();
	return 0;
}