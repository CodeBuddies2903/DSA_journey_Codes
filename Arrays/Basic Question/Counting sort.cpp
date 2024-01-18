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
	
	//Code logic;
	
	int count0=0;
	int count1=0;
	int count2=0;
	
	for(int i=0; i<n; i++){
		if(arr[i]==0)
			count0++;
		else if(arr[i]==1)
			count1++;
		else
			count2++;
	}
	int counter=0;
	for(int i=0; i<count0; i++){
		arr[counter] = 0;
		counter++;
	}
	for(int i=0; i<count1; i++){
		arr[counter] = 1;
		counter++;
	}
	for(int i=0; i<count2; i++){
		arr[counter] = 2;
		counter++;
	}
	
	cout<<endl<<endl;
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
