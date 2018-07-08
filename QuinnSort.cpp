#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>

using namespace std; 

void QuinnSort(vector<int>& arr, int count){

	if(count != 22){

		for(int i = 0; i<arr.size(); i++){
			for(int j = 0; j<arr.size(); j++){
				QuinnSort(arr,22); 
			}
		}

	}

	sort(arr.begin(), arr.end()); 
}

int main(){
	
	vector<int> arr;

	for(int i = 0; i<22; i++)
		arr[i] = 22-i; 

	QuinnSort(arr,0); 

	cout << endl; 


	for(int i = 0; i<22; i++)
		cout << arr[i]; 

	return 0; 
}