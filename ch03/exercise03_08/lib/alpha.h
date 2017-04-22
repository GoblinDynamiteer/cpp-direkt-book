 // alpha.h
 #ifndef ALPHA_H
 #define ALPHA_H
 #include <string>
 #include <stdexcept>
 #include <cstdlib>

 // Created by Jan Skansholm 2000
 // The functions in this class compare texts alphabetically.
 // Upper and lower case letters are considered to be equal 
 // and letters with accets etc. are treated correctly.
 // Currently the class can handle the normal Latin alphabet 
 // (English, French etc.), Spanish, German, and Swedish.
 // It is easy to extend the class with new langages.
 // All that is needed is to add a collate table 
 // and a pair table (if there are special pairs of letters as in Spanish)
 // and to adjust the function set_lang.  

 class alpha {
 public:
   // Constructor, takes a language code as parameter
   // (See function set_lang)
   alpha(const std::string lang = "la") {
     set_lang(lang);
   }

   // Function set_lang takes a language code as parameter.
   // Only the two first letters are significant.
   // Currently the following codes are allowed:
   // la, en, es, pt, fr, it, de, sv
   // For codes see www.ics.uci.edu/pub/ietf/http/related/iso639.txt
   void set_lang(const std::string lang);

   // function templates, T1 and T2 could be string, char * or char
   template<class T1, class T2>
    bool eq (T1 s1, T2 s2)
   { return compare(s1,s2) == 0; }

   template<class T1, class T2>
    bool ne (T1 s1, T2 s2)
   { return compare(s1,s2) != 0; }
   
   template<class T1, class T2>
    bool lt (T1 s1, T2 s2)
   { return compare(s1,s2) < 0; }

   template<class T1, class T2>
    bool gt (T1 s1, T2 s2)
   { return compare(s1,s2) > 0; }

   template<class T1, class T2>
    bool le (T1 s1, T2 s2)
   { return compare(s1,s2) <= 0; }

   template<class T1, class T2>
    bool ge (T1 s1, T2 s2)
   { return compare(s1,s2) >= 0; }

   // function operators
   bool operator()(const std::string& s1, const std::string& s2)
   { return lt(s1,s2); }

   bool operator()(const char* s1, const char* s2)
   { return lt(s1,s2); }

   bool operator()(char c1, char c2)
   { return lt(c1, c2); }

   // comparison functions 
   
   int compare(char c1, char c2) 
   { return abs(collate[(unsigned char) c1]) < abs(collate[(unsigned char) c2]) ? -1 : 
           (abs(collate[(unsigned char )c1]) > abs(collate[(unsigned char) c2]) ? 1 : 0); }

   int compare (const char* s1, const char* s2) 
   { return (this->*cmp)(s1, s2); }

   int compare(const std::string& s1, const std::string& s2) 
   { return (this->*cmp)(s1.c_str(), s2.c_str()); }

   int compare(const std::string& s1, const char* s2) 
   { return (this->*cmp)(s1.c_str(), s2); }

   int compare(const char* s1, const std::string& s2) 
   { return (this->*cmp)(s1, s2.c_str()); }

   int compare(char c1, const char* s2) 
   { return (this->*cmp)(std::string(1,c1).c_str(), s2); }

   int compare(char c1, const std::string& s2) 
   { return (this->*cmp)(std::string(1,c1).c_str(), s2.c_str()); }

   int compare(const char* s1, char c2) 
   { return (this->*cmp)(s1, std::string(1,c2).c_str()); }

   int compare(const std::string& s1, char c2) 
   { return (this->*cmp)(s1.c_str(), std::string(1,c2).c_str()); }

   bool is_letter(unsigned char c)
   { return is_upper_case(c) || is_lower_case(c); }

   bool is_upper_case(unsigned char c)
   { return  collate[c] > 300; }

   bool is_lower_case(unsigned char c)
   { return  collate[c] < -300; }

   unsigned char to_upper_case(unsigned char c)
   { return is_lower_case(c) && is_upper_case((unsigned char) (c-0x20)) ? c-0x20 : c; }

   unsigned char to_lower_case(unsigned char c)
   { return is_upper_case(c) && is_lower_case((unsigned char) (c+0x20)) ? c+0x20 : c; }

   void to_upper_case(char *s);

   void to_lower_case(char *s);

   void to_upper_case(std::string& s);

   void to_lower_case(std::string& s);

 private:
   static const short int collate_la[];   // table defining the order of the
                                          // letters in the Latin alphabet
   static const short int collate_es[];   // table defining the order of the
                                          // letters in the Spanish alphabet
   static const short int collate_de[];   // table defining the order of the
                                          // letters in the German alphabet
   static const short int collate_sv[];   // table defining the order of the
                                          // letters in the Swedish alphabet
   const short int* collate;              // table currently in use

   struct char_pair {
     char c1, c2;
     int no;
   };
   static const char_pair pair_es[]; // pair of letter, that are treated as a single letter
   const char_pair* pairs;           // pair table currently in use

   int cmp1 (const char* s1, const char* s2);          // for languages without character pairs
   int cmp2 (const char* s1, const char* s2);          // for languages with character pairs
   void translate(const char *s, int *t);              // used by cmp2
   int (alpha::*cmp)(const char*, const char*);        // pointer to compare function currently in use 
 };
 #endif
