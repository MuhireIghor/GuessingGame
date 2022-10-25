#include<iostream>
#include<cstring>
#include<time.h>
#include<cstdlib>
using namespace std;
int main(){
	int i;
	int choice ;
	char guessed;
	int a,p,f,l,sa,sp,sf,sl;
	srand ( time(NULL));
	string animals[5] = {"elephant","monkey","tiger","zebra","antelope"};
	string places[5]={"kigali","nairobi","kampala","bujumbura","dodoma"};
	string food[5]={"banana","apple","dodo","rice","cabbage"};
	string people[5]={"johnson","Dickson","ericson","fredson","nickson"};
	int randIndex = rand () % 5;
	
	
	cout<<"Welcome to the Guessing game : "<<endl;
	cout<<"Choose among the following categories the number correspondent to the category for the game to play :"<<endl;
	cout<<"category : \t Number : "<<endl;
	string category[]= {"Animals","Places","Food","People"};
	int nums[] = {1,2,3,4};
	for(i=0;i<4;i++){
		cout<<category[i]<<" \t "<<nums[i] <<endl ;		
	}
	cout<<"Your choice here please :"<<endl;
	cin>>choice;	
	
switch(choice){

	case 1:
		cout<<"You have chosen the "<<category[choice-1] <<" category "<<endl;
    	cout<<"Enter any letter of your choice : "<<endl;
	    cin>>guessed;	  
	    for(a=0;a<5;a++){
	    	    for(sa=0;sa<animals[a].length();){
	    	if(guessed == animals[a][sa]){
	    		cout<<animals[a][sa];
	    		break;	
			}
			else{
							
			cout<<"-";
			sa++;	
				
			}
				
	    				
			}  
		break;
	case 2:
		cout <<" You have chosen the "<<category[choice-1] << " category ";
		cout<<"Enter any letter of your choice : "<<endl;
	    cin>>guessed;
	 	    for(p=0;p<5;p++){
	    	    for(sp=0;sp<places[p].length();){
	    	if(guessed == places[p][sp]){
	    	cout<<places[p][sp];
			}
			else{
			cout<<"-";
			break;	
					}
					sp++;	
		}
				
			}
		break;
    case 3:
        cout <<" You have chosen the "<<category[choice-1] << " category "<<endl;  
        cout<<"Enter any letter of your choice : "<<endl;
		cin>>guessed;
	    for(f=0;f<5;f++){
	   	    for(sf=0;sf<food[f].length();sf++){
	    	if(guessed != food[f][sf]){
	    		cout<<"-";
			}
			else{	
				cout<<food[f][sf];
			}
		}	
		
			}		
    	break;
    case 4:
    	cout <<" You have chosen the "<<category[choice-1] << " category "<<endl;
    	cout<<"Enter any letter of your choice : "<<endl;
	    cin>>guessed;
	    for(l=0;l<5;l++){
	    	for(sl=0;sl<people[l].length();){
	    	if(guessed != people[l][sl]){
	    			cout<<"-";
			}
			else{
				cout<<people[l][sl];	
			}
			sl++;			
		}
	
		
			}
    	break;
		}	
	}
}