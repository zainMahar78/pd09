#include<iostream>
using namespace std;
bool iseven(string name);
main(){
    string name;
    cout<<"Enter a string: ";
    cin>>name;
    bool result=iseven(name);
    cout<<result;
    }
    bool iseven( string name){
        int arr=name.length();
        if (arr%2==0){
            return true;
        }
        else
        return false;
    }