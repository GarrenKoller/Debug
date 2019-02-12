// took out the first include didnt do anything
#include <iostream>		//in and out stream
#include <string>		//string

using namespace std;		//namespace


int main()		//main function
{
	string textToAnalyze;		//string text to analyse
	int foo = 0;				//set foo to 0
	int vowels = 0;				//set vowels to 0
	int consonants = 0;			//set consonants to 0
	int digits = 0;				//set digits to 0
	int spaces = 0;				//set spaces to 0
	int lengthOfStringSubmittedForAnalysis = 0;		//set lengthOfStringSubmittedForAnalysis to 0
	int unknownCharacters = 0;				//set unknownCharacters to 0
	int checkSum = 0;						//set checkSum to 0
	int bar = 0;							//set bar to 0

	cout << "Welcome to the CIA code Hunter Program!" << endl;		//introduction
	cout << "Please type in text to analyze: " << endl;				//introduction
	getline(cin, textToAnalyze);									//input

	for (int i = 0; i < textToAnalyze.length(); ++i)		//for loop
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||		//vowels
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels;		//increment vowels		//changed from -- to ++
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))	//if this happens  
		{
			++consonants;			//increment consonants
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')		//if this happens
		{
			++digits;		//increment digits
		}
		else if (textToAnalyze[i] == ' ')		//if this happens
		{
			++spaces;		//increment spaces
		}
		else//if anything that happens that isnt specififed in the if statesments happens
		{
			++unknownCharacters;		//increment unknownCharacters
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();		//find lenght of string 
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;		//sum of all things found

	cout << "Vowels: " << vowels << endl;		//display vowels
	cout << "Consonants: " << consonants << endl;//display consonants
	cout << "Digits: " << digits << endl;//display digits
	cout << "White spaces: " << spaces << endl;//display spaces
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;	//display lengthOfStringSubmittedForAnalysis
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;	//display unknownCharacters
	cout << "Checksum: " << checkSum << endl;		//display checkSum

	if (checkSum == lengthOfStringSubmittedForAnalysis)		//if this happens
	{
		cout << "This program self checking has found this Analysis to be valid." << endl; //display this
	}
	else  //else
	{
		cout << " This program self checking has found this Analysis to be valid." << endl; //display this
	}

	system("pause");  //pause so the human eye can see it

	return 0;		//end prgram return 0
}