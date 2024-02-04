//4 Februari 2024
//https://www.codewars.com/kata/53369039d7ab3ac506000467

#include <stdbool.h>

const char *bool_to_word (bool value)
{
    // you can return a static/global string or a string literal
    if (value == true)
    {
        return "Yes";
    }else if (value == false)
    {
        return "No";
    }
}