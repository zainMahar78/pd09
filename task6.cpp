#include<iostream>
using namespace std;
int color(string arr[],int size);
main(){
    int size ;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];}
        int result=color(arr,size);
        cout<<"Time to color: "<<result<<" seconds";
    }
int color(string arr[],int size)
{
       int count=0;
       int st=1;
       int color=2;
       count=count+color;

        for (int i=1; i<size; i++ ){
            if(arr[i]!=arr[i-1]){
                count=count+st;
                }
                count=count+color;
            
        }
        return count;
    }
