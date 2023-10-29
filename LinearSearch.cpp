#include<iostream>
using namespace std;
int main(){
	int i,key,n,arr[10],ch;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	do{
		cout<<endl<<"Enter the number for search"<<endl;
		cin>>key;
		for(i=0;i<n;i++){
			if(arr[i]==key){
				cout<<"Number is found at "<<i<<" index"<<endl;
				break;
			}
		}
		if(i==n){
			cout<<"Not present in the array"<<endl;
		}
		cout<<"Do you want to Search Again, if"<<endl<<"Yes, Press 1 else press 0 for Exit"<<endl;
		cin>>ch;
	}while(ch);
	return 0;
}
