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


//1. player �� �Է��ϱ�. 
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag
int dollar[N_MAX_USER]; //���� ���� �ݾ�. 
int n_user;                             	    // Player ��. 

//Ʈ����ī�� ��Ʈ��  ���������� �����ϰ� ���������� �����ϱ�. 
int N_CARDSET=1; 
int N_CARD=52;
int N_DOLLAR=50;
int BLACKJACK=21;

int main(int argc, char *argv[]) {
									

	do{
		printf("input the number of players(MAX 5): ");
		scanf("%d",&n_user);
			if (n_user>5){
				printf("Too many palyers!\n");
			}
			else if(n_user<6){
				printf("-->card is mixed and put into the tray\n");
			}	
	}while(n_user>5);
	

//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;							
int mixCardTray(void){}; //ī�� ���� �ֱ�. 
void ShuffleCard(N_CARD);
	
void main() {
	srand((unsigned)time(NULL)); //random �ʱ�ȭ.
	
	int card[52] = {0}; //ī�带 ���� �迭 ����. 
} 


//�÷��̾�� ��ǻ�� ī�� ����.
int player[N_MAX_CARDHOLD]={0};
int computer[N_MAX_CARDHOLD]={0};


int cardnumber[N_MAX_CARDNUM]; //���� ī�� ����. 


