#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

struct Client {
    unsigned int Age;
    unsigned int taille;
    unsigned int comptes[2];
};

Client John = {35, 190, {13594, 45794}};

typedef unsigned int chiffre;
chiffre manou = 1956;


Client Pierre = {35, 190, {15200, 50700}};

Client Anne = {28, 165, {12000, 30000}};


int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    printf("John's age: %u\n", John.Age);
    printf("John's height: %u cm\n", John.taille);
    printf("John's first account balance: %u\n", John.comptes[0]);
    printf("John's second account balance: %u\n", John.comptes[1]);
    printf("Manou's chiffre: %u\n", manou);
    printf("Pierre's age: %u\n", Pierre.Age);
    printf("Pierre's height: %u cm\n", Pierre.taille);
    printf("Pierre's first account balance: %u\n", Pierre.comptes[0]);
    printf("Pierre's second account balance: %u\n", Pierre.comptes[1]);
    printf("Anne's age: %u\n", Anne.Age);
    printf("Anne's height: %u cm\n", Anne.taille);
    printf("Anne's first account balance: %u\n", Anne.comptes[0]);
    printf("Anne's second account balance: %u\n", Anne.comptes[1]);
    return 0;
}
