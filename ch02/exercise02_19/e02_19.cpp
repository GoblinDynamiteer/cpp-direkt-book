/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 65
 *  Gruppsortering
 *  In: 1 heltal k, max 500 heltal n
 *  Sortera heltalen n i array i två grupper,
 *  där n > k och n <= k
 *
 *  Exempel: k=20
 *  gruppsorterat fält:
 *  1 4 2 16 7 19 20 21 88 44 33 22
 *
 */

#include <iostream>
using namespace std;

#define MAX_NUM 500

int main(){
	int list[MAX_NUM], n, k, count = 0;
	cout << "Ange k: "; cin >> k;

	/*	 Enter numbers for array	*/
	while(count < MAX_NUM){
		cout << "Ange heltal: ";
		if(!(cin >> n)){
			break;
		}
		/*	 n shall be placed at index 0	*/
		if(n <= k){
			/*	Shift all element values one to the right */
			for(int i = count; i > 0; i--){
				list[i] = list[i-1];
			}
			list[0] = n;
		}
		/*	 n shall be placed last	*/
		else{
			list[count] = n;
		}
		count++;
	}

	/*	 Print list	*/
	for(int i = 0; i < count; i++){
		cout << "list[" << i << "] = " << list[i] << endl;
	}
	return 0;
}
