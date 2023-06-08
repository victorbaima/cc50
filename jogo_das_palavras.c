#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1,
                3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char alfa_min[26] = {'a'};
char alfa_mai[26] = {'A'};

int compute_score(string word);

int main(void)
{
    
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    printf("Pontos do Player 1: %i\n", score1);
    printf("Pontos do Player 2: %i\n", score2);
    
    if(score1 > score2)
    {
        printf("\n\t\tO PLAYER 1 É O VENCEDOR!\n");
    }
    if(score1 < score2)
    {
        printf("\n\t\tO PLAYER 2 É O VENCEDOR!\n");
    }
    if(score1 == score2)
    {
        printf("O jogo empatou, tente novamente!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    
    for(int i = 0; i < strlen(word); i++)
    {
        for(int j = 0; j < 26; j++)
        {
            alfa_min[j] = alfa_min[0] + j;
            alfa_mai[j] = alfa_mai[0] + j;
        
            if(word[i] == alfa_min[j] || word[i] == alfa_mai[j])
            {
                score += POINTS[j];
            }
            else
            {
                score += 0;
            }
        }
    }
    return score;
}