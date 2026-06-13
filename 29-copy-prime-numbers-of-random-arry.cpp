#include <iostream> 
#include <cstdlib> 
using namespace std; 
 enum enPimeNotPrime{prime=1,NotPrime=2};
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
int RandomNumber(int From, int To) 
{ 
 
 int RandNum = rand() % (To - From + 1) + From; 
 return RandNum;  
}
int ReadPositiveNumber(string Message) 
{ 
 int Number; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number; 
 } while (Number < 0); 
 
 return Number; 
}
void FillArrayWithRandomNumbers(int arr[100],int &Length){
	for(int counter=0;counter<Length;counter++){
		arr[counter]=RandomNumber(1,100);
	}
	
}
void PrintArry(int arr[100],int Length){
	for(int counter=0;counter<Length;counter++){
		cout<<arr[counter]<<endl;
	}
	
}
void CopyInArray(int copyarr[100], int arr[100], int Length, int &arr2Length) {
    int i = 0;
    for (int counter = 0; counter < Length; counter++) {
        if (PrimeNotPrimeChecker(arr[counter]) == enPimeNotPrime::prime) {
            copyarr[i] = arr[counter];
            i++;
        }
    }
    arr2Length = i;
}


int  main(){
	srand((unsigned)time(NULL));
	int arr2Length=0;
	 int arr[100];
	 int copyarr[100];
	int Length= ReadPositiveNumber("Enter number of elements: ");
	FillArrayWithRandomNumbers(arr,Length);
	cout << "\nArray Elements : "<<endl;
	PrintArry(arr,Length);
	cout<<"Prime Number in Array 2: "<<"\n";
	CopyInArray(copyarr,arr,Length,arr2Length);
	PrintArry(copyarr,arr2Length);
	return 0;
}
