	#include<iostream>
	#include<cstring>
	#include<time.h>
	#include<cstdlib>
	#include<typeinfo>
	using namespace std;
	int main(){
		int i;
		char guess;
		int choice ;
		int trials;
		char guessed[trials];
		int a,p,f,l,sp,sf,sl;
		int j;
		int k = 0;
		int sa;
		string decision;
		srand (time(NULL));
		string animals[5] = {"elephant","monkey","tiger","zebra","antelope"};
		string places[5]={"kigali","nairobi","kampala","bujumbura","dodoma"};
		string food[5]={"banana","apple","dodo","rice","cabbage"};
		string people[5]={"johnson","Dickson","ericson","fredson","nickson"};
		int randIndex = rand () % 5;
		string gsdwrd;	
		string displayCharacters[30];
		
		cout<<"Welcome to the Guessing game "<<endl;
		cout<<"Do you want to quit the game ? Type exit to quit or any letter to continue"<<endl;
		cin>>decision;
		if(decision == "exit"){
			exit(0);
		}			
		cout<<"Choose among the following categories the number correspondent to the category for the game to play :"<<endl;
		
		string category[]= {"Animals","Places","Food","People"};
		cout << "Number: " << endl;
		for(int i=0;i<4;i++){
			cout<<"\t" << (i+1) << ". " <<category[i] <<endl;		
		}
		cout<<"Your choice here please :"<<endl;
		cin>>choice;	
		
	switch(choice){	
		case 1:
			cout<<"You have chosen the "<<category[choice-1] <<" category "<<endl;
			gsdwrd = animals[randIndex];
			displayCharacters.length() = 
			for(int j = 0; j < gsdwrd.length(); j++){
				displayCharacters[j] = "_";
			}
			while(k < (gsdwrd.length()+2)){
			char character;
			cout << "Enter the a letter: ";
			cin >> character;
			cout << "The word is: ";
				for(int l = 0; l < gsdwrd.length(); l++){	
					if(gsdwrd[l] == character){
					displayCharacters[l] = character;
					cout << displayCharacters[l];
					}else{
					cout << displayCharacters[l];
					}
				}
				cout << endl;
				k++;
				if(gsdwrd.length() == displayCharacters.length()){
					cout<<"You have won";
					break;
				}
			}
		break;
		case 2:
			cout<<"You have chosen the "<<category[choice-1] <<" category "<<endl;
			gsdwrd = places[randIndex];
			for(int j = 0; j < gsdwrd.length(); j++){
				displayCharacters[j] = "_";
			}
			while(k < (gsdwrd.length()+2)){
			char character;
			cout << "Enter the a letter: ";
			cin >> character;
			cout << "The word is: ";
				for(int l = 0; l < gsdwrd.length(); l++){	
					if(gsdwrd[l] == character){
					displayCharacters[l] = character;
					cout << displayCharacters[l];
					}else{
					cout << displayCharacters[l];
					}
				}
				cout << endl;
				k++;
			}
		break;
		case 3:
			cout<<"You have chosen the "<<category[choice-1] <<" category "<<endl;
			gsdwrd = food[randIndex];
			for(int j = 0; j < gsdwrd.length(); j++){
				displayCharacters[j] = "_";
			}
			while(k < (gsdwrd.length()+2)){
			char character;
			cout << "Enter the a letter: ";
			cin >> character;
			cout << "The word is: ";
				for(int l = 0; l < gsdwrd.length(); l++){	
					if(gsdwrd[l] == character){
					displayCharacters[l] = character;
					cout << displayCharacters[l];
					}else{
					cout << displayCharacters[l];
					}
				}
				cout << endl;
				k++;
			}
		break;
		case 4:
			cout<<"You have chosen the "<<category[choice-1] <<" category "<<endl;
			gsdwrd = people[randIndex];
			for(int j = 0; j < gsdwrd.length(); j++){
				displayCharacters[j] = "_";
			}
			while(k < (gsdwrd.length()+2)){
			char character;
			cout << "Enter the a letter: ";
			cin >> character;
			cout << "The word is: ";
				for(int l = 0; l < gsdwrd.length(); l++){	
					if(gsdwrd[l] == character){
					displayCharacters[l] = character;
					cout << displayCharacters[l];
					}else{
					cout << displayCharacters[l];
					}
				}
				cout << endl;
				k++;
			}
		break;
		default:
			break;
	}
	return 0;
}
//		    trials = gsdwrd.length();
//		 	    for(i=0;i<trials;i++){
//		    		cout<<"Enter any letter of your choice : ";
//		    		cin>>guess;
//		    	for(k=0;k<gsdwrd.length();k++){
//		    		if(guess == gsdwrd[k]){
//					guessed[i] =gsdwrd[k];	
//		        	cout<<guessed[i];  			
//					}else{
//						cout<<"-";	
//					}
//				}  		
//					 }
	   		
