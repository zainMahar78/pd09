#include<iostream>
using namespace std;
string seven(int arr[],int size);
main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter Element "<<i+1<<" :";
        cin>>arr[i];
    }
    string result=seven(arr,size);
    cout<<result;
}
string seven(int arr[], int size){
    for (int i=0; i<size; i++){
        if(arr[i]==7){
            return "Boom!";
        }
    }
     return "there is no 7 in the array";
}