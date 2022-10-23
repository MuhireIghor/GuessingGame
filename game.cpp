#include<iostream>
#include<cstring>
#include<time.h>
using namespace std;
int main(){
	int i;
	int choice ;
	string guessed;
	srand ( time(NULL));
	string animals[5] = {"Elephant","Monkey","Tiger","Zebra","Antelope"};
	string places[5]={"Kigali","Nairobi","Kampala","Bujumbura","Dar-es-salaam"};
	string food[5]={"Banana","Apple","DODO","Rice","Cabbage"};
	string people[5]={"Johnson","Dickson","Ericson","FredEson","Nickson"};
		int randIndex = rand () % 5;
		string fortune;
		
	
	cout<<"Welcome to the guessing game : "<<endl;
	cout<<"Choose among the following categories the number correspondent to the category for the game to play :"<<endl;
	cout<<"category : \t Number : "<<endl;
	string category[] {"Animals","Places","Food","People"};
	int nums[] {1,2,3,4};
	for(i=0;i<4;i++){
		cout<<category[i]<<" \t "<<nums[i] <<endl ;
		
	}
	cout<<"Your choice here please :"<<endl;
	cin>>choice;
	
switch(choice){
	case 1:
		cout<<"You have chose the "<<category[choice-1] <<" category ";
    	cout<<"Enter any letter of your choice : "<<endl;
	    cin>>guessed;
	    fortune = animals[randIndex];
	    cout<<fortune;
		break;
	case 2:
		cout <<" You have chosen the "<<category[choice-1] << " category ";
	    cout<<"Enter any letter of your choice : "<<endl;
	    cin>>guessed;
	    fortune = places[randIndex];
	    cout<<fortune;
		break;
    case 3:
        cout <<" You have chosen the "<<category[choice-1] << " category "<<endl;    
	    cout<<"Enter any letter of your choice : ";
	    cin>>guessed;
	    fortune = food[randIndex];
	    cout<<fortune;
    	break;
    case 4:
    	cout <<" You have chosen the "<<category[choice-1] << " category "<<endl;
       	cout<<"Enter any letter of your choice : ";
    	cin>>guessed;
    	fortune = food[randIndex];
    	cout<<fortune;
    	break;
    		
    
    	
}

	
	
	
}