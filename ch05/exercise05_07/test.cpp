/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 197 - Exercice 5:06
 *      Write a function that copies a string to another string.
 *      Make sure that string is not written outside of target string length,
 *      what is a good way to tell if the string was copied correctly?
 *  @param s1   String 1 (source)
 *  @param s2   String 2 (target)
 *  @param l    String 2 length
 *  @return     Bool success
 */

#include <stdbool.h>
#include "func.h"
#include "unity.h"
#include "string.h"

void test_func(void)
{
    int n = 30;
    char string_from1[] = "HELLO";
    char string_to1[n] = "";

    TEST_ASSERT_TRUE(string_copy(string_from1, string_to1, n));
    TEST_ASSERT_EQUAL_STRING(string_from1, string_to1);

    n = 15;
    char string_from2[] = "TEST_STRING";
    char string_to2[n] = "HI";

    TEST_ASSERT_TRUE(string_copy(string_from2, string_to2, n));
    TEST_ASSERT_EQUAL_STRING(string_from2, string_to2);

    n = 5;
    char string_from3[] = "TOO_LONG";
    char string_to3[n] = "HI";

    TEST_ASSERT_FALSE(string_copy(string_from3, string_to3, n));
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_func);

    return UNITY_END();
}
