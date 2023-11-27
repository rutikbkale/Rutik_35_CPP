// Write a Program for using exception handling methods, catch,throw& try.

#include <iostream>

using namespace std;

int main() {
    
    int arr[] ={12,23,34,56,61};
    int i;
    cout<<"Enter the index : ";
    cin>>i;

    try{
        if(i<0 || i>=(sizeof(arr)/sizeof(arr[0]))){
            throw out_of_range("Index out of range !");
        }
        for(int k=0;k<(sizeof(arr)/sizeof(arr[0]));k++){
            cout<<arr[k]<<" ";
        }
    }catch(out_of_range &e){
        cout<<"Error : "<<e.what();
    }
    
    return 0;
}
