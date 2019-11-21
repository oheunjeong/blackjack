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
	int dollar[N_MAX_USER]; //현재 보유 금액. 
	int n_user;                             	    // Player 수. 
	int bettingmoney=0; //배팅금액
	int player[21]={NULL};//player 가 추가한 카드.
	int playsum =0;// 플레이어 카드 합
	int deal[21]={NULL}; // 딜러가 추가한 카드
	int dealsum=0;//딜러가 추가한 카드
	int i=2,j=2,k=0,n=0; // for문에서 사용할 변수 초기화
	int Ace=0; //카드 A를 1로 할지 11로 할지 결정.
	int Card[52]={
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10,
	1,2,3,4,5,6,7,8,9,10,10,10,10}; //52장의 모든 카드. 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//트럼프카드 세트를  고정값으로 설정하고 전역변수로 구현하기. 
int N_CARDSET=1; 
int N_CARD=52;
int N_DOLLAR=50;
int BLACKJACK=21;

//1. player 수 입력하기. 

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
	

//2. 카드를 섞고 넣기. 
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;			
int mixCardTray(void){int N_CARD[}; //카드 넣기. 
int ShuffleCard(int N_CARD[]) //카드를 섞기.	
{
	int t;
	int i;
	int desk[52];
	for (i=0;i<52;i++)
		desk[i]=(i/13+3)*100+i%13+1;
	srand((unsigned)time(NULL)); //random 초기화.	
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


//플레이어와 딜러 카드 초기화.

int player[N_MAX_CARDHOLD]={0};
int computer[N_MAX_CARDHOLD]={0};

//받은 카드 숫자. 
int cardnumber[N_MAX_CARDNUM]; 


int ROUND // 몇 ROUND인지  표시.	printf("----------------------\n")
		printf("---------ROUND-------------\n")
		printf("----------------------\n")
		printf("----------------------\n") 
//4.player 별로 배팅하기
int betDollar(int bankroll){
	int bettingmoney;//  배팅금액.
	//유효한 값이 나올 때까지 LOOP 돈다.
	do
	{
		printf("-----------Betting step---------");
		printf("your betting(total:$50): \n");
		//배팅 금액 입력하기. 
		scanf("%d", &bettingmoney);
		printf("current bankroll: %d\n",bankroll); 
		//배팅가능한 금액 및 남은 금액. 	
	} while (bettingmoney>bankroll||bettingmoney<=0 );
	return bettingmoney;
}

deal[0]= rand()%(52); // 딜러의 두번째 카드.
do{
	deal[1]=rand()%(52);
} while (deal[1]==deal[0]); 

do{
	play[0]=rand%(52);
} while (play[0]==deal[0]||play[0]==deal[1]);;// player 의 첫번째 카드. 


