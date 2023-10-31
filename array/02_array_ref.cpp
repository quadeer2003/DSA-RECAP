#include<iostream>
using namespace std;

void printarr(int arr[]){
	int n = sizeof(arr)/sizeof(int);
	// n = 2
	cout<<"in fun "<<n<<endl;
}

int main(){
	int arr[] = {1,2,3,4,5,6};

	int n = sizeof(arr)/sizeof(int);
	// n = 6
	cout<<"in main "<<n<<endl;

	printarr(arr);
}