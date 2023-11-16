#include<iostream>

using namespace std;

void Transform(int arr[], int size, int n);

main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    
    int arr[size];    
    int a;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> a;
        arr[i] = a;
    }

    int transform;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> transform;

    Transform(arr, size, transform);
}

void Transform(int arr[], int size, int n)
{
    while (n != 0)
    {
     
        for (int i = 0; i < size; i++)

            if (arr[i] % 2 == 0)
                arr[i] = arr[i] - 2;
            else
                arr[i] = arr[i] + 2;    
        }
        n--;
    }

    string resulta = "[";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            resulta += to_string(arr[i]);
        else
            resulta += to_string(arr[i]) + ", ";
    }
    resulta += "]";

    cout << resulta; 
}
