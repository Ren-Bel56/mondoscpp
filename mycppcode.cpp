#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Client
{
    unsigned char Age;
    unsigned char taille;
    unsigned int comptes[10];
};
Client john={25, 180, {13594, 45796,0,0,0,0,0,0,0,0}};

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";

    }
    cout << endl;
    printf("John's age: %d\n", john.Age);
    printf("John's height: %d cm\n", john.taille);
    printf("John's first account balance: %u\n", john.comptes[0]);
    printf("John's second account balance: %u\n", john.comptes[1]);
        return 0;
}
