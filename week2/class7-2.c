#include <stdio.h>
#include <stdlb.h>
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

int main()
{
    int userCh, rch;

    do
    {
        printf(" How many rounds? (5 or 10)\n");
        scanf("%d", &rch);

    } while (rch !=5 && rch !=10)

    for (i=0;i<rch;i++)
    {
        printf("1. Rock 2. Paper 3. Scissors\n");
        printf("Enter users choice");
        scanf("%d",&userCh);

        int comCh = getComputerChoice();

        int result = decideWinner(userCh,comCh);
    }
    
}