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

 #ifndef PERSON_H
 #define PERSON_H

#include "Text.h"

class Person
{
 public:
     Person(char name[], char address[], int age = 0);
     void increase_age(int increment = 1);
     int get_age(void);
     Text get_name(void);
     Text get_address(void);

 private:
     Text person_name;
     Text person_address;
     int person_age;
};

#endif
