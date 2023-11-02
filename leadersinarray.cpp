//leaders in an array
#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	//Giving Size Of The Array
	cout<<"Enter Number of elements"<<endl;
	cin>>n;
	int arr[10];
	//Initializing elements of array
	cout<<"Enter elements of array"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	//printing elements of array
	for(i=0;i<n;i++){
		cout<<" "<<arr[i];   
	}
	cout<<endl<<"Leaders of array are:-"<<endl;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				break;            //exit from loop when left number if less than right number
			}		
		}
		//printing number when j reach to size of array it means maximum number is found
		if(j==n){                     
			cout<<" "<<arr[i];
		}
	}
	return 0;
}
