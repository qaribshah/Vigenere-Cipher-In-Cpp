#include <iostream>
#include <string>
using namespace std;
#include "VigenereCipher.h"

string VigenereCipher::encryption()
{
	string result;
	string newKey = key;
	while (newKey.length() < plainText.length())
	{
		newKey += key;
	}
	for (int i = 0; i < plainText.length(); i++)
	{
		result += ((plainText[i] + newKey[i]) % 26) + 65;
	}

	return result;
}

string VigenereCipher::decryption()
{
	string result;
	string newKey = key;
	while (newKey.length() < plainText.length())
	{
		newKey += key;
	}
	for (int i = 0; i < plainText.length(); i++)
	{
		result += ((plainText[i] - newKey[i] + 26) % 26) + 65;
	}

	return result;
}

void VigenereCipher::read(istream&)
{
	cout << "Enter the text (Capital letters and without Space only): ";
	cin >> plainText;
	cout << "Enter the Key (Capital letters and without Space only): ";
	cin >> key;
}

void VigenereCipher::write(ostream&)
{
	cout << "You entered the text: " << plainText << endl;
	cout << "You entered the key: " << key << endl;
}