#include <iostream>

using namespace std;

string findKeys(string correctPhrase, string actualType);

main()
{
    string Phrase;
    cout << "Enter the correct phrase: ";
    getline(cin, Phrase) ;

    string actualType;
    cout << "Enter what you actually typed: ";
    getline(cin, actualType) ;

    cout << "Broken keys: " << findKeys(Phrase, actualType);
 
}

string findKeys(string correctPhrase, string actualType) {
    string brokenKey = "";      
    string seenKey = "";
    for (int i = 0; i < correctPhrase.length(); i++) 
    {               
        if (correctPhrase[i] != actualType[i] && seenKey.find(correctPhrase[i]) == string::npos)  
        {
            brokenKey += correctPhrase[i];   
            seenKey += correctPhrase[i];    
        }
    }
    return brokenKey;
}
