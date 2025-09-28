#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int calculate_letters(string text);
int calculate_words(string text);
int calculate_sentences(string text);
int main(void)
{
    string text = get_string("Text: ");

    int letters = calculate_letters(text);
    int words = calculate_words(text);
    int sentences = calculate_sentences(text);

    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round (index);

    if (grade <1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Garde 16+ \n");
    }
    else
    {
        printf ("Grade %i\n" ,grade);
    }
}
int calculate_letters(string text)
{
 int letters = 0;
 for (int i=0; text[i] != '\0'; i++)
 {
    if(isalpha(text[i]))
    {
        letters++;
    }
 }
 return letters;
}
int calculate_words(string text)
{
    int words = 1;
    for (int i=0; text[i] != '\0'; i++)
    {
        if(text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}
int calculate_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentences++;
        }

    }
    return sentences;
}

