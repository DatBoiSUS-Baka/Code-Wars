//19 Maret 2024
#include <string.h>
void filter_friends (const char *names[])
{
  // names[] is NULL-terminated, mutate it
  // You must re-use the pointers in 'names', do not allocate memory
  // Do not forget to NULL-terminate 'names'
  int friendIndex = 0; //To determine the index for friends names
  int i = 0;
  while(names[i] != NULL){
    //Condition if the name is 4 in length
    if(strlen(names[i]) == 4){
      //Change the name in friendIndex with the name that fits the condition
      names[friendIndex] = names[i];
      friendIndex++;
    }
    i++;
  }
  //Null terminate the new array of string
  names[friendIndex] = NULL;
}