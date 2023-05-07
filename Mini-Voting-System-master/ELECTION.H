#include<stdio.h>
int Amoylig=0, BNP=0, NP=0, PP=0;
void electionResult()
{
    int wonByVote;
    if (Amoylig > BNP && Amoylig > NP && Amoylig > PP)
    {
        printf("\n***Amoylig won the election***\n\n");
        printf("Total vote of Amoylig : %d\n",Amoylig);
        wonByVote=Amoylig-BNP;
        printf("Amoylig won by %d votes to BNP\n",wonByVote);
        wonByVote=Amoylig-NP;
        printf("Amoylig won by %d votes to NP\n",wonByVote);
        wonByVote=Amoylig-PP;
        printf("Amoylig won by %d votes to PP\n",wonByVote);
    }
    else if (BNP > NP && BNP > PP)
    {
        printf("\n***BNP won the election***\n\n");
        printf("Total vote of BNP : %d\n",BNP);
        wonByVote=BNP-Amoylig;
        printf("BNP won by %d votes to Amoylig\n",wonByVote);
        wonByVote=BNP-NP;
        printf("BNP won by %d votes to NP\n",wonByVote);
        wonByVote=BNP-PP;
        printf("BNP won by %d votes to PP\n",wonByVote);
    }
    else if (NP > PP)
    {
        printf("\n***NP won the election***\n\n");
        printf("Total vote of NP : %d\n",NP);
        wonByVote=NP-BNP;
        printf("NP won by %d votes to BNP\n",wonByVote);
        wonByVote=NP-Amoylig;
        printf("NP won by %d votes to Amoylig\n",wonByVote);
        wonByVote=NP-PP;
        printf("NP won by %d votes to PP\n",wonByVote);
    }
    else if(Amoylig == BNP && Amoylig == NP && Amoylig == PP)
    {
        printf("\nNo one won the election\n\n");
        printf("            Amoylig---BNP---NP---PP\n");
        printf("Total Vote   %d       %d        %d     %d\n",Amoylig,BNP,NP,PP);
    }
    else
    {
        printf("\n***PP won the election***\n\n");
        printf("Total vote of PP : %d\n",PP);
        wonByVote=PP-BNP;
        printf("PP won by %d votes to BNP\n",wonByVote);
        wonByVote=PP-NP;
        printf("PP won by %d votes to NP\n",wonByVote);
        wonByVote=PP-Amoylig;
        printf("PP won by %d votes to Amoylig\n",wonByVote);
    }
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        Amoylig+=1;
        break;
    case 2:
        BNP+=1;
        break;
    case 3:
        NP+=1;
        break;
    case 4:
        PP+=1;
        break;
    }
}

void main()
{
    int choose;
    
    
        printf("\n*********Welcome to the simple voting system project for (BD)*********\n\n");
        printf("                         MP election                        \n\n");
        printf("*************************************************************\n");
        printf("|           1.Amoylig             |          2.BNP         |\n");
        printf("*************************************************************\n");
        printf("|           3.NP             |          4.PP              |\n");
        printf("*************************************************************\n\n");
    do
    {    
        printf("Press 1 to vote Amoylig\n");
        printf("Press 2 to vote BNP\n");
        printf("Press 3 to vote NP\n");
        printf("Press 4 to vote PP\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();
        }else
        {
            calculateVote(choose);            
        } 
        printf("\n");
    } while (choose != 5);
}