#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i;
	int choice ;
	
	cout<<"Welcome to the guessing game : "<<endl;
	cout<<"Choose among the following categories the number correspondent to the category for the game to play :"<<endl;
	cout<<"category : \t Number : "<<endl;
	string category[] {"Animals","Places","food","people"};
	int nums[] {1,2,3,4};
	for(i=0;i<4;i++){
		cout<<category[i]<<" \t "<<nums[i] <<endl ;
		
	}
	cout<<"Your choice here please :"<<endl;
	cin>>choice;
switch(choice){
	case 1:
		cout<<"You have chose the "<<category[choice-1] <<" category ";
		
		break;
	case 2:
		cout <<" You have chosen the "<<category[choice-1] << " category ";
		break;
    case 3:
    	cout <<" You have chosen the "<<category[choice-1] << " category ";
    	break;
    case 4:
    		cout <<" You have chosen the "<<category[choice-1] << " category ";
    		break;
    		
    
    	
}
animal:
	string animals[5] = {"Elephant","Monkey","Tiger","Zebra","Antelope"};
	str
	
}