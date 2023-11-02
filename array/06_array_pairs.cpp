#include<iostream>
using namespace std;

void print_pairs(int arr[], int n){
	for(int i = 0; i<n ; i++){
		int x = arr[i];
		for(int j=i+1; j<n; j++){
			int y=arr[j];

			cout<<x<<","<<y<<endl;
		}
		cout<<endl;
	}
}
int main(){
	int arr[100];

	int n;
	cin>>n;

	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}

	print_pairs(arr,n);
}