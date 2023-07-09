/*
Develop C program for the following:
    a) To count the number of vowels and consonants in a sentence.
    b) Palindrome checking.
    c) To check whether two strings are Anagrams.
    d) String copy and Concatenation.
*/
 
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void cpy(char *str, char *str1)
{
    str1[0] = '\0';
    for (int i = 0; i < strlen(str);i++)
    {
        str1[i] = str[i];
    }
    printf("The string after copying - %s",str);
}
void concate(char *str, char *str1)
{
    char res[100];
    int j = 0,i=0;
    int n = strlen(str) + strlen(str1);
    for( i=0; i<n ; i++)
    {
        res[i] = str[i];
        if (i >= strlen(str))
        {
            res[i] = str1[j];
            j++;
        }
        
    }
    res[i] = '\0';
    printf("The concatenation of string 1 and string 2 is %s",res);
}
void copycat()
 {
     char str1[50], str2[50];
     printf("Enter the string value 1 : ");
     scanf(" %[^\n]s",str1);
     printf("Enter the string value 2 : ");
     scanf(" %s",str2);
     char input;
     printf("String Operations:\nString Copy - (c)\nString Concatenation - (+)\n");
     scanf(" %c",&input);
     input = toupper(input);
     
     switch(input)
     {
         case 'C':
             int n;
             printf("Enter 1 for copy the  from string 1.\nEnter 2 for copy the string from string 2.\n");
             scanf(" %d",&n);
             if (n==1)
             {
                 cpy(str1, str2);
             }
             else if (n==2)
             {
                 cpy(str2, str1);
             }
             else
             {
                 printf("Invalid Input. ");
             }
            break;
        case '+':
            concate(str1, str2); 
            break;
        default:
            printf("Invalid Input");
         
         
     }
     printf("\n");
 }


void palindrome()
{
    char input[50],len;
    int flag = 0;
    printf("Enter the string : ");
    scanf(" %[^\n]s",input);
    len = strlen(input);
    int i = 0,j = len - 1;
    while (i < len)
    {
        if (input[i] == input[j])
        {
            
        }
        else
        {
            flag = 1;
        }
        i++;
        j--;
    }
    
    if (flag == 1)
    {
        printf("The given string %s is not a palindrome. ",input);
    }
    else
    {
        printf("The given string %s is a palindrome.",input);
    }
    printf("\n");
}

void vowels()
{
    char c[50];
    int i=0,vowels = 0,conso = 0,lowercase,uppercase;
    printf("Enter the string : ");
    scanf(" %[^\n]s",c);
    
    for (i = 0; i < strlen(c);i++)
    { 
        char a = c[i];
        
        if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        {
            vowels++;
        }
        else
        {
            conso++;
        }
    }
    printf("The count of vowels in the given string is %d \n",vowels);
    printf("The count of consonants in the given string is %d",conso);
    printf("\n");
}

int stcomp( const void *a, const void *b)
{
    return ( *(char*)a - *(char*)b ) ;
}

void sortstring( char *str)
{
    int n = strlen(str);
    qsort(str,n,sizeof(char),stcomp);
}

void anagram() {
    
    char str1[50], str2[50];
    int flag = 0;
    printf("Enter the string value 1 : ");
    scanf(" %s",str1);
    printf("Enter the string value 2 : ");
    scanf(" %s",str2);
    
    if (strlen(str1) == strlen(str2))
    {
        sortstring(str1);
        sortstring(str2);
        
        if(strcmp(str1, str2) == 0)
        {
            printf("The given two string are anagrams.") ;         
        }
        else
        {
            printf("The given two strings are not a anagrams.");
        }
    }
    else
    {
        printf("The given two strings are not a anagrams.");
    }
    printf("\n");
    
}

void main()
{
   
    vowels();
    printf("\n");
    
    palindrome();
    printf("\n");
    
    anagram();
    printf("\n");
    
    copycat();
    
}

