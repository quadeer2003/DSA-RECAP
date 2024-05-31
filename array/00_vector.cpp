#include<iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> arr;
    //vector<int> arr={1,2,3,4,5};
    //fill-constructor 
    // vector<int> arr(10,0); 10 elements of val=0 
 
    //push_back
    arr.push_back(16);
	arr.push_back(61);
 
    //pop_back
    arr.pop_back();
    //print elements
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
 
    //size {when init size=cap}
    cout<<arr.size()<<endl;
 
    //cap {cap doubles when element is added}
    cout<<arr.capacity()<<endl;
}

