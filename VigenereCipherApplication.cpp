#include <iostream>
#include <string>
using namespace std;
#include "VigenereCipher.h"

int main()
{
    VigenereCipher vc;
    string encryptedText;
    string decryptedText;
    int option = 0;

    cout << "\t\tWelcome to the Encryption and Decryption Application\t\t" << endl;

    do {
        // Show menu inside loop
        cout << "\n\t1) Encryption\t2) Decryption\t3) Exit" << endl;
        cout << "Enter the option: ";
        cin >> option;

        // Input validation
        while (option < 1 || option > 3) {
            cout << "Invalid input. Please enter an option between 1 and 3: ";
            cin >> option;
        }

        // Process the option
        if (option == 1) {
            vc.read(cin);
            encryptedText = vc.encryption();
            cout << "Encrypted Text: " << encryptedText << endl;
        }
        else if (option == 2) {
            vc.read(cin);
            decryptedText = vc.decryption();
            cout << "Decrypted Text: " << decryptedText << endl;
        }

    } while (option != 3);

    return 0;
}
