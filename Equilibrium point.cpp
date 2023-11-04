#include<iostream>
using namespace std;
int equal(int arr[],int n){
	for(int i=1;i<5;i++){
		int leftsum=0;
		for(int j=i-1;j>=0;j--){
			leftsum+=arr[j];
		}
		int rightsum=0;
		for(int k=i+1;k<n;k++){
			rightsum+=arr[k];
		}
		if(leftsum==rightsum){
			return arr[i];
		}
	}
	return -1;
}
int main(){
	int n,arr[10];
	cout<<"Enter Size of Array"<<endl;
	cin>>n;
	cout<<"Enter Elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int res=equal(arr,n);
	if(res==-1){
		cout<<"There is no such point "<<endl;
	}
	else{
		cout<<"The Partition point is "<<res;
	}
	
}
