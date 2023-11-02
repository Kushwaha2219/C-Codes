#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	srand(time(NULL));
	char ch;
	int dif,sc,n;
	cout<<"\t\t\t\t\t\tWelcome to Number Guessing Game "<<endl<<"\t\t\t\t\tIn this Game You have to Guess a number  "<<endl<<"\t\t\t\t\tIf you guess it correctly then You are Winner";
	cout<<endl<<"****************************************************************************************************************************************************"<<endl;
	cout<<"Game has Three Difficulty"<<endl<<"1.Hard"<<endl<<"2.Medium"<<endl<<"3.Easy"<<endl;
	cout<<"Do you want to play game if yes Press Y otherwise N"<<endl;
	cin>>ch;
	if(ch=='Y'||ch=='y'){
		cout<<"Choose Your Difficulty"<<endl;
		cin>>dif;
	}
	else if(ch=='N'||ch=='N'){
		return 0;
	}
	else{
		cout<<endl<<"....................Restart The Game Again.................."<<endl;
		return 0;
	}
	switch(dif){
		case 1:{
		int chance=5;
		system("cls");
		cout<<"You have 5 chance to guess the number between 1 to 100"<<endl;
		sc=rand()%100+1;
		cout<<"Enter your number"<<endl;
		
		do{
			cin>>n;
			if(n>100){
				cout<<"Enter number within range"<<endl;
				
			}
			if(sc>n){
				cout<<"Number enterd by you is less than secret number"<<endl;
				chance=chance-1;
				cout<<"You have "<<chance<<" chance left"<<endl;
				if(chance==0){
					cout<<"You lose the game"<<endl;
					break;
				}
			}else if(sc<n){
				cout<<"Number enterd by you is greater than secret number"<<endl;
				chance=chance-1;
				cout<<"You have "<<chance<<" chance left"<<endl;
				if(chance==0){
					cout<<"You lose the game"<<endl;
					break;
				}
			}
			else{
				cout<<"Congratulation!! You find the Number"<<endl;
				break;
			}
		}while(true);
	}
	break;
	case 2:
	{
		int chance=10;
		system("cls");
		cout<<"You have 10 chance to guess the number between 1 to 100"<<endl;
		sc=rand()%100+1;
		cout<<"Enter your number"<<endl;
		do{
			cin>>n;
			if(n>100){
				cout<<"Enter number within range"<<endl;
			}
			if(sc>n){
				cout<<"Number enterd by you is less than secret number"<<endl;
				chance=chance-1;
				cout<<"You have "<<chance<<" chance left"<<endl;
				if(chance==0){
					cout<<"You lose the game"<<endl;
					break;
				}
			}else if(sc<n){
				cout<<"Number enterd by you is greater than secret number"<<endl;
				chance=chance-1;
				cout<<"You have "<<chance<<" chance left"<<endl;
				if(chance==0){
					cout<<"You lose the game"<<endl;
					break;
				}
			}
			else{
				cout<<"Congratulation!! You find the Number"<<endl;
				break;
			}
		}while(true);
		
	}
	break;
	case 3:{
		int chance=15;
		system("cls");
		cout<<"You have 10 chance to guess the number between 1 to 100"<<endl;
		sc=rand()%100+1;
		cout<<"Enter your number"<<endl;
		do{
			cin>>n;
			if(n>100){
				cout<<"Enter number within range"<<endl;
			}
			else{
				if(sc>n){
					cout<<"Number enterd by you is less than secret number"<<endl;
					chance=chance-1;
					cout<<"You have "<<chance<<" chance left"<<endl;
					if(chance==0){
						cout<<"You lose the game"<<endl;
					break;
					}
				}else if(sc<n){
					cout<<"Number enterd by you is greater than secret number"<<endl;
					chance=chance-1;
					cout<<"You have "<<chance<<" chance left"<<endl;
					if(chance==0){
						cout<<"You lose the game"<<endl;
						break;
					}
				}
				else{
					cout<<"Congratulation!! You find the Number "<<endl;
					break;
				}
			}
			
		}while(true);
	}break;
	default:cout<<"Enter valid choice"<<endl;
	break;
	}
	return 0;
	
}
