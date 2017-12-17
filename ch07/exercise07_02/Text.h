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
