#include <iostream>
#include <cmath>
#include "config.h"


using namespace std;

void linaearSearch( int *arr,int arrSize,int key){

	for( int i = 0; i < arrSize; i++ ){
			if(arr[i]==key){
				cout<<"Linear key is "<< arr[i]<< endl;
			}
		}

}

void binarySearch(int *arr, int arrSize, int key){

	int start = 0;
	int end = arrSize - 1;

	while(start<end){
		int middle = floor((start+end)/2);
		if(arr[middle]==key){
			cout<<"Binary key is "<<arr[middle]<<endl;
		}

		if(arr[middle]<key){
			start = middle + 1;
		}else{
			end = middle - 1;
		}
	}

}


int main(int argc, char **argv) {

	int arrSize = 10;
	int arrSorted [] = {1,2,3,4,5,6,7,8,9,10};


	linaearSearch(arrSorted,arrSize,4);
	binarySearch(arrSorted,arrSize,6);

	return 0;
}
