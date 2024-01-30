//26 Januari 2024
//https://www.codewars.com/kata/54ff3102c1bad923760001f3

#include <stddef.h>
#include <string.h>

size_t get_count(const char *s){
    int count = 0; //vowel counter
    int length = strlen(s); //panjang string
    
    //Looping untuk menghitung jumlah vowel
    for (size_t i = 0; i < length; i++)
    {
        if ((s[i] == 'a') || (s[i] == 'i') || (s[i] == 'e') || (s[i] == 'u') || (s[i] == 'o'))
        {
            count++;
        }    
    }
    return count;
}