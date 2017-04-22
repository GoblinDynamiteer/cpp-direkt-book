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
 *	*** Jag kan inte kompilera med författarens alpha-bibliotek ****
 */

 #include <iostream>
 #include <iomanip>
 #include <vector>
 #include <string>
 #include "lib/alpha.h" //Authors library for sorting text
 using namespace std;
 alpha comparator;

 int main(){
   const float grans = 50000., pro1 = 0.1, pro2 = 0.15;
   vector<string> namn;
   vector<float> tab;
   string nn;
   float belopp, arvode;

   while (cin >> belopp >> ws){
     getline(cin, nn);
		 int i;
     for(i = 0; i < namn.size() && nn != namn[i]; i++){
       ;
     }
     if (i==namn.size()){
       namn.push_back(nn);
       tab.push_back(belopp);
     }
     else{
       tab[i] += belopp;
     }
	   cout << endl
	        << "    Belopp    Arvode    Namn" << endl
	        << "    ======    ======    ====" << endl;
     for(int j = 0; j < namn.size(); j++){
       if(tab[j] <= grans){
         arvode = pro1 * tab[j];
       }
       else{
         arvode = pro1 * grans + pro2 * (tab[j]-grans);
       }
			 cout << setiosflags(ios::fixed) << setprecision(0)
	          << setw(10) << tab[j] << setw(10) << arvode
						<< "    " << namn[j] << endl;
     }
   }
   return 0;
 }
