#include <stdio.h>
#define MAX 3
/*this is the tic tac toe game*/

/*print out the board such that 
  p1's squares are represented with an X
  p2's with an O 
  and empty space for empty space*/

void printBoard(const int board[][MAX]);
/*read row/col*/
void getRowCol(const int board[][MAX], int* row,int* col);
/* check win, function returns 1 if p1 won, -1 if p2 won, 0 if neither won*/
int checkWin(const int board[][MAX]);

int main(void){
	/*each element of array represents one tic tac toe square
	top-left is element 0,0, bottom right is element 2,2.
	0 means square is empty, 1 is for p1, -1 is p2*/

	int board[MAX][MAX]={0};
	int turn = 1;
	int numMoves=0;
	int row,col;
	printBoard(board);
    getRowCol(board,&row,&col);
    board[row][col]=turn;
    turn = turn * -1;
    numMoves++;
    int whoWon;
    while((whoWon=checkWin(board))==0 && numMoves < 9){
		printBoard(board);
   	 	getRowCol(board,&row,&col);
  	  	board[row][col]=turn;
    	turn = turn * -1;
		numMoves++;		
	}
	if(whoWon == 0){
		printf("Tie\n");
	}
	else{
		printf("player %d won\n", (whoWon==-1)?2:1);
	}
//	while (game is not over){
		//print the board
		//read the input
		//check if game is over;
	//}
	//print out who won
}

/*read row/col from user, ensures that it is ok and passes it back*/
void getRowCol(const int board[][MAX], int* row,int* col){
    int r,c;
	printf("Enter your row: ");
	scanf("%d",&r);
	printf("Enter your column: ");
	scanf("%d", &c);
	while(board[r][c] != 0){
		printf("That position is occupied\n");
  		printf("Enter your row: ");
		scanf("%d",&r);
		printf("Enter your column: ");
		scanf("%d", &c);

	}
	*row = r;
	*col = c;
}

void printBoard(const int board[][MAX]){
	const char symbol[MAX]={'O',' ','X'};
	printf("   | 0 | 1 | 2\n");
	printf("===============\n");
	int i,j;
	for(i=0;i<MAX;i++){
		printf(" %d |",i);
		for(j=0;j<MAX;j++){
			printf(" %c ",symbol[board[i][j]+1]);
			if(j!=2){
				printf("|");
			}
			else{
				printf("\n");
			}
		}
		if(i!=2){
			printf("---------------\n");
		}
	}
}

int checkWin(const int board[][MAX]){
	int win=0;
	int i,j;
	for(i=0;i<MAX && win == 0;i++){
		if(board[i][0]!=0 && (board[i][0]==board[i][1] && board[i][0]==board[i][2]))
			win=board[i][0];
	}
	for(i=0;i<MAX && win == 0;i++){
		if(board[0][i]!=0 && (board[0][i]==board[1][i] && board[0][i]==board[2][i]))
			win=board[0][i];
	}
	if(win ==0){
		if(board[0][0]!=0 && board[0][0]==board[1][1] && board[0][0]==board[2][2]){
			win=board[0][0];
		}
	}
	if(win ==0){
		if(board[0][2]!=0 && board[0][2]==board[1][1] && board[0][2]==board[2][0]){
			win=board[0][2];
		}
	}
	return win;

}








