#include<iostream>
using namespace std;

int lin(int arr[], int n, int key){
	for (int i = 0; i < n; i++){
		if(arr[i]==key) return i;
	}

	return -1;
}

int main(){
	int arr[100];

	int n;
	cin>>n;

	int key;
	cin>>key;

	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int result = lin(arr,n,key);

	if( result== -1) cout<<"NOT FOUND";
	else cout<<"Found at "<<result<< " index";
}