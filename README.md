# Vigenère Cipher – C++ Implementation
This is a simple command-line application that performs **encryption** and **decryption** using the **Vigenère Cipher**, a classical method of encrypting alphabetic text by using a keyword.

## What is Vigenère Cipher
The Vigenère cipher is a method of encrypting alphabetic text using a keyword to determine the shift applied to each letter of the message. It's a polyalphabetic substitution cipher, meaning it uses multiple substitution alphabets rather than a single one, which makes it more secure than a simple Caesar cipher. 

![Vigenere_Cipher](https://github.com/user-attachments/assets/cb72c5b7-3594-4fa3-aa94-4bc6f1f171a3)

### How It Works
Choose a keyword (e.g., KEY).

Repeat the keyword until it matches the length of the plaintext.

Shift each letter in the plaintext by the alphabetical index of the corresponding keyword letter.

EncryptedLetter = (PlaintextLetter + KeyLetter) mod 26
DecryptedLetter = (EncryptedLetter − KeyLetter + 26) mod 26


## 🔧 Features

- Encrypt plaintext using the Vigenère Cipher
- Decrypt ciphertext back to original plaintext
- Command-line based menu for interaction
- Secure character-wise encryption with keyword repetition
- Written in clean, object-oriented C++ style

## Expected Input

- **Plaintext**: Uppercase letters only (`A–Z`), no spaces
- **Key**: Uppercase letters only, shorter than or equal to the plaintext
- You must remove spaces and convert text to uppercase before input

### Example Input:
```
Enter the option: 1
Enter the text: ATTACKATDAWN
Enter the Key: LEMON
```

## Expected Output

For encryption:

```

Encrypted Text: LXFOPVEFRNHR

```

For decryption:

```

Enter the option: 2
Enter the text: LXFOPVEFRNHR
Enter the Key: LEMON
Decrypted Text: ATTACKATDAWN

```

## 📌 Note

- The current version **does not support** lowercase letters or spaces.
- Input must be sanitized (uppercase, no spaces) **before entering into the program**.
