#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <typeinfo>
using namespace std;
int main()
{
	int i;
	int choice;
	int trials;
	char guessed[trials];
	int a, p, f, l, sp, sf, sl;
	int j;
	int k = 0;
	int sa;
	string decision;
	srand(time(NULL));
	string animals[5] = {"elephant", "monkey", "tiger", "zebra", "antelope"};
	string places[5] = {"kigali", "nairobi", "kampala", "bujumbura", "dodoma"};
	string food[5] = {"banana", "apple", "dodo", "rice", "cabbage"};
	string people[5] = {"johnson", "Dickson", "ericson", "fredson", "nickson"};
	int randIndex = rand() % 5;
	string gsdwrd;
	string displayCharacters[30];
	cout << "Welcome to the Guessing game " << endl;
	cout << "Do you want to quit the game ? Type exit to quit or any letter to continue" << endl;
	cin >> decision;
	if (decision == "exit")
	{
		exit(0);
	}
	cout << "Choose among the following categories the number correspondent to the category for the game to play :" << endl;
	string category[] = {"Animals", "Places", "Food", "People"};
	cout << "Number: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "\t" << (i + 1) << ". " << category[i] << endl;
	}
	cout << "Your choice here please :" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "You have chosen the " << category[choice - 1] << " category " << endl;
		gsdwrd = animals[randIndex];
		trials = 10;
		for (int j = 0; j < gsdwrd.length(); j++)
		{
			displayCharacters[j] = "_";
		}
		bool checker;
		while (k < (gsdwrd.length() + 2))
		{
			char character;
			cout << trials << " trials remaining";
			cout << "Enter the letter: ";
			cin >> character;
			cout << "The word is: ";
			for (int l = 0; l < gsdwrd.length(); l++)
			{
				if (gsdwrd[l] == character)
				{
					displayCharacters[l] = character;
					checker = true;
				}
				else
				{
					checker = false;
				}
				cout << displayCharacters[l];
			}
			cout << endl;
			if (checker)
			{
				cout << "You won!" << endl;
				break;
			}
			k++;
			trials--;
			if (trials == 0)
			{
				cout << "You have won ";
				break;
			}
		}
		break;
	case 2:
		cout << "You have chosen the " << category[choice - 1] << " category " << endl;
		gsdwrd = places[randIndex];
		trials = 10;
		for (int j = 0; j < gsdwrd.length(); j++)
		{
			displayCharacters[j] = "_";
		}
		bool checker2;
		while (k < (gsdwrd.length() + 2))
		{
			char character;
			cout << trials << " trials remaining";
			cout << "Enter the letter: ";
			cin >> character;
			cout << "The word is: ";
			for (int l = 0; l < gsdwrd.length(); l++)
			{
				if (gsdwrd[l] == character)
				{
					displayCharacters[l] = character;
					checker2 = true;
				}
				else
				{
					checker2 = false;
				}
				cout << displayCharacters[l];
			}
			cout << endl;
			if (checker2)
			{
				cout << "You won!" << endl;
				break;
			}
			k++;
			trials--;
			if (trials == 0)
			{
				cout << "You have won ";
				break;
			}
		}
		break;
	case 3:
		cout << "You have chosen the " << category[choice - 1] << " category " << endl;
		gsdwrd = food[randIndex];
		trials = 10;
		for (int j = 0; j < gsdwrd.length(); j++)
		{
			displayCharacters[j] = "_";
		}
		bool checker3;
		while (k < (gsdwrd.length() + 2))
		{
			char character;
			cout << trials << " trials remaining";
			cout << "Enter the letter: ";
			cin >> character;
			cout << "The word is: ";
			for (int l = 0; l < gsdwrd.length(); l++)
			{
				if (gsdwrd[l] == character)
				{
					displayCharacters[l] = character;
					checker3 = true;
				}
				else
				{
					checker3 = false;
				}
				cout << displayCharacters[l];
			}
			cout << endl;
			if (checker3)
			{
				cout << "You won!" << endl;
				break;
			}
			k++;
			trials--;
			if (trials == 0)
			{
				cout << "You have won ";
				break;
			}
		}
		break;
	case 4:
		cout << "You have chosen the " << category[choice - 1] << " category " << endl;
		gsdwrd = people[randIndex];
		trials = 10;
		for (int j = 0; j < gsdwrd.length(); j++)
		{
			displayCharacters[j] = "_";
		}
		bool checker4;
		while (k < (gsdwrd.length() + 2))
		{
			char character;
			cout << trials << " trials remaining";
			cout << "Enter the letter: ";
			cin >> character;
			cout << "The word is: ";
			for (int l = 0; l < gsdwrd.length(); l++)
			{
				if (gsdwrd[l] == character)
				{
					displayCharacters[l] = character;
					checker4 = true;
				}
				else
				{
					checker4 = false;
				}
				cout << displayCharacters[l];
			}
			cout << endl;
			if (checker4)
			{
				cout << "You won!" << endl;
				break;
			}
			k++;
			trials--;
			if (trials == 0)
			{
				cout << "You have won ";
				break;
			}
		}
		break;
	}
}
