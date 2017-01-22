/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 65
 *
 *  Inplacering fält
 *  In: Heltal, max 100 st
 *  Varje heltal ska placeras i ett fält.
 *  Sorterat efter storleksordning.
 */

#include <iostream>
using namespace std;

#define MAX_INT 100

int main(){
	int tal, list[MAX_INT], addedNums = 0;
	while(addedNums < MAX_INT){
		cout << "Ange tal: " <<
				"Avbryt med CTRL-Z" << endl;
		/*	 Break if EOF	*/
		if(!(cin >> tal)){
			break;
		}

		/*	 Find index for insertion	*/
		int insert = 0;
		while(insert < addedNums){
			if(tal < list[insert]){
				break;
			}
			insert++;
		}

		/*	Copy elements after insert
		 * 	index one position to the right
		 * 	Runs from end to insert index	*/
		for(int i = addedNums; i > insert; i--){
			list[i] = list[i-1];
		}
		list[insert] = tal;
		addedNums++;
	}

	/*	 Print list	*/
	for(int i = 0; i < addedNums; i++){
		cout << "list[" << i << "] = " << list[i] << endl;
	}
	return 0;
}
