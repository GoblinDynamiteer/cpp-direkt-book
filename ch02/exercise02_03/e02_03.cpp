/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 63
 *  Val av bilförsäkring.
 *
 *  In: Bilålder
 *  Ut: Försäkringstyp
 *  	Ålder < 5: "Välj helförsäkring!"
 *  	Ålder > 5: "Välj halvförsäkring!"
 *  	Ålder > 25:"Välj veteranförsäkring!"
 */

#include <iostream>
using namespace std;

int main(){
	int age;
	while(1){
		cout << "Ange bilens ålder: ";
		cin >> age;
		if(age > 25){
			cout << "Välj veteranförsäkring!" << endl;
		}
		else if(age > 5){
			cout << "Välj halvförsäkring!" << endl;
		}
		else{
			cout << "Välj helförsäkring!" << endl;
		}
	}
	return 0;
}
