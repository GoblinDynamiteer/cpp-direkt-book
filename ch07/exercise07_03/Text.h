/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 257 - Exercice 7.3
 *      Create a class: Person, create a constructor and suitable methods
 *
 *  @member     name            Person name (Use text class in prev ex.)
 *  @member     address         Person address (Use text class in prev ex.)
 *  @member     Age             Person age
 *
 */

#ifndef TEXT_H
#define TEXT_H

class Text
{
    public:
        Text(int n = 0);
        Text(char *s);
        void change_char(int index, char c);
        char read_char(int index);
        int length(void);

    private:
        char *p;
        int len;
};

#endif
