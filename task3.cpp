#include<iostream>
using namespace std;
bool identical(string arr[], int size);
main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter Element "<<1+i<<" : ";
        cin>>arr[i];
    }
    bool result=identical(arr, size);
    cout <<result;
}
bool identical(string arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[0]!=arr[i]){
            return false;
        }
    }
    return true;
}