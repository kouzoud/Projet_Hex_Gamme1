#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <time.h>
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define BLUE    "\033[34m"
#define YELLOW    "\033[33m"
#define  Magenta  "\033[35m"
void hex(char m[9][9]){
    system("color 05");
printf("      \n                    WELCOME !  \n  \n");
printf("     %sA    %sB    %sC    %sD    %sE    %sF    %sG    %sH    %sI      \n",YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW);
printf("    %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\    \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf(" 1| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 1\n ",m[0][0],BLUE,m[0][1],RED,m[0][2],BLUE,m[0][3],RED,m[0][4],BLUE,m[0][5],RED,m[0][6],BLUE,m[0][7],RED,m[0][8]);
printf("   %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /      ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("   \n       %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\    \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("    2| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 2\n ",m[1][0],BLUE,m[1][1],RED,m[1][2],BLUE,m[1][3],RED,m[1][4],BLUE,m[1][5],RED,m[1][6],BLUE,m[1][7],RED,m[1][8]);
printf("      %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("         %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("       3| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 3\n ",m[2][0],BLUE,m[2][1],RED,m[2][2],BLUE,m[2][3],RED,m[2][4],BLUE,m[2][5],RED,m[2][6],BLUE,m[2][7],RED,m[2][8]);
printf("         %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("            %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("          4| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 4\n ",m[3][0],BLUE,m[3][1],RED,m[3][2],BLUE,m[3][3],RED,m[3][4],BLUE,m[3][5],RED,m[3][6],BLUE,m[3][7],RED,m[3][8]);
printf("            %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("               %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\    \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("             5| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 5\n ",m[4][0],BLUE,m[4][1],RED,m[4][2],BLUE,m[4][3],RED,m[4][4],BLUE,m[4][5],RED,m[4][6],BLUE,m[4][7],RED,m[4][8]);
printf("               %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                6| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 6\n ",m[5][0],BLUE,m[5][1],RED,m[5][2],BLUE,m[5][3],RED,m[5][4],BLUE,m[5][5],RED,m[5][6],BLUE,m[5][7],RED,m[5][8]);
printf("                  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                     %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                   7| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 7\n ",m[6][0],BLUE,m[6][1],RED,m[6][2],BLUE,m[6][3],RED,m[6][4],BLUE,m[6][5],RED,m[6][6],BLUE,m[6][7],RED,m[6][8]);
printf("                     %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /   \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                        %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                      8| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 8\n ",m[7][0],BLUE,m[7][1],RED,m[7][2],BLUE,m[7][3],RED,m[7][4],BLUE,m[7][5],RED,m[7][6],BLUE,m[7][7],RED,m[7][8]);
printf("                        %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                           %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\  %s/ \\     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                         9| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c |%s| %c | 9\n ",m[8][0],BLUE,m[8][1],RED,m[8][2],BLUE,m[8][3],RED,m[8][4],BLUE,m[8][5],RED,m[8][6],BLUE,m[8][7],RED,m[8][8]);
printf("                           %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /  %s\\ /     \n ",RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED);
printf("                            %sA    %sB    %sC    %sD    %sE    %sF    %sG    %sH    %sI      ",YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW,YELLOW);
}


int chek_rowB(char m[9][9]) {

    int cmp=0;
        for (int j = 0; j < 9; j++){
        cmp=0;
        for (int i = 0; i < 9; i++) {
        if (m[j][i] == 'B') {
        cmp++;
        }
    }if(cmp==9){break;}
        } return cmp == 9;
}


int chek_linB(char m[9][9]) {

    int cmp=0;
    for (int j = 0; j < 9; j++){
        cmp=0;
        for (int i = 0; i < 9; i++) {
        if (m[i][j] == 'B') {
            cmp++;
        }
    } if(cmp==9){break;}

    } return cmp == 9;

}


int chek_rowN(char m[9][9]) {

    int cmp = 0;
    for (int j = 0; j < 9; j++){
            cmp = 0;
        for (int i = 0; i < 9; i++) {
        if (m[j][i] == 'N') {
            cmp++;
        }
    } if(cmp==9){break;}

    } return cmp == 9;
}


int chek_linN(char m[9][9]) {

    int cmp = 0;
    for (int j = 0; j < 9; j++){
        cmp = 0;
        for (int i = 0; i < 9; i++) {
        if (m[i][j] == 'N') {
            cmp++;
        }
    } if(cmp==9){break;}
    } return cmp == 9;
}


int chek_diagB(char m[9][9]) {
    int cmp = 0;
    for (int i = 0; i < 9; i++) {
        if (m[i][i] == 'B') {
            cmp++;
        }
    }
    return cmp == 9;
}

int chek_diagN(char m[9][9]) {
    int cmp = 0;
    for (int i = 0; i < 9; i++) {
        if (m[i][i] == 'N') {
            cmp++;
        }
    }
    return cmp == 9;
}

int chek_sec_diagN(char m[9][9]) {
    int cmp = 0;
    for (int i = 0; i < 9; i++) {
        if (m[i][8 - i] == 'N') {
            cmp++;
        }
    }
    return cmp == 9;
}

int chek_sec_diagB(char m[9][9]) {
    int cmp = 0;
    for (int i = 0; i < 9; i++) {
        if (m[i][8 - i] == 'B') {
            cmp++;
        }
    }
    return cmp == 9;
}
void actualiser(int n){
    sleep(n);
    system("cls");
}
void hex_fire(){

printf("                                                %s    )        )  \n",BLUE);
printf("                                                 %s( /(     ( /(  \n",RED);
printf("                                                 )\\())(   )\\()) \n");
printf("                                                ((_)\\ )\\ ((_)\\  \n");
printf("                                                 %s_((_|(_)__((_) \n",YELLOW);
printf("                                                %s| || | __\\ \\/ / \n",GREEN);
printf("                                                | __ | _| >  < \n");
printf("                                                |_||_|___/_/\\_\\\n");


}
void affichage(){
    printf("%s-----------------------------------------------%s_    _       %s______        %s__      __%s------------------   \n",YELLOW,RED,GREEN,BLUE,YELLOW);
    printf("%s----------------------------------------------%s| |  | |     %s| |____|       %s\\ \\    / /%s----------------                    \n",YELLOW,RED,GREEN,BLUE,YELLOW);
    printf("----------------------------------------------%s| |  | |     %s| |             %s\\ \\  / /%s-------------------          \n",RED,GREEN,BLUE,YELLOW);
    printf("----------------------------------------------%s|_|__|_|     %s| |____          %s\\ \\/ /%s--------------------                 \n",RED,GREEN,BLUE,YELLOW);
    printf("----------------------------------------------%s|_|__|_|     %s| |____|         %s/ /\\ \\%s--------------------                  \n ",RED,GREEN,BLUE,YELLOW);
    printf("---------------------------------------------%s| |  | |     %s| |             %s/ /  \\ \\%s--------------------            \n",RED,GREEN,BLUE,YELLOW);
    printf("----------------------------------------------%s| |  | |     %s| |____        %s/ /    \\ \\%s------------------                   \n",RED,GREEN,BLUE,YELLOW);
    printf("----------------------------------------------%s|_|  |_|     %s|______|      %s/_/      \\_\\%s-----------------                     \n",RED,GREEN,BLUE,YELLOW);





}

char MODE_IA_1(char m[9][9]){
      int number_PL,number_IA;
      int k=0;
      char Letter_IA,Letter_PL;
      char name_player[20];
      printf("%s                                           ~~~~~~~~~~~~~~~~~~~~~~~~~~",GREEN);
      printf("\n                                           %s|| enter your name :      ||\n",YELLOW);
      printf("%s                                           ~~~~~~~~~~~~~~~~~~~~~~~~~~%s\n",GREEN,RESET);
      printf(" %s                                                      ",RED);scanf("%s",&name_player);


         while(k<81){

            hajar:
          srand(time(NULL));
            number_IA=rand()%10;
            Letter_IA='A' + rand() % 9;
            Letter_IA=Letter_IA-'A';
            if((m[number_IA-1][Letter_IA]=='B')||(m[number_IA-1][Letter_IA]=='N')){ goto hajar;}

            m[number_IA-1][Letter_IA]='N';
            printf("\nAI's Move:\n");
            hex(m);
            if (chek_rowN(m) || chek_linN(m)||chek_diagN(m)||chek_sec_diagN(m)) {
            printf("\nIA wins!\n");
            break;}

        kouzoud:
        printf("\n %sPlayer %s 's turn to play :\n ",GREEN,name_player);
        printf("%s enter the letter\n",YELLOW);
        scanf(" %c", &Letter_PL);
        printf("%s enter the number\n",YELLOW);
        scanf(" %d",&number_PL);
        if(number_PL==0||Letter_PL=='Z'){printf("%sEND OF GAME!%s ",RED,RESET);exit(0);}
        if ((number_PL < 1 || number_PL > 9)||(Letter_PL<'A'||Letter_PL>'I')) {
            printf("%s Invalid input. Please enter valid values between %s 1 and 9,%s and letters between %s A and I\n",YELLOW,RED,YELLOW,RED);
            goto kouzoud;
            }
            Letter_PL = Letter_PL - 'A';
            if((m[number_PL-1][Letter_PL]=='B')||(m[number_PL-1][Letter_PL]=='N')){printf("%s is pline",RED);  goto kouzoud;}
            m[number_PL-1][Letter_PL]='B';
            hex(m);
            if (chek_rowB(m) || chek_linB(m)||chek_diagB(m)||chek_sec_diagB(m)) {
            printf("\n %s congratulation %s %s %s you are the winner!\n%s",RED,GREEN,name_player,RED,RESET);
            break;}



k++;

actualiser(0);
    }


return 0;
}
char MODE_TWO_PLAYERS(char m[9][9]){
int x=0;
srand(time(NULL));
int number_player2,number_player1;
int random_start= rand() % 2;
char letter_player1,letter_player2;
char name_player1[20];
char name_player2[20];
printf("                                            %s ---------------------\n",GREEN);
printf("                                            %s name of first player: \n",YELLOW);
printf("                                            %s ---------------------\n",GREEN);
printf("                                                        ");
scanf(" %s",&name_player1);
printf("                                            %s *********************\n",Magenta);
printf("                                            %s ---------------------\n",GREEN);
printf("                                            %s name of second player: \n",YELLOW);
printf("                                            %s ---------------------\n",GREEN);
printf("                                                       ");
scanf(" %s",&name_player2);
//hex(m);
 if (random_start == 0) {
        printf("\n%s goes first!\n", name_player1);
    } else {
        printf("\n%s goes first!\n", name_player2);
    }
        while(x<81){
        hex(m);
        if (random_start == 0){
            hajar:
        printf("\n %s Player %s 's turn to play :\n ",GREEN,name_player1);
        printf("%s Enter the letter (A-I):\n",YELLOW);
        scanf(" %s", &letter_player1);
        printf("%s Enter the number (1-9):\n",YELLOW);
        scanf(" %d",&number_player1);
        if(number_player1==0||letter_player1=='Z'){printf("%sEND OF GAME!%s ",RED,RESET);exit(0);}
        if ((number_player1 < 1 || number_player1 > 9)||(letter_player1<'A' || letter_player1>'I')) {
            printf("%s Invalid input. Please enter valid values between %s 1 and 9,%s and letters between %s A and I\n",YELLOW,RED,YELLOW,RED);
            goto hajar;

            }
            letter_player1 = letter_player1 - 'A';
            if((m[number_player1-1][letter_player1]=='N')||(m[number_player1-1][letter_player1]=='B')){printf("is pline");goto hajar;}
            m[number_player1-1][letter_player1]='N';
            //hex(m);
            if (chek_rowN(m) || chek_linN(m)||chek_diagN(m)||chek_sec_diagN(m)) {
            printf("\n %s congratulation %s %s  %s you are the winner!\n%s",RED,GREEN,name_player1,RED,RESET);
            break;}
        }

         else{
        kouzoud:
        printf("\n %s Player %s's turn to play\n",GREEN,name_player2);
        printf("%s Enter the letter (A-I):\n",YELLOW);
        scanf(" %c", &letter_player2);
        printf("%s Enter the number (1-9):\n",YELLOW);
        scanf(" %d",&number_player2);
        if(number_player2==0||letter_player2=='Z'){exit(0);}
        if ((number_player2 < 1 || number_player2 > 9)||(letter_player2<'A' || letter_player2>'I')) {
            printf("%s Invalid input. Please enter valid values between %s 1 and 9,%s and letters between %s A and I\n",YELLOW,RED,YELLOW,RED);
            goto kouzoud;
            }
            letter_player2 = letter_player2 - 'A';
            if((m[number_player2-1][letter_player2]=='B')||(m[number_player2-1][letter_player2]=='N')){printf("is pline");  goto kouzoud;}
            m[number_player2-1][letter_player2]='B';
            if (chek_rowB(m) || chek_linB(m)||chek_diagB(m)||chek_sec_diagB(m)) {
            printf("\n %s congratulation %s %s  %s you are the winner!\n%s",RED,GREEN,name_player2,RED,RESET);
            break;}
         }


x++;
random_start = (random_start + 1) % 2;
actualiser(0);
}

}



void menu(){
    system("color 02");
    char m[9][9];
    char ok;
    for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){m[i][j]=' ';}}
     int i,j,n;
     do{
     affichage();
     printf("     \n\n\n \n                                              %s__________________________________________________\n",RED);
     printf("                                              %s\\______|_________|________|_______|________|_____/\n",RED);
     printf("                                               %s\\ \\            %s menu:                          %s\\ \\ \n",GREEN,BLUE,GREEN);
     printf("                                                %s\\ \\           %s ~~~~~                           %s\\ \\\n",GREEN,BLUE,GREEN);
     printf("                                                 %s\\ \\          %s  1.Play                          %s\\ \\\n",GREEN,BLUE,GREEN);
     printf("                                                  %s\\ \\          %s 2.rules of game                  %s\\ \\\n",GREEN,BLUE,GREEN);
     printf("                                                   %s\\ \\         %s 3.exit                            %s\\ \\\n",GREEN,BLUE,GREEN);
     printf("                                                    %s\\ \\                                            \\ \\\n",GREEN);
     printf("                                                     %s\\ \\                                            \\ \\\n",GREEN);
     printf("                                                      %s\\ \\                                            \\ \\\n",GREEN);
     printf("                                                       %s~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n",RED);
     printf("                                                        \\________|__________|_________|________|_______/\n");
     printf("                                                                                             ");scanf("%d",&i);
     actualiser(0);
     }while((i!=1)&&(i!=2)&&(i!=3));
     actualiser(1);

     if(i==1){

            do{printf("\n\n");
                  hex_fire();
        printf("\n\n");
        printf("                             %s||%s***************************************************%s||\n",GREEN,BLUE,GREEN);
        printf("                             %s||                    %sChoose a game mode :           %s||          \n",GREEN,RED,GREEN);
        printf("                             %s||%s~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~%s||\n",GREEN,BLUE,GREEN);
        printf("                             %s||                    %s 1. Mode IA                    %s||\n",GREEN,RED,GREEN);
        printf("                             %s||                    %s 2. Mode tow players           %s||  \n",GREEN,RED,GREEN);
        printf("                             %s||%s---------------------------------------------------%s||\n",GREEN,BLUE,GREEN);
        printf("                                   \t\t\t");scanf("%d",&j);
        actualiser(0);
            }while((j!=1)&&(j!=2));
     actualiser(1);
        if(j==1){
              do{printf("\n\n");
                   hex_fire();
                printf("\n\n");
                printf("                              %s//%s*********************************************************%s//\n",RED,BLUE,RED);
                printf("                             %s//%s          You have chosen the Mode IA.                   %s//\n",RED,GREEN,RED);
                printf("                            %s//%s---------------------------------------------------------%s// \n",RED,GREEN,RED);
                printf("                           %s//%s           tChoose the difficulty level :                %s//\n",RED,GREEN,RED);
                printf("                          %s//%s~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~%s//\n",RED,GREEN,RED);
                printf("                         %s//%s             1. Normal AI mode                           %s//\n",RED,BLUE,RED);
                printf("                        %s//%s              2. Advanced AI mode                        %s//\n",RED,BLUE,RED);
                printf("                                   \t\t\t");scanf("%d",&n);
                actualiser(0);
              }while((n!=1)&&(n!=2));
              actualiser(1);
                if(n==1){
                printf("\n \n ");
                hex_fire();
                printf("\n \n ");
                printf("                                         %s ~~~~~~~~~~~~~~~~~~~~~~~~~~\n",GREEN);
                printf("                                         %s ||Normal AI mode apply:   ||\n",YELLOW);
                printf("                                          %s ~~~~~~~~~~~~~~~~~~~~~~~~~~\n",GREEN);
                printf("                                           %s**************************\n",BLUE);
                MODE_IA_1(m);}

                else if(n==2){
                printf("\n\n");
                hex_fire();
                printf("\n\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("Advanced AI mode apply: \n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
                }
        else if(j==2){
        printf("\n\n");
        hex_fire();
        printf("\n\n");
        printf("                                             %s~~~~~~~~~~~~~~~~~~~~~\n",RED);
        printf("                                            %s Two player mode apply: \n",YELLOW);
        printf("                                           %s  ~~~~~~~~~~~~~~~~~~~~~\n",RED);
        printf("                                            %s *********************\n",Magenta);
        MODE_TWO_PLAYERS(m);}
     }
     else if(i==2){
    printf("%s Here are the basic rules of the Hex game:\n\n",Magenta);
    printf("%s #Objective of the game: The first player to create a continuous connection between their two opposite sides of the board wins the game.\n\n",YELLOW);
    printf("#Board: The board is composed of hexagonal cells. The number of cells can vary, but a common board is composed of 9x9 cells.\n\n");
    printf("#Turn of play: Players take turns. Each player places a stone on an empty cell of the board during their turn.\n\n");
    printf("#Connection: Players attempt to create a continuous connection between their opposite sides of the board by placing their stones. \nA connection can be made vertically, horizontally, or diagonally, but it must remain continuous and uninterrupted.\n\n");
    printf("#Blocking: Players can block their opponent's connection attempts by placing their stones strategically.\n\n");
    printf("#End of the game: The game ends as soon as a player succeeds in creating a connection between their opposite sides. The game stops \nimmediately, and that player is declared the winner.\n\n");
    printf("#Hex is a game that is simple in appearance, but it can be complex strategically. The Hex theorem guarantees that there \nis always a winning strategy for one of the two players if both players play perfectly. \nHowever, the game remains interesting and tactical even for less experienced players.\n");
    printf("# THE letters always capitals between A and I and numbers between 1 and 9 \n");
    printf("\n#NB:you can exit of game by enter 0 or Z. ");
    printf("\n%s--------------------------\n",YELLOW);
    printf("%s if you read it click OK!\n",RED);
    printf("%s--------------------------\n",YELLOW);
    scanf("%s",&ok);
    actualiser(1);
   menu();

     }
     else if (i == 3) {
        printf("%s\n Exiting the program.\n\n%s",RED,RESET);
        exit(0);
    }

 }



int main(){

menu();


}
