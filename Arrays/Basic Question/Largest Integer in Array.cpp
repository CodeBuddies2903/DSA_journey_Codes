#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largest(vector<int> &arr, int n){
	int cur_max= arr[0];
	for(int i=1;i<n; i++){
		if(cur_max<arr[i]){
			cur_max = arr[i];
		}
	}
	return cur_max;
}
int main(){
	
	vector<int> arr;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		
		arr.push_back(x);
	}
	cout<<largest(arr,n);
	return 0;
}
