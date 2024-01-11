#include <stdio.h>
#include <string.h>
#include <ctype.h>

int print_sum(char guess[50]);

int marks[26] = {1,5,3,8,5,8,5,3,8,5,9,5,6,9,8,7,4,2,7,4,9,6,4,3,6,8};

int main(void)
{
    char person1[50], person2[50];
    printf("Enter guess: ");
    scanf("%s" ,&person1);
    printf("Enter guess: ");
    scanf("%s" ,&person2);

    int score1 = print_sum(person1);
    int score2 = print_sum(person2);

    if (score1 > score2)
    {
        printf("Person 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Person 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int print_sum(char word[50])
{
    int letter_index;
    int score = 0;
    for (int i=0; i<strlen(word); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            letter_index = word[i] - 'A';
        }
        else 
        {
            letter_index = word[i] - 'a';
        }
        score += marks[letter_index];
    }
    return score;
}

