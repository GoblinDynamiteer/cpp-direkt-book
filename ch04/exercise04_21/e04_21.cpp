/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 142 - Exercice 4:20
 *  Rewrite exercise 9 on page 102:
 *  Use function to convert roman numerical to regular integer:
 *  @param roman_num    Roman numerical as string
 *  @return             Converted value, -1 if invalid roman numerical
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define SPACING 15

int convert_roman_number(string s);

int main()
{
    int dec;
    vector<string> romans = {
        "XI",
        "IX",
        "IVX",
        "MCLVI",
        "CMLXXXVII",
        "MMXVIII",
        "JOHAN!",
        "MMMM",
        "V"
    };

    for (int i = 0; i < romans.size(); i++)
    {
        dec = convert_roman_number(romans[i]);
        cout << romans[i] << ": ";

        /* Generate spaces for nice table */
        for(int j = 0; j < (SPACING - romans[i].length()); j++)
        {
            cout << " ";
        }

        if(dec != -1)
        {
            cout << dec << endl;
        }
        else
        {
            cout << "[Invalid roman]" << endl;
        }

    }

	return 0;
}

/**
 * Converts a roman "Digit" to integer
 * @param  c Roman Digit, eg X I V
 * @return   Integer value
 */
int convert_roman_letter(char c)
{
  string letter = "IVXLCDM";
  int value[] = {1, 5, 10, 50, 100, 500, 1000};

    for(int i = 0; i < letter.size(); i++)
    {
        if(toupper(c) == letter[i])
        {
            return value[i];
        }
    }
}

/**
 * Check if string is valid roman number
 * @param  s Roman number as string
 * @return   True if valid roman number
 */
bool check_valid_roman(string s)
{
    string letter = "IVXLCDM";
    for(int i = 0; i< s.size(); i++)
    {
        if(letter.find(s[i]) == -1)
        {
            return 0;
        }
    }
    return 1;
}

/**
 * Decide if roman digit shall be added or subtracted
 * @param  c1 Digit 1 eg X is XV
 * @param  c2 Digit 2 (After digit 1) eg V in XV
 * @return    True if subtact : False if add
 */
bool subtract_or_add(char c1, char c2)
{
    return (convert_roman_letter(c1) < convert_roman_letter(c2));
}

/**
 * Convert roman number to integer
 * @param  s Romand number as string
 * @return   Decimal integer
 */
int convert_roman_number(string s)
{
    int decimal = 0, i;

    if(!check_valid_roman(s))
    {
        return -1; // Not valid roman number
    }

    for(i = 0; i < (s.size() - 1); i++)
    {
        decimal = subtract_or_add(s[i], s[i+1]) ?
            decimal - convert_roman_letter(s[i]) :
            decimal + convert_roman_letter(s[i]);

    }

    return decimal + convert_roman_letter(s[i]);
}
