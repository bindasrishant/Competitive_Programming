#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
/* Following function is used by the library qsort() function to sort an
  array of chars */
int compare (const void * a, const void * b);
 
/* The main function that recursively prints all repeated permutations of
  the given string. It uses data[] to store all permutations one by one */
/*void allLexicographicRecur (char *str, char* data, int last, int index)
{
    int i, len = strlen(str);
 
    // One by one fix all characters at the given index and recur for the
    // subsequent indexes
    //for ( i=0; i<len; i++ )
    //{
        // Fix the ith character at index and if this is not the last index
        // then recursively call for higher indexes
        data[index] = str[i] ;
 
        // If this is the last index then print the string stored in data[]
        if (index == last)
            printf("%s\n", data);
        else // Recur for higher indexes
            allLexicographicRecur (str, data, last, index+1);
//    }
}*/
 void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
  
void permute(char *a, int i, int n) 
{
   int j; 
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); 
       }
   }
} 
/* This function sorts input string, allocate memory for data (needed for
  allLexicographicRecur()) and calls allLexicographicRecur() for printing all
  permutations */
void allLexicographic(char *str)
{
    int len = strlen (str) ;
 
    // Create a temp array that will be used by allLexicographicRecur()
    char *data = (char *) malloc (sizeof(char) * (len + 1)) ;
    data[len] = '\0';
 
    // Sort the input string so that we get all output strings in
    // lexicographically sorted order
    qsort(str, len, sizeof(char), compare);
 
    // Now print all permutaions
   // allLexicographicRecur (str, data, len-1, 0);
 permute(str, 0,len-1);
    // Free data to avoid memory leak
    free(data);
}
 
// Needed for library function qsort()
int compare (const void * a, const void * b)
{
    return ( *(char *)a - *(char *)b );
}
 
// Driver program to test above functions
int main()
{
    char str[] = "xaa";
    printf("All permutations with repetition of %s are: \n", str);
    allLexicographic(str);
   // getchar();
    return 0;
}