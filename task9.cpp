#include <iostream>

using namespace std;

string longest7Word(string arr[], int);
bool EligibleWord(string);

main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;

    string arr[size];
    
    cout << "Enter the words, one by one:" << endl;
    
    string a;
    for (int i = 0; i < size; i++) 
    {
        cin >> a;
        arr[i] = a;
    }

    string result = longest7Word(arr, size);

    cout << "Longest 7-segment word: " << result;

}

string longest7Word(string arr[], int minLength) 
{
    string longest = "";
    for (int i = 0; i < minLength ; i++)
    {   
        if (arr[i].length() >= minLength && EligibleWord(arr[i]) && arr[i].length() > longest.length())
            longest= arr[i];
    }
    return longest;
}
bool EligibleWord(string word) 
{
    for (int  i = 0; i < word.length(); i++)
    {
        if (word[i] == 'k' || word[i] == 'm' || word[i] == 'v' || word[i] == 'w' || word[i] == 'x')
            return false;
    }
    return true;
}
