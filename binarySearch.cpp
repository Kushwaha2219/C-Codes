//binary search
#include<iostream>
using namespace std;
int main(){
	int first=0,mid,arr[6],l; 
	cout<<"Enter number of elements"<<endl;
	cin>>l;
	int last=l-1;                 //assigning value to last(length of array-1)
	cout<<"Enter elements"<<endl;
	for(int i=0;i<l;i++){
		cin>>arr[i];
	}
	cout<<"Enter number for search"<<endl;
	int key;
	cin>>key;
	mid=(first+last)/2;//finding mid value before while loop 
	while(first<=last){
		if(arr[mid]==key){
			cout<<"Number is present"<<endl;
			break;
		}
		else if(arr[mid]>key){     
			last=mid-1;
		}
		else{
			first=mid+1;
		}
		mid=(first+last)/2;//again finding value of mid in the loop
	}
	if(first>last){
		cout<<"Number is not present in the array";
	}
	return 0;
}
