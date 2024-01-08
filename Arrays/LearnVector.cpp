#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	vector<int> vec;
	
	//Function to insert the value in the back of vector
	vec.push_back(3);
	vec.push_back(1);
	vec.push_back(5);
	
	cout<<vec[0]<<endl;
	cout<<vec[1]<<endl;
	cout<<vec[2]<<endl;
	
	//Function to get the size of a vector
	cout<<"Size of Vector before deleting the element: "<<vec.size()<<endl;
	
	//Function to delete the last element from the vector
	vec.pop_back();
	cout<<"Size of Vector after deleting the element: "<<vec.size()<<endl;
	
//	1, 2, 3, 4, 5, 6, 7, 8;

	//Code snippet to see the changing capacity of vectors
	vector<int> store;
	for(int i=0; i<100; i++){
		store.push_back(i);
		cout<<"capacity: "<<store.capacity()<<" size: "<<store.size()<<endl;
	}
	
	//Ascending order sorting
	sort(vec.begin(), vec.end());
	
	for(int i=0; i<vec.size(); i++){
		cout<<vec[i]<<" ";
	}
	
	cout<<endl;
	//Descending order sorting
	sort(vec.begin(), vec.end(), greater<int>());
	
	for(int i=0; i<vec.size(); i++){
		cout<<vec[i]<<" ";
	}
	
	return 0;
}
