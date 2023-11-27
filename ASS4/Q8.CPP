//Q8. WAP to create a array of 10 numbers and delete 5th elements.

#include<iostream.h>
#include<conio.h>

void displayArr(int arr[], int size){
	cout<<"Array Elements :";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void deleteArr(int arr[],int size,int index){
	for(int i=index;i<size-1;i++){
		arr[i]=arr[i+1];
	}

}

int main(){
	clrscr();
	int arr[10]={1,2,3,4,5,6,7,8,9,10},index=5;
	int size =sizeof(arr)/sizeof(int);
       /*	cout<<"Enter the array elements :\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}*/

	displayArr(arr,size);

	deleteArr(arr,size,index);
	cout<<"After deletion the element Array is :\n";

	size--;

	displayArr(arr,size);

	getch();
	return 0;

}