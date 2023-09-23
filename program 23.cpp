#include <iostream>
using namespace std;

int main()
// input a character and display it is vowel or constant using switch loop.
{
	char character;
	cout << "enter alphabet";
	cin >> character;
	switch (character){
	case 'a':
		cout << "it is a vowel";
		break;
	case 'e':
	    cout << "it is a vowel";
	    break;
	case 'i':
	    cout << "it is a vowel";
	    break;
	case 'o':
	    cout << "it is a vowel";
	    break;
	case 'u':
	    cout << "it is a vowel";
	    break;
	case 'A':
	    cout << "it is a vowel";
	    break;
	case 'E':
	     cout << "it is a vowel";
		 break;
	case 'I':
	     cout << "it is a vowel";
	     break;
	case 'O':
	     cout << "it is a vowel";
	     break;
	case 'U': 
	     cout << "it is a vowel";
		 defult:
		 cout << "it is a constant";      
}   
	return 0;
}
