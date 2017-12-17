/*
 *  Exercise from book
 *  C++ Direkt by Jan Skansholm
 *  http://skansholm.com
 *
 *  Page 257 - Exercice 7.2
 *      Add to class Text (page 246):
 *
 *  @method     change_char     Change specific char in text
 *  @method     read_char       Read specific char in text
 *  @method     length          Return text length
 *
 */

#include "Text.h" // Class to test
#include "unity.h"
#include <cstring>

void test_text_class(void)
{
    char test_string[] = "I am a string! In a class...";
    Text text1 = Text(test_string);
    TEST_ASSERT_EQUAL(strlen(test_string), text1.length());
    TEST_ASSERT_EQUAL(test_string[4], text1.read_char(4));

    test_string[7] = 'A';
    text1.change_char(7, 'A');

    TEST_ASSERT_EQUAL(test_string[7], text1.read_char(7));

    Text text2 = Text(123);
    TEST_ASSERT_EQUAL(123, text2.length());
    TEST_ASSERT_EQUAL(' ', text2.read_char(10));
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_text_class);

    return UNITY_END();
}
