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

#include "Person.h"
#include "Text.h"

/**
 * Constructor
 * @param name    Person name
 * @param address Person address
 * @param age     Person age
 */
Person::Person(char name[], char address[], int age)
{
    person_name = Text(name);
    person_address = Text(address);
    person_age = age;
}

/**
 * Increase person age
 * @param  increment Value to increase age by
 */
void Person::increase_age(int increment)
{
    person_age += increment;
}

int Person::get_age(void)
{
    return person_age;
}

Text Person::get_name(void)
{
    return person_name;
}

Text Person::get_address(void)
{
    return person_address;
}
