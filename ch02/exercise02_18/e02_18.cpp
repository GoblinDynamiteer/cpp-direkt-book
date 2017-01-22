/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 65
 *
 *  Bubbelsortering
 *  In: Ett antal heltal, läggs till fält.
 *  Ut: Fältets element, sorterade med bubble sort.
 */

#include <iostream>
using namespace std;

#define MAX_NUM 20

int main(){
	int list[20], tal, imax = 0;

	/*	 Add numbers to array	*/
	while(imax < MAX_NUM){
		cout << "Ange tal: ";
		if(!(cin >> tal)){
			break;
		}
		list[imax] = tal;
		imax++;
	}

	/*	 Bubble sort array	*/
	bool bubbled = 1;
	while(bubbled){
		bubbled = 0;
		for(int i = 0; i < imax; i++){
			if(list[i] > list[i+1]){
				/*	 Swap element values	*/
				int temp = list[i+1];
				list[i+1] = list[i];
				list[i] = temp;
				bubbled = 1;
			}
		}
	}

	/*	 Print sorted array	*/
	for(int i = 0; i < imax; i++){
		cout << "list[" << i << "] = " << list[i] << endl;
	}
	return 0;
}
