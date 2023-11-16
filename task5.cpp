#include <iostream>

using namespace std;

int CommonCharacters(string sa, string sb);

main() 
{
    string worda, wordb;
    
    cout << "Enter the first string: ";
    cin >> worda;

    cout << "Enter the second string: ";
    cin >> wordb;
 int result=CommonCharacters(worda, wordb);
    cout << "Number of common characters: " <<result;
}

int CommonCharacters(string sa, string sb) {
    int Count = 0;
    int charCount[26] = {0};  
    for (int i = 0; i < sb.length(); i++) 
    {
        char ch = sa[i];
        charCount[ch - 'a']++;        
    }

    
    for (int i = 0; i < sb.length(); i++)
    {
        char ch = sb[i];
        if (charCount[ch - 'a'] > 0) 
        {
            Count++;
            charCount[ch - 'a']--;
        }
    }
    return Count;
}
