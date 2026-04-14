#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count words 
int countWords(char str[])
{
    int words = 1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            words++;
    }

    return words;
}

// Function to count vowels 
int countVowels(char str[])
{
    int v = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            v++;
    }

    return v;
}

// Function to count consonants
int countConsonants(char str[])
{
    int c = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if(isalpha(ch) && !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            c++;
    }

    return c;
}

// Function to check palindrome
int isPalindrome(char str[])
{
    int l = 0;
    int r = strlen(str) - 2;  

    while(l < r)
    {
        if(str[l] != str[r])
            return 0;

        l++;
        r--;
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    if(str[0] == '\n')
    {
        printf("Input cannot be empty.\n");
        return 0;
    }

    printf("\nWord count: %d\n", countWords(str));
    printf("Vowel count: %d\n", countVowels(str));
    printf("Consonant count: %d\n", countConsonants(str));

    if(isPalindrome(str))
        printf("It is a palindrome\n");
    else
        printf("It is NOT a palindrome\n");

    return 0;
}
