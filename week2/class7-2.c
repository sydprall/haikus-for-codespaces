#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice()
{   
    return (rand()%3)+1;
}

int decideWinner(int playerChoice, int computerChoice)
{
    if(playerChoice == computerChoice)
        return 0;

    if((playerChoice ==1 && computerChoice ==3) || (playerChoice ==2 && computerChoice ==1) || (playerChoice ==3 && computerChoice ==2))
        return 1;

    return -1;
}

void choiceDecrypt(int ch)
{
    if(ch==1)
        printf(" Rock!");
    else if(ch==2)
        printf(" Paper!");
    else if(ch==3)
        printf(" Scissors!");
    else
        printf(" Invalid choice");
}

int main()
{
    int userCh, rch, userWin=0, compWin=0, ties=0;

    do
    {
        printf(" How many rounds? (5 or 10)\n");
        scanf("%d", &rch);

    } while (rch !=5 && rch !=10);

    for(int i=0;i<rch;i++)
    {
        printf("1. Rock 2. Paper 3. Scissors\n");
        printf("Enter users choice");
        scanf("%d",&userCh);

        int comCh = getComputerChoice();

        int result = decideWinner(userCh,comCh);

        printf("User plays");
        choiceDecrypt(userCh);

        printf("Computer plays");
        choiceDecrypt(comCh);
        printf("\n");

        
        if(result==0)
        {
            printf("It's a tie.\n");
            ties++;
        }

        else if(result==1)
        {
            printf("User Wins!\n");
            userWin++;
        }

        else
        {
            printf("Computer Wins!\n");
            compWin++;
        }
printf("=== Final Results ===\n");
printf("You: %d  Computer: %d  Ties: %d", userWin, compWin, ties);

if (userWin>compWin)
{
    printf("\n User wins the match!");
}

else if(compWin>userWin)
{
    printf("\n Computer wins the match!");
}

else
{
    printf("\nIts a Tie!");
}
    
}