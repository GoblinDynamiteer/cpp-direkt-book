/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 102
 *  Justera programmet på sida 88 så att försäljarna lagras
 *	och skrivs ut i bokstavsordning. Använd hjälpfunktionerna
 *	i klassen alpha.
 *
 *	Originalkod från sida 88

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;
int main(){
  const float grans = 50000., pro1 = 0.1, pro2 = 0.15;
  vector<string> namn; //innehåller försäljarens namn
  vector<float> tab; //innehåller totala försälningsbelop
  string nn;
  float belopp, arvode;

  while (cin >> belopp >> ws){
    getlin(cin, nn); //läs in nästa namn
    //sök efter namnet nn
    int i;
    for(i = 0; i < namn.size() && namn != namn[i]; i++){
      ;
    }
    if (i==namn.size()){ //ej fnnnen, lägg in ny agent
      namn.push_back(nn);
      tab.push_back(belopp);
    }
    else{
      tab[i] += belopp; //fanns redan, addera nytt belopp
    }
    //skriv sammanställning
    cout  << endl
          << "  Belopp    Arvode    Namn" << endl
          << "  ======    ======    ====" << endl;
    for(int j = 0; j < namn.size(); j++){
      if(tab[j] <= grans){
        arvode = pro1 * tab[j];
      }
      else{
        arvode = pro1 * grans + pro2 * (tab[j]-grans);
      }
    cout << fixed << setprecision(0) << setw(10) << tab[j]
    << setw(10) << tab[j] << setw(10) << arvode << "    " << namn[j] << endl;
    }
  }
  return 0;
}

*/
