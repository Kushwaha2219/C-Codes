#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	
	int apple=21,user,comp,turn=0,i;
	cout<<"*****************************Apple Game****************************"<<endl;
	cout<<"Rule of the Game:-"<<endl<<"You have 21 apples"<<endl<<"You have to choose from 1 to 4"<<endl;
	while(1){
		if(turn==0){
			cout<<"User Turn:"<<endl;
			cin>>user;
			if(user>4||user<=0)
			{
				cout<<"Please follow the rule and choose between 1 to 4"<<endl;
			}
			else
			{
				
				if(apple<user){
					cout<<"Apple is less than your input"<<endl;
				}
				else{
					apple-=user;
					cout<<"Remaining apple is "<<apple<<endl;
					turn=1;
				}
				
			}
			 if(apple == 1){
			 	
			 	break;
			 }
			else if(apple == 0){
			
			turn = 0;
			break;}
			
			
		}
		if(turn==1){
			cout<<"Computer Turn:"<<endl;
			//comp=5-user;
			srand(time(NULL));
			comp=rand()%4+1;
			cout<<comp<<endl;
			
			if(apple<comp){
				comp=rand()%apple+1;
			}
			else{
				apple-=comp;
				cout<<"Remaining apple is "<<apple<<endl;
				turn=0;
			}
			
			
		}
		if(apple == 0)
		{
			turn = 1;
		break;
		}
		
		else if(apple==1){
			
			break;
		}
		
	}
	if(turn==0 && apple<=1){
			cout<<"You are looser"<<endl;
		}
		else{
			cout<<"Computer is looser"<<endl;
		}
	
}
