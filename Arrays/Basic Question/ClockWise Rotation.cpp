#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> arr;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	
	//Code logic
	
	int store = arr[n-1];
	
	for(int i=n-2; i>=0; i--){
		arr[i+1] = arr[i];
	}
	
	arr[0] = store;
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
