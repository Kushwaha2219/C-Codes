#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
void KheloIndia(){
	int apple=37,user,comp,turn=0,i;
	srand(time(NULL));
	cout<<"\t\t\t*****************************Apple Game****************************"<<endl;
	cout<<"\t\t\t\t\t\tRule of the Game:-"<<endl<<"\t\t\t\t\t\tYou have "<<apple<<" apples"<<endl<<"\t\t\t\t\t   You have to choose from 1 to 4"<<endl;
	cout<<"\t\t\t**********************************************************"<<endl;
	while(1){
		if(turn==0){
			cout<<endl;
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
					cout<<endl;
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
			
			//comp=5-user;
			
			comp=rand()%4+1;
			if(apple>=comp){
				cout<<"Computer Turn:"<<endl;
				cout<<comp<<endl;
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
			cout<<"Congratulation!! You are Winner"<<endl;
		}
}
int main(){
	int ch;
	KheloIndia();
	
	while(1){
		cout<<"Do you want to Play Again--If yes press 1 otherwise Press 0 for exit"<<endl;
		cin>>ch;
		if(ch==1){
			system("cls");
			KheloIndia();
		}
		else{
			break;
		}
	}
	return 0;
}
