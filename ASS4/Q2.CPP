//Q2.WAP to add two matrix.
#include <iostream.h>
#include <conio.h>

void displayArr(int arr[3][3]){
       for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void displaySum(int arr1[3][3],int arr2[3][3]){
int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[i][j] =arr1[i][j]+arr2[i][j];
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){

	clrscr();
	int arr1[3][3]={{23,45,67},{12,43,65},{57,90,84}};
	int arr2[3][3]={{32,5,7},{18,13,15},{8,3,2}};

	cout<<"First Array => \n";
	displayArr(arr1);

	cout<<"\nSecond Array => \n";
	displayArr(arr2);

	cout<<"\nAddition of 2 Array's => \n";
	displaySum(arr1,arr2);

	getch();
	return 0;

}
