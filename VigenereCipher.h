#pragma once
class VigenereCipher
{
private:
	string plainText;
	string key;
public:
	string encryption();
	string decryption();
	void read(istream&);
	void write(ostream&);
};