#include<iostream>
#include<set>
using namespace std;

int count(int data[], int size) {

    set<int>mySet;
	for(int i = 0 ;i  < size; i++) {
	
		mySet.insert(data[i]);
		
	}
	return mySet.size();
	
}