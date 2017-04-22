/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Sida 102
 *  Romerska siffror:
 *  I V X L C D M
 *  1 5 10 50 100 500 1000
 *
 *  Deklarera en string-variabel som innehåller de romerska siffrorna
 *  Deklarera en tabell (array) som kan användas för att översätta en
 *  romersk siffra till ett vanligt heltal. Exempelvis L till 50.
 *
 *  IN: Romerskt tal
 *  UT: Decimalt heltal
 *
 *  Exempel MCMXLIX -> 1949
 *
 *  Info: Om en romersk siffra "P" står omedelbart till vänster om en annan
 *  romersk siffra "Q" och om P betecknar ett mindre tal än Q, så skall värdet
 *  av P subtraheras från det totala talet. (LIX = 59). Annars ska P adderas
 *  till det totala talet. (LXI = 61)
 */

#include <iostream>
#include <string>
#include <ctype.h> //toupper
using namespace std;

int convRomanLetter(char c);
int convRoman(string s);
bool subOrAdd(char c1, char c2);
bool checkValidRoman(string s);

int main(){
  string romanNum;
  cout << "Enter roman number to convert: ";
  getline(cin, romanNum);
  if(!checkValidRoman(romanNum)){
    cout << "Invalid roman number!" << endl;
  }
  else{
    cout << romanNum << ": " << convRoman(romanNum);
  }
  return 0;
}

/*  Convert roman single digit to decimal   */
int convRomanLetter(char c){
  string letter = "IVXLCDM";
  int value[] = {1, 5, 10, 50, 100, 500, 1000};
    for(int i = 0; i < letter.size(); i++){
    if(toupper(c) == letter[i]){
      return value[i];
    }
  }
}

/*  Checks if string is valid roman number   */
bool checkValidRoman(string s){
  string letter = "IVXLCDM";
  for(int i = 0; i< s.size(); i++){
    if(letter.find(s[i]) == -1){ //s[i] is not found in letter
      return 0;
    }
  }
  return 1;
}

/*   Convert roman number to decimal  */
int convRoman(string s){
  int decimal = 0, i;
  for(i = 0; i < (s.size() - 1); i++){
    if(subOrAdd(s[i], s[i+1])){
      decimal -= convRomanLetter(s[i]);
    }
    else{
      decimal += convRomanLetter(s[i]);
    }
  }
  return decimal + convRomanLetter(s[i]);
}

/*  Determine if roman number shall be added or subtracted   */
bool subOrAdd(char c1, char c2){
  return (convRomanLetter(c1) < convRomanLetter(c2));
}