//		    		cout<<gsdwrd<<endl;
//		    		if(gsdwrd[k]== guess){
//		    			guessed[k] =guess;
//		    			cout<<guess;
//					}
//					else{
//						cout<<"-";
//					}
	
//		    		cout<<"Enter any letter of your choice : ";
//		    		cin>>guessed[j];
//		    		cout<<gsdwrd<<endl;
//		    		if(gsdwrd[j]== guess){
//		    			guessed[k] =guess;
//		    			cout<<guess;
//					}
//					else{
//						cout<<"-";
//					}
		
//		case 2:
//			cout <<" You have chosen the "<<category[choice-1] << " category ";
//		    gsdwrd = places[randIndex];
//		    trials = gsdwrd.length();
//		    		    for(j=0;j<gsdwrd.length();j++){
//		    	for(k=0;k<trials;k++){
//		    		cout<<"Enter any letter of your choice : ";
//		    		cin>>guessed[k];
//		    		if(gsdwrd[j] == guessed[k]){
//		    			cout<<guessed[k] <<endl;
//					}
//					else{
//						cout<<"-";
//					}
//		    		
//				}
//		    }
//
//			break;
//	    case 3:
//	        cout <<" You have chosen the "<<category[choice-1] << " category "<<endl;  
//		 	gsdwrd = food[randIndex];
//		    trials = gsdwrd.length();
//		    for(j=0;j<gsdwrd.length();j++){
//		    	for(k=0;k<trials;k++){
//		    		cout<<"Enter any letter of your choice : ";
//		    		cin>>guessed[k];
//		    		if(gsdwrd[j] == guessed[k]){
//		    			cout<<guessed[k] <<endl;
//					}
//					else{
//						cout<<"-";
//					}
//		    	}
//				}						
//	    	break;
//	    case 4:
//	    	cout <<" You have chosen the "<<category[choice-1] << " category "<<endl;
// 			gsdwrd = people[randIndex];
// 			trials = gsdwrd.length();
// 			 for(j=0;j<gsdwrd.length();j++){
//		    	for(k=0;k<trials;k++){
//		    		cout<<"Enter any letter of your choice : ";
//		    		cin>>guessed[k];
//		    		if(gsdwrd[j] == guessed[k]){
//		    			cout<<guessed[k] <<endl;
//					}
//					else{
//						cout<<"-";
//					}
//		    		
//				}
// 			
//	
//			}			
//	    	break;
//	}
//	}
//	  devjob1    cout <<" You have chosen the "<<category[choice-1] << " category "<<endl;  
//	        cout<<"Enter any letter of your choice : "<<endl;
//			cin>>guessed;
//		 	gsdwrd = food[randIndex];
//		    cout<<gsdwrd <<endl;
//		    for(a=0;a<gsdwrd.length();a++){
//		    	if(guessed == gsdwrd[a]){
//		    		cout<<gsdwrd[a];
//				}else{
//					cout<<"-";
//				}
//			}	
