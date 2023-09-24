#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>


#define Y "\e[43m"
#define RED "\e[41m"
#define B "\e[0;30m"
#define W "\e[0;37m"
#define RESET "\e[0m"

char bigData [8][8][2];
bool gameMode = true;





/* 
THIS IS THE CODE TO PRINT ALL THE ELEMENTS ON TO THE SCREEN 
**********************************************************
*/
void pawn (int row , int sum , char player)
{

int i , j;
int block = 219;
i = row;
for (j =  0 ; j < 15 ; j++)
{
if ((i == 0) || (i == 6))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}	
else if ((j == 0)  || (j == 1) || (j == 2) || (j == 3)|| (j == 4)|| (j == 10)|| (j == 11)|| (j == 12)|| (j == 13)|| (j == 14))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}

// start skewing
else if (i == 4 + 1)
{
if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);
}
else if ((i == 3 + 1) && ( (j == 2 + 5) || (j == 1 + 5) || (j == 3 + 5)))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else if ((i == 2 + 1) && (j == 2 + 5))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
}
//*************************

void horse(int row , int sum, char player )
{
int i , j;
int block = 219;
i = row;
for (j =  0 ; j < 15 ; j++)
{
if ((i == 0) || (i == 6))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}	
else if ((j == 0)  || (j == 1) || (j == 2) || (j == 3)|| (j == 4)|| (j == 10)|| (j == 11)|| (j == 12)|| (j == 13)|| (j == 14))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
else if (i == 5)
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else if (((i == 4) || (i == 3)) && ((j == 7)|| (j == 6)|| (j == 8)))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else if ((i == 2) && (j != 9))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else if ((i == 1) &&( (j == 8) || (j == 6)))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
}

