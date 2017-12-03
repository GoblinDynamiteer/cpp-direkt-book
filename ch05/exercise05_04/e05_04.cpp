/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 196 - Exercice 5:04
 *  Read (max 1000) integers from user, print them in the same order. 
 *  Integers with the same value shall only be printed once.
 *  Example:
 *      Input:  45, 77, -22, 3, 45, 0, 21, -1, 3
 *      Output: 45, 77, -22, 3, 0, 21, -1
 * 
 *  Use a pointer to handle the array where values are stored.
 */

#include <iostream>
using namespace std;

#define MAX_INTEGER_INPUTS 1000
#define ADDED_VALUE 1
#define USER_QUIT 2
#define DUPLICATE_VALUE 3

int add_integer(int * inputs, int size);
bool check_existing_integer(
    int value, int * array, int n);
void print_array(int * array, int n);

int main()
{
    int inputs[MAX_INTEGER_INPUTS];
    int input_count = 0, array_size = 0;

    while(input_count++ < MAX_INTEGER_INPUTS)
    {
        int status = (add_integer(inputs, array_size));

        if(status == USER_QUIT)
        {
            break;
        }

        else if(status == ADDED_VALUE)
        {
            array_size++;
        }
    }

    print_array(inputs, array_size);
    return 0;
}

/* Get user integer input, add to array if not duplicate */
int add_integer(int * inputs, int size)
{
    int input;

    cout << "Enter an integer number (EOF to end) : " << endl;
    
    /* EOF (CTRL+Z) or Non integer */
    if(!(cin >> input))
    {
        return USER_QUIT;
    }

    if(!check_existing_integer(input, inputs, size))
    {
        inputs[size] = input;
        return ADDED_VALUE;
    }

    return DUPLICATE_VALUE;
}

/* Check if integer exists in array */
bool check_existing_integer(
    int value, int * array, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(value == array[i])
        {
            return true;
        }
    }

    return false;
}

/* Print array values */
void print_array(int * array, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}