#include<iostream> 
using namespace std; 
int ReadNumber() 
{  
int Number; 
cout << "\nPlease enter a Number: "; 
cin >> Number; 
return Number;  
}
void AddArrayElement(int Number, int arr[100], int& arrLength) 
{
arrLength++; 
arr[arrLength - 1] = Number; 
} 
void InputUserNumbersInArray(int arr[100],int &length){
	bool AddMore;
	do{
	AddArrayElement(ReadNumber(),arr,length);
	cout<<"Do you want to add more numbers? [0]:No,[1]:yes \n"; 
	cin>>AddMore;
	}while(AddMore);
}
void PrintArray(int arr[100],int length){
	for(int i=0;i<length;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
int arr[100], arrLength = 0; 
InputUserNumbersInArray(arr, arrLength); 
cout << "\nArray Length: " << arrLength << endl; 
cout << "Array elements: "<<endl; 
PrintArray(arr, arrLength); 
	return 0;
}