// ****************************
void king(int row , int sum, char player )
{
int i , j;
i = row;
int block = 219;

for (j =  0 ; j < 15 ; j++)
{

if ((i == 0) || (i == 6))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}	
else if ((j == 0)  || (j == 1) || (j == 2) || (j == 3)|| (j == 4)|| (j == 10)|| (j == 11)|| (j == 12)|| (j == 13)|| (j == 14))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
else if (i == 5)
{
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
}
else if ((i == 1) || (i == 3))
{
if (j == 7)
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
else if ((i == 2) || (i == 4))
{
if ((j== 6) || (j == 7) || (j == 8))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
}


}

// ****************************

void rook(int row , int sum, char player )
{
int i , j;
int block = 219;
i = row;
for (j =  0 ; j < 15 ; j++)
{
if ((i == 0) || (i == 6))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}	
else if ((j == 0)  || (j == 1) || (j == 2) || (j == 3)|| (j == 4)|| (j == 10)|| (j == 11)|| (j == 12)|| (j == 13)|| (j == 14))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
else if (i == 2)
{ 
if ((j == 6) || (j == 7) | (j == 8))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
else if (i == 5)
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else if ((i == 3) || (i == 4))
{
if ((j == 6) || (j == 7) || (j == 8))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
else {
if (j % 2 != 0)
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
}
}

// ****************************
void queen (int row , int sum, char player )
{
int i , j;
int block  =219;
i = row;

for (j = 0 ;j< 15 ; j++)
{
if ((i == 0) || (i == 6))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}	
else if ((j == 0)  || (j == 1) || (j == 2) || (j == 3)|| (j == 4)|| (j == 10)|| (j == 11)|| (j == 12)|| (j == 13)|| (j == 14))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
else if ((i == 2) || (i == 5))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else if ((i == 1) && (j % 2 != 0))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else if ((i == 3) && (j == 7))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else if ((i == 4) && ((j == 6) || (j == 7) || (j == 8)))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if ((sum) % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
}

// ****************************

void bishop(int row , int sum , char player)
{

int i , j;
int block = 219;
i = row;
for (j = 0 ;j< 15 ; j++)
{
if ((i == 0) || (i == 6))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}	
else if ((j == 0)  || (j == 1) || (j == 2) || (j == 3)|| (j == 4)|| (j == 10)|| (j == 11)|| (j == 12)|| (j == 13)|| (j == 14))
{
if (sum % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
else if ((i == 1) && (j == 7))
{
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
}
else if ((i == 2) || (i == 3) || (i == 4))
{
if ((j == 7) || (j ==6 ) || ( j == 8))
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if ((sum) % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
else if (i == 5) 
{if (player == 'w')
printf("%c", block);
else
printf(B"%c"RESET , block);}
else
{
if ((sum) % 2 == 0)
printf(Y" "RESET);
else
printf(RED" "RESET);
}
}
}
// ****************************

void space(int sum)
{
int i ;
for (i = 0 ; i< 15; i++)
{
if (sum %2 == 0)
printf (Y" "RESET);
else
printf (RED" "RESET);

}


}
// ****************************

void render()
{
int i , j;
int rowCounter;
int element;
int down = 25;
int right = 26;

//****first we print the upper index banner
for (i = 0 ; i <5 ; i++)
printf(" ");
printf("i%c " , down);
printf(" j%c" , right);
for (i = 0 ; i < 11 ; i++)
printf(" ");
for (i = 0 ; i < 8 ; i++)
{
printf("%d" , i);
for (j = 0 ; j< 14 ; j++)
printf(" ");
}
printf("\n");

//********************************


for (i = 0 ; i < 8 ; i++)
{
for (rowCounter  = 0 ; rowCounter < 7 ; rowCounter++)
{
printf("\n");

//****** first we print the left padding at the start of each row
for (j = 0 ; j < 15 ; j++)
{
if ((rowCounter == 4) && (j == 7))
printf("%d" , i);
else
printf(" ");
}
//**************************

for (j = 0 ; j < 8  ;j++)
{
switch(bigData[i][j][1])
{
case 'p':
{
pawn(rowCounter , (i+j) , bigData[i][j][0]);
break;
}
case 'h':
{
horse(rowCounter, (i+j) , bigData[i][j][0]);
break;
}
case 'i':
{
bishop(rowCounter, (i+j) , bigData[i][j][0]);
break;
}
case 'r':
{
rook(rowCounter, (i+j) , bigData[i][j][0]);
break;
}
case 'q':
{
queen(rowCounter , (i+j) , bigData[i][j][0]);
break;
}
case 'k':
{
king(rowCounter, (i+j) , bigData[i][j][0]);
break;
}
default:
{
space((i+j));
}
}
}
}
}
}
// ******************
void init()
{
int i , j;
for (i = 0; i < 8; i++)
{
for (j = 0 ; j < 8 ; j++)
{
// init colours
if ((i == 0) || (i == 1))
bigData[i][j][0] = 'b';
else if ((i == 6) || (i == 7))
bigData[i][j][0] = 'w';
else
bigData[i][j][0] = '0';

// init pawn
if ((i == 1) || (i == 6))
bigData[i][j][1] = 'p';

// init rooks
else if (((i == 0) || (i == 7)) && ((j == 0) || (j == 7)))
bigData[i][j][1] = 'r';

// init horse
else if (((i == 0) || (i == 7)) && ((j == 1) || (j == 6)))
bigData[i][j][1] = 'h';

// init bishop
else if (((i == 0) || (i == 7)) && ((j == 2) || (j == 5)))
bigData[i][j][1] = 'i';
else 
bigData[i][j][1] = '0';

// init queen 
bigData[0][3][1] = 'q';
bigData[7][3][1] = 'q';

// init king
bigData[0][4][1] = 'k';
bigData[7][4][1] = 'k';
}
}
}

// THIS IS THE START OF THE LOGIC FUNCTIONS 

bool pawnLogic(int pI, int pJ , int mI , int mJ, char buffer [])
{
if (buffer[0] == 'w')
{
if (((pI - 1) >= 0))
{
    if (bigData[pI-1][pJ][0] == '0')
        if ((mI == pI - 1) && (mJ == pJ)) return true;
    if (((pJ - 1) >= 0) && (bigData[pI-1][pJ-1][0] == 'b'))
        if ((mI == pI - 1) && (mJ == pJ - 1)) return true;
    if (((pJ + 1) <= 7) && (bigData[pI-1][pJ+1][0] == 'b'))
        if ((mI == pI - 1) && (mJ == pJ + 1)) return true;
        
}
if ((pI == 6) && (bigData[pI-2][pJ][0] == '0')) // this is only for the starting position
    if ((mI == pI - 2) && (mJ == pJ)) return true;
}
else // this means that we are dealing with a black pawn
{
if (((pI + 1) <= 7))
{
    if (bigData[pI+1][pJ][0] == '0')
        if ((mI == pI + 1) && (mJ == pJ)) return true;    
    if (((pJ - 1) >= 0) && (bigData[pI+1][pJ-1][0] == 'w'))
        if ((mI == pI + 1) && (mJ == pJ - 1)) return true;       
    if (((pJ + 1) <= 7) && (bigData[pI+1][pJ+1][0] == 'w'))
        if ((mI == pI + 1) && (mJ == pJ + 1)) return true;
}
if ((pI == 1) && (bigData[pI+2][pJ][0] == '0')) // this is only for the starting position
    if ((mI == pI + 2) && (mJ == pJ)) return true;
}
return false;
}

bool horseLogic(int pI, int pJ , int mI , int mJ , char buffer [])
{
if ((pI - 2) >= 0)
{
    if ((pJ + 1) <= 7)
    {
        if (buffer[0] != bigData[pI - 2][pJ + 1][0])
            if ((mI == pI - 2) && (mJ == pJ + 1)) return true;
    }
    if ((pJ - 1) >= 0)
    {
        if (buffer[0] != bigData[pI - 2][pJ - 1][0])
            if ((mI == pI - 2) && (mJ == pJ - 1)) return true;
    }
}
if ((pI + 2) <= 7)
{
    if ((pJ + 1) <= 7)
    {
        if (buffer[0] != bigData[pI + 2][pJ + 1][0])
            if ((mI == pI + 2) && (mJ == pJ + 1)) return true;
    }
    if ((pJ - 1) >= 0)
    {
        if (buffer[0] != bigData[pI + 2][pJ - 1][0])
            if ((mI == pI + 2) && (mJ == pJ - 1)) return true;
    }
}
if ((pJ - 2) >= 0)
{
    if ((pI + 1) <= 7)
    {
        if (buffer[0] != bigData[pI + 1][pJ - 2][0])
            if ((mI == pI + 1) && (mJ == pJ - 2)) return true;
    }
    if ((pI - 1) >= 0)
    {
        if (buffer[0] != bigData[pI - 1][pJ - 2][0])
            if ((mI == pI - 1) && (mJ == pJ - 2)) return true;
    }
}
if ((pJ + 2) <= 7)
{
    if ((pI + 1) <= 7)
    {
        if (buffer[0] != bigData[pI + 1][pJ + 2][0])
            if ((mI == pI + 1) && (mJ == pJ + 2)) return true;
    }
    if ((pI - 1) >= 0)
    {
        if (buffer[0] != bigData[pI - 1][pJ + 2][0])
            if ((mI == pI - 1) && (mJ == pJ + 2)) return true;
    }
}
return false;
}

bool bishopLogic(int pI, int pJ , int mI , int mJ , char buffer [])
{
int counterI , counterJ;
char element;
for (counterI = pI - 1 , counterJ = pJ + 1 ; counterI >= 0 && counterJ <=7 ; counterI-- , counterJ++)
{
    element = bigData[counterI][counterJ][0];
    if (element == '0'){
        if ((mI == counterI) && (mJ == counterJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    if ((mI == counterI) && (mJ == counterJ)) return true;     
    break;
    }   
}

for (counterI = pI - 1 , counterJ = pJ - 1 ; counterI >= 0 && counterJ >= 0 ; counterI-- , counterJ--)
{
    element = bigData[counterI][counterJ][0];
    if (element == '0')
        {if ((mI == counterI) && (mJ == counterJ)) return true;}

    else if (element == buffer[0])
    break;
    else
    {
    if ((mI == counterI) && (mJ == counterJ)) return true;
    break;
    }   
}
for (counterI = pI + 1 , counterJ = pJ + 1 ; counterI <= 7 && counterJ <=7 ; counterI++ , counterJ++)
{
    element = bigData[counterI][counterJ][0];
    if (element == '0'){
    if ((mI == counterI) && (mJ == counterJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    if ((mI == counterI) && (mJ == counterJ)) return true;
    break;
    }   
}
for (counterI = pI + 1 , counterJ = pJ - 1 ; counterI <= 7 && counterJ >= 0 ; counterI++ , counterJ--)
{
    element = bigData[counterI][counterJ][0];
    if (element == '0'){
    if ((mI == counterI) && (mJ == counterJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    if ((mI == counterI) && (mJ == counterJ)) return true;
    break;
    }   
}
return false;
}
bool rookLogic(int pI, int pJ , int mI , int mJ , char buffer [])
{
int counter;
char element;
for (counter = pI + 1 ; counter < 8 ; counter++)
{
    element = bigData[counter][pJ][0];
    if (element == '0')
    {if ((mI == counter) && (mJ == pJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    {if ((mI == counter) && (mJ == pJ)) return true;}
    break;
    }
}
for (counter = pI - 1 ; counter >= 0 ; counter--)
{
    element = bigData[counter][pJ][0];
    if (element == '0')
    {if ((mI == counter) && (mJ == pJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    {if ((mI == counter) && (mJ == pJ)) return true;}
    break;
    }
}
for (counter = pJ + 1 ; counter < 8 ; counter++)
{
    element = bigData[pI][counter][0];
    if (element == '0')
    {if ((mI == pI) && (mJ == counter)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    {if ((mI == pI) && (mJ == counter)) return true;}
    break;
    }
}
for (counter = pJ - 1 ; counter >= 0 ; counter--)
{
    element = bigData[pI][counter][0];
    if (element == '0')
    {if ((mI == pI) && (mJ == counter)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    {if ((mI == pI) && (mJ == counter)) return true;}
    break;
    }
}
return false;
}

bool queenLogic(int pI, int pJ , int mI , int mJ , char buffer [])
{
 // this is a combination of rook and bishop
char element;
int counter;
for (counter = pI + 1 ; counter < 8 ; counter++)
{
    element = bigData[counter][pJ][0];
    if (element == '0')
    {if ((mI == counter) && (mJ == pJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    {if ((mI == counter) && (mJ == pJ)) return true;}
    break;
    }

}
for (counter = pI - 1 ; counter >= 0 ; counter--)
{
    element = bigData[counter][pJ][0];
    if (element == '0')
    {if ((mI == counter) && (mJ == pJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    {if ((mI == counter) && (mJ == pJ)) return true;}
    break;
    }
}
for (counter = pJ + 1 ; counter < 8 ; counter++)
{
    element = bigData[pI][counter][0];
    if (element == '0')
    {if ((mI == pI) && (mJ == counter)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    {if ((mI == pI) && (mJ == counter)) return true;}
    break;
    }
}
for (counter = pJ - 1 ; counter >= 0 ; counter--)
{
    element = bigData[pI][counter][0];
    if (element == '0')
    {if ((mI == pI) && (mJ == counter)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    {if ((mI == pI) && (mJ == counter)) return true;}
    break;
    }
}

int counterI , counterJ;
for (counterI = pI - 1 , counterJ = pJ + 1 ; counterI >= 0 && counterJ <=7 ; counterI-- , counterJ++)
{
    element = bigData[counterI][counterJ][0];
    if (element == '0'){
        if ((mI == counterI) && (mJ == counterJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    if ((mI == counterI) && (mJ == counterJ)) return true;     
    break;
    }   
}

for (counterI = pI - 1 , counterJ = pJ - 1 ; counterI >= 0 && counterJ >= 0 ; counterI-- , counterJ--)
{
    element = bigData[counterI][counterJ][0];
    if (element == '0')
        {if ((mI == counterI) && (mJ == counterJ)) return true;}

    else if (element == buffer[0])
    break;
    else
    {
    if ((mI == counterI) && (mJ == counterJ)) return true;
    break;
    }   
}
for (counterI = pI + 1 , counterJ = pJ + 1 ; counterI <= 7 && counterJ <=7 ; counterI++ , counterJ++)
{
    element = bigData[counterI][counterJ][0];
    if (element == '0'){
    if ((mI == counterI) && (mJ == counterJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    if ((mI == counterI) && (mJ == counterJ)) return true;
    break;
    }   
}
for (counterI = pI + 1 , counterJ = pJ - 1 ; counterI <= 7 && counterJ >= 0 ; counterI++ , counterJ--)
{
    element = bigData[counterI][counterJ][0];
    if (element == '0'){
    if ((mI == counterI) && (mJ == counterJ)) return true;}
    else if (element == buffer[0])
    break;
    else
    {
    if ((mI == counterI) && (mJ == counterJ)) return true;
    break;
    }   
}
return false;
}

bool kingLogic(int pI, int pJ , int mI , int mJ , char buffer [])
{
if ((pI - 1) >= 0)
{
    if (buffer[0] != bigData[pI - 1][pJ][0])
    {if ((mI == pI - 1) && (mJ == pJ)) return true;}
    
            
    if (((pJ + 1) <= 7) && (buffer[0] != bigData[pI - 1][pJ + 1][0]))
            {if ((mI == pI - 1) && (mJ == pJ + 1)) return true;}
    if (((pJ - 1) >= 0) && (buffer[0] != bigData[pI - 1][pJ - 1][0]))
            {if ((mI == pI - 1) && (mJ == pJ - 1)) return true;}
}
if ((pI + 1) <= 7)
{
    if (buffer[0] != bigData[pI + 1][pJ][0])
           {if ((mI == pI + 1) && (mJ == pJ)) return true;}
    if (((pJ + 1) <= 7) && (buffer[0] != bigData[pI + 1][pJ + 1][0]))
            {if ((mI == pI + 1) && (mJ == pJ + 1)) return true;}
    if (((pJ - 1) >= 0) && (buffer[0] != bigData[pI + 1][pJ - 1][0]))
            {if ((mI == pI + 1) && (mJ == pJ - 1)) return true;}
}
if ((pJ + 1) <= 7)
    {if (buffer[0] != bigData[pI][pJ + 1][0])
           {if ((mI == pI) && (mJ == pJ + 1)) return true;}}
if ((pJ - 1) >= 0)
    {if (buffer[0] != bigData[pI][pJ - 1][0])
            {if ((mI == pI) && (mJ == pJ- 1)) return true;}}

return false;
}

// **************************************

bool destinationCheck (int pI, int pJ , int mI , int mJ  , char buffer[])
{
bool isValid = false;
switch (buffer[1])
{
case 'p':
{
isValid = pawnLogic(pI,  pJ ,  mI ,  mJ, buffer);
break;
}
case 'h':
{
isValid = horseLogic(pI,  pJ ,  mI ,  mJ, buffer);
break;
}
case 'i':
{
isValid = bishopLogic(pI,  pJ ,  mI ,  mJ, buffer);
break;
}
case 'r':
{
isValid = rookLogic(pI,  pJ ,  mI ,  mJ, buffer);
break;
}
case 'q':
{
isValid = queenLogic(pI,  pJ ,  mI ,  mJ, buffer);
break;
}
case 'k':
{
isValid = kingLogic(pI,  pJ ,  mI ,  mJ, buffer);
break;
}

}
return isValid;
}

// ******************************

void endCheck(FILE * fptr)
{
bool blackKingDead = true;
bool whiteKingDead = true;

//getting the time 
time_t tptr = time(NULL);
char * tstr = ctime(&tptr);
tstr[strlen(tstr) - 1] = '\0';


int i , j;
for (i = 0 ; i < 8 ; i++)
{
    for (j = 0 ; j < 8; j++)
    {
        if (bigData[i][j][1] == 'k')
        {
            if (bigData[i][j][0] == 'w')
                whiteKingDead = false;
            else
                blackKingDead = false;
        }
    }
}

if (blackKingDead)
{
    system("cls");
    render();
    printf("\n\n !!! WHITE HAS WON THE GAME !!!\n(The game history is saves locally as chessGameHistory.txt)");
    fprintf(fptr , "\n\n!!! WHITE HAS WON THE GAME !!!\n\n\nGame Ended -> %s" , tstr);
    gameMode = false;
}

if (whiteKingDead)
{
    system("cls");
    render();
    printf("\n\n !!! BLACK HAS WON THE GAME !!!\n(The game history is saves locally as chessGameHistory.txt)");
    fprintf(fptr , "\n\n!!! BLACK HAS WON THE GAME !!!\n\n\nGame Ended -> %s" , tstr);
    gameMode = false;
}

}
// ******************************
void addToFile(char buffer [] , int pX , int pY , int mX , int mY , int counter , FILE * fptr)
{
fprintf(fptr , "\n%d) " , counter);
if (buffer[0] == 'w')
    fprintf(fptr , "White ");
else
    fprintf(fptr , "Black ");   

switch(buffer[1])
{
    case 'p':
    {
        fprintf(fptr , "Pawn ");
        break;
    }
    case 'h':
    {
        fprintf(fptr , "Horse ");
        break;
    }
    case 'i':
    {
        fprintf(fptr , "Bishop ");
        break;
    }
    case 'r':
    {
        fprintf(fptr , "Rook ");
        break;
    }
    case 'k':
    {
        fprintf(fptr , "King ");
        break;
    }
    case 'q':
    {
        fprintf(fptr , "Queen ");
        break;
    }
}
fprintf(fptr , "-> %d , %d to %d , %d" , pX , pY , mX , mY);


}
// ******************************

bool boundsCheck(int x, int y)
{
if ((x < 0) || (x > 7) || (y < 0) || (y >  7))
return false;
else
return true;
}
// ******************************
int main ()
{
    FILE * fptr;
fptr = fopen("chessGameHistory.txt" , "w");
system("cls");
printf("PLEASE ENABLE FULL SCREEN\n");
system("pause");
init();
int pieceX , pieceY;
int moveX , moveY;
char player = 'w';
char buffer[2];
int pause;
int counter = 0;

//we first put the start date and time in the history file
time_t tptr = time(NULL);
char * tstr = ctime(&tptr);
tstr[strlen(tstr) - 1] = '\0';
fprintf(fptr , "Game Started -> %s \n\n" , tstr); 



while (gameMode)
{
system("cls");
render();
printf("\n");
if (player == 'w')
printf("\nWHITE'S TURN: \n\n");
else
printf("\nBLACK'S TURN: \n\n");

printf("CHOOSE THE PIECE (i , j) : ");
scanf("%d %d" , &pieceX , &pieceY);

//APPLYING BOUNDS CHECK
if (!boundsCheck(pieceX , pieceY))
{
printf("PLEASE CHOOSE THE CORRECT INDEX IN THE FORMAT : i <SPACE> j \n");
system("pause");
continue;
}

buffer[0] = bigData[pieceX][pieceY][0];
buffer[1] = bigData[pieceX][pieceY][1];

//CHECKING THE PIECE SELECTION
if (buffer[0] != player)
{
printf("PLEASE CHOOSE THE CORRECT PIECE \n");
system("pause");
continue;
}

printf("\nENTER THE DESTINATION OF THE PIECE IN THE FORMAT : i <SPACE> j (ENTER -1 <space> -1 TO CHANGE THE CHOSEN PIECE)  : ");
scanf("%d %d" , &moveX , &moveY);

//APPLYING CHECKS ON THE DESTINATION
if ((moveX == -1) && (moveY == -1))
continue;
if (!boundsCheck(moveX , moveY))
{
printf("PLEASE CHOOSE THE CORRECT INDEX (i , j) \n");
system("pause");
continue;
}
if ((moveX == pieceX) && (moveY == pieceY))
{
printf("DESTINATION IS SAME AS PREVIOUS POSITION, CHOOSE OTHER POSITION (i , j) \n");
system("pause");
continue;
}


if (!destinationCheck(pieceX , pieceY , moveX , moveY , buffer))
{
printf("\nYOU HAVE SELECTED THE WRONG POSITION FOR THE SELECTED PIECE , PLEASE ENTER THE RIGHT POSITION \n");
system("pause");
continue;
}

counter++;

// WE ADD THE MOVE TO GAME HISTORY WHICH IS STORED IN THE LOCAL FILE
addToFile(buffer , pieceX , pieceY , moveX , moveY , counter , fptr);

//PLAYING THE MOVE
bigData[pieceX][pieceY][0] = '0';
bigData[pieceX][pieceY][1] = '0';

bigData[moveX][moveY][0] = buffer[0];
bigData[moveX][moveY][1] = buffer[1];

endCheck(fptr);



// CHANGING THE PLAYER
if (player == 'w')
player = 'b';
else
player = 'w'; 
}

fclose(fptr);
return 0;
}
