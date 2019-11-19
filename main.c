#include <stdio.h>
#include <stdlib.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//player info
int dollar[N_MAX_USER];						//dollars that each player has
int n_user;                             	//number of users


int main(int argc, char *argv[]) {
									

	do{
		printf("input the number of players(MAX 5): ");
		scanf("%d",&n_user);
			if (n_user>5){
				printf("Too many palyers!\n");
			}
		
	}while(n_user>5);
	

	
	
	
	
	return 0;
}
