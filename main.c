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
int main(void){


	int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
	int cardSum[N_MAX_USER];					//sum of the cards
	int bet[N_MAX_USER];						//current betting 
	int gameEnd = 0; 							//game end flag
	int dollar[N_MAX_USER]; //���� ���� �ݾ�. 
	int n_user;                             	    // Player ��. 
	int bettingmoney=0; //���ñݾ�
	int player[21]={NULL};//player �� �߰��� ī��.
	int playsum =0;// �÷��̾� ī�� ��
	int deal[21]={NULL}; // ������ �߰��� ī��
	int dealsum=0;//������ �߰��� ī��
	int i=2,j=2,k=0,n=0; // for������ ����� ���� �ʱ�ȭ
	int Ace=0; //ī�� A�� 1�� ���� 11�� ���� ����.
	int Card[52]={
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10}; //52���� ��� ī��. 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Ʈ����ī�� ��Ʈ��  ���������� �����ϰ� ���������� �����ϱ�. 
int N_CARDSET=1; 
int N_CARD=52;
int N_DOLLAR=50;
int BLACKJACK=21;

//1. player �� �Է��ϱ�. 

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
	

//2. ī�带 ���� �ֱ�. 
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;			
int mixCardTray(void){int N_CARD[}; //ī�� �ֱ�. 
int ShuffleCard(int N_CARD[]) //ī�带 ����.	
{
	int t;
	int i;
	int desk[52];
	for (i=0;i<52;i++)
		desk[i]=(i/13+3)*100+i%13+1;
	srand((unsigned)time(NULL)); //random �ʱ�ȭ.	
	for (i=0; i<52;i++)
	{
		do
		{
			t=rand()%52;	
		}while(desk[t==0]);
		N_CARD[i] = desk[t];
		desk[t]=0;
		
	}
	return 0;
}


//�÷��̾�� ���� ī�� �ʱ�ȭ.

int player[N_MAX_CARDHOLD]={0};
int computer[N_MAX_CARDHOLD]={0};

//���� ī�� ����. 
int cardnumber[N_MAX_CARDNUM]; 


int ROUND // �� ROUND����  ǥ��.	printf("----------------------\n")
		printf("---------ROUND-------------\n")
		printf("----------------------\n")
		printf("----------------------\n") 
//4.player ���� �����ϱ�
int betDollar(int bankroll){
	int bettingmoney;//  ���ñݾ�.
	//��ȿ�� ���� ���� ������ LOOP ����.
	do
	{
		printf("-----------Betting step---------");
		printf("your betting(total:$50): \n");
		//���� �ݾ� �Է��ϱ�. 
		scanf("%d", &bettingmoney);
		printf("current bankroll: %d\n",bankroll); 
		//���ð����� �ݾ� �� ���� �ݾ�. 	
	} while (bettingmoney>bankroll||bettingmoney<=0 );
	return bettingmoney;
}

deal[0]= rand()%(52); // ������ �ι�° ī��.
do{
	deal[1]=rand()%(52);
} while (deal[1]==deal[0]); 

do{
	play[0]=rand%(52);
} while (play[0]==deal[0]||play[0]==deal[1]);;// player �� ù��° ī��. 


