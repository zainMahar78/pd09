#include<iostream>

using namespace std;

void convert(string pin);

main()
{
    string pin1;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin1;
    convert(pin1);
}

void convert(string pin)
{
    string move[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string resulta = "";

    if (pin.length() != 4)          
    {
        cout << "Invalid input.";
        return;
    }
    for (int i = 0; i < pin.length(); i++)        
    {
        if (!isdigit(pin[i]))
        {
            cout << "Invalid input.";
            return;
        }
    }

    int pinIndex = 0, movesIndex = 0;
    int j = 0; 
    for (int i = 0; i < pin.length(); i++)
    {
        pinIndex += (pin[i] - '0');        
        if (pinIndex > 9)                  
            pinIndex = pinIndex - 10;
        resulta += move[pinIndex] + ", ";

        pinIndex = j;      
        pinIndex++;
        j++;
    }
    resulta = resulta.substr(0, resulta.size() - 2);  
    cout << resulta;
}
