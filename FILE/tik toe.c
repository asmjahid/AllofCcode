#include<stdio.h>
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();

void main()
 {
 int player=1,i,choice;
 char mark;
 char player1[50],player2[50];
 printf("\n\n\tTic Tac Toe\n\n");
 printf("Player 1 (X) - Player 2 (O)\n\n");
 printf("\nPlayer 1, Please enter your name : ");
 gets(player1);
 printf("\nPlayer 2, Please enter your name : ");
 gets(player2);
 do
 {
 board();
 player=(player%2)?1:2;
 if(player==1)
 printf("%s your turn! select move : ",player1);
 else
 printf("%s your turn! select move : ",player2);
 scanf("%d",&choice);
 mark=(player==1)?'X':'O';
 if(choice==1 && square[1]=='1')
 square[1]=mark;
 else if(choice==2 && square[2]=='2')
 square[2]=mark;
 else if(choice==3 && square[3]=='3')
 square[3]=mark;
 else if(choice==4 && square[4]=='4')
 square[4]=mark;
 else if(choice==5 && square[5]=='5')
 square[5]=mark;
 else if(choice==6 && square[6]=='6')
 square[6]=mark;
 else if(choice==7 && square[7]=='7')
 square[7]=mark;
 else if(choice==8 && square[8]=='8')
 square[8]=mark;
 else if(choice==9 && square[9]=='9')
 square[9]=mark;
 else
 {
 printf("\n\tInvalid Move\n");
 player--;
 }
 i=checkwin();
 player++;
 }
 while(i==-1);
 board();
 if(i==1)
 {
 if(player%2==1)
 printf("==> || %s Wins || <==",player2);
 else
 printf("==> || %s Wins || <==",player1);
 }
 else
 printf("==> || Game Draw || <==");
 getch();
 }

/********************************
 FUNCTION TO RETURN GAME STATUS
 *********************************/
 // 1 for Game is Over with Result
 // 0 for Game is Draw
 // -1 for Game is in Progress

int checkwin()
 {
 if(square[1]==square[2] && square[2]==square[3])
 return 1;
 else if(square[4]==square[5] && square[5]==square[6])
 return 1;
 else if(square[7]==square[8] && square[8]==square[9])
 return 1;
 else if(square[1]==square[4] && square[4]==square[7])
 return 1;
 else if(square[2]==square[5] && square[5]==square[8])
 return 1;
 else if(square[3]==square[6] && square[6]==square[9])
 return 1;
 else if(square[1]==square[5] && square[5]==square[9])
 return 1;
 else if(square[3]==square[5] && square[5]==square[7])
 return 1;
 else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4'
 && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
 return 0;
 else
 return -1;
 }

/*********************************************************
 FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
 **********************************************************/

void board()
 {
 printf("\n");
 printf("\t %c | %c | %c\n",square[1],square[2],square[3]);
 printf("\t___|___|___\n");
 printf("\n");
 printf("\t %c | %c | %c\n",square[4],square[5],square[6]);
 printf("\t___|___|___\n");
 printf("\n");
 printf("\t %c | %c | %c\n",square[7],square[8],square[9]);
 printf("\t | | \n");
 printf("\n");
 }
