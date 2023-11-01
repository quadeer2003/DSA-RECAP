#include<iostream>
using namespace std;

void rev_arr(int arr[], int n){
	int s = 0;
	int e = n-1;

	while(s<e){
		swap(arr[s],arr[e]);
		s++;
		e = e-1;
	}
}
int main(){
	int arr[100];

	int n;
	cin>>n;

	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}

	rev_arr(arr,n);

	for (int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}