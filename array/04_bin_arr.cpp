#include<iostream>
using namespace std;

int bin(int arr[], int n, int key,int low,int high){
	if(low<=high){
		int mid = (low + high)/2;

		if(arr[mid]==key) return mid;
		else if(arr[mid]>key) high = mid -1;
		else low = mid +1;
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

	int low =0,high=n-1;

	int result = bin(arr,n,key,low,high);

	if( result== -1) cout<<"NOT FOUND";
	else cout<<"Found at "<<result<< " index";
}