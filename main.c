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

	int add; // 추가 카드. 
	int gameEnd = 0; 							
	int bankroll; //현재 보유 금액. 
	int n_user;               // Player 수. 
	int bettingmoney=0; //배팅금액
	int player[21]={NULL};//player 가 추가한 카드.
	int sum_player =0;// 플레이어 카드 합
	int deal[21]={NULL}; // 딜러가 추가한 카드
	int sum_dealer=0;//딜러의 카드 합. 
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
//2. dollar 나눠주기.
	

//3. 카드를 섞고 넣기. 
int CardTray;
int cardIndex = 0;			
int mixCardTray(int N_CARD); //카드 넣기. 
int ShuffleCard(int N_CARD); //카드를 섞기.	
int main(void)
{
	int t;
	int i;
	int desk[52];
	for (i=0;i<52;i++)
		desk[i]=(i/13+3)*100+i%13+1;
	srand((unsigned)time(NULL)); //random 초기화.	
	N_CARD[i] = desk[t];
	for (i=0; i<52;i++)
	{
		do
		{
			t=rand()%52;	
		}while(desk[t==0]);
		
		desk[t]=0;
		
	}
	return 0;
}

// 몇  ROUND 인지 표시하기. 
for (int ROUND=0;ROUND<100000000;ROUND++)
	{
		printf("----------------------\n") ;
		printf("---------ROUND%d-------------\n",ROUND);
		printf("----------------------\n");
	} 

		
//4.player 별로 배팅하기
int betDollar(int bankroll,int bettingmoney); //bankroll:배팅가능한 금액 및 남은 금액, bettingmoney:배팅 금액.
int main(void){
	
	//유효한 값이 나올 때까지 LOOP 돈다.
	do
	{
		printf("-----------Betting step---------");
		printf("your betting(total:$50): \n");
		//배팅 금액 입력하기. 
		scanf("%d", &bettingmoney);
		printf("current bankroll: %d\n",bankroll); 
			
	} while (bettingmoney>bankroll||bettingmoney<=0 );
	return bettingmoney;
}

 //5. 두장씩 카드를 나눠준다.
int offerCards{int player[N_MAX_CARDHOLD],int dealer[N_MAX_CARDHOLD]};// player와 dealer에게 두장씩 카드를 나눠준다. 
int player[N_MAX_CARDHOLD]={0}; //플레이어와 딜러 카드 초기화.
int dealer[N_MAX_CARDHOLD]={0};

int main (){
	deal[0]= rand()%(52); // 딜러의 두번째 카드.
	do{
		deal[1]=rand()%(52);
	}while (deal[1]==deal[0]); 

	do{
		play[0]=rand%(52);
	}while (play[0]==deal[0]||play[0]==deal[1]);;// player 의 첫번째 카드. 

	do {
		play[1]=rand()%(52);
	} while (play[1] == deal[0] || play[0] == deal[1] || play[1] == play[0]); //다른 카드와 중복되지 않을 떄까지.
}

//6.카드의 합산 계산 및 승패 여부. 

int calcStepResult(int sumplayer,int sumdealer);   
int main(void)
{
 
	sumdealer = Card[deal[0]] + Card[deal[1]]; //딜러의 카드 합
	sumplayer = Card[play[0]] + Card[play[1]]; //player의 카드 합
	printf("dealer의 카드:X %d\n",Card[deal[1]]); //딜러의 첫번째 숫자는 X로 표시. 
	printf("player의 카드:X %d\n",Card[play[0]],Card[play[1]]);
	if(sumdealer>21);
		printf("player win\n");
	if(sumplayer>21);
		printf("player lose\n"); 
	if(sumplayer=21);
		printf("player win\n");
	if(sumdealer=21);
		printf("player lose\n");			
	return 0; 
}

//7. 현재 turn의 player에게 go/stay 여부 결정. 
int getAction();
int main(void){

	for
	{
		do{
	
			printf("카드를 더 뽑으시겠습니까? 1-go, other-stay");
			scanf("&d",&add);
		}while(add!=1&&add!=0); //카드를 뽑을지 안뽑을지 결정
 		if(add<17)// 카드 숫자가 17미만이면 go. 
 		{
 			for n=0;n<i;n++){
 				do{
 					play[i]=rand()%52;
				}while(play[i]==play[n]);
		 	}
	 	}
	}
	
		if (Card[play[i]] == 1){
                   	 printf("\n player가 뽑은 카드 : A");
                    	do {
                        	 printf("\n select A, 1 or 11?");
                         	printf("\n(1로 사용하려면 1, 11로 사용하려면 0 입력)");
							 scanf_s("%d", &Ace);
                   	 }while (Ace != 1 && Ace != 0);
        	if(Ace==1){
         		Card[play[i]]=1; //A를 1로 선택했을때. 
			 }          
  			else if (Ace==0){ //A를 11로 선택했을때. 
  		 		Card[play[i]]=11;
		  	 }
		}
		else if (play[i] == 10 || play[i] == 23 || play[i] == 36 || play[i] == 49)
                printf("\n player가 select한 카드 : J(10)");          
              else if (play[i] == 11 || play[i] == 24 || play[i] == 37 || play[i] == 50)
               printf("\n player가 select한 카드 : Q(10)");
              else if (play[i] == 12 || play[i] == 13 || play[i] == 38 || play[i] == 51)
               printf("\n player가 select한 카드 :K(10)");
		//Card 배열 안의 숫자가 10일때:  J,K,Q,10 네가지중 하나 일것.
		
		else
			printf("\n play가 select한 카드:%d\n",Card[play[i]]);
			sumplayer+=Card[play[i]];//new card 숫자를 sum 에 저장.
			i++;
			if(sumplayer>=21)
			{	
				break //player card가 21 이상이면 for문을 빠져나온다. 
			}	 
    	}
    	else if(add==0)// card 를 더이상 뽑지 않는 경우.
			break;
	}
	printf("dealer card :%d %d\n",Card[deal[0]], Card[deal[1]]);
	printf("player card:");
	
	return 0;
}

//8. 카드 배포 현황 출력. 
int printCardInitialStatus();
int main(void){
 
	for(k=0;k<i;k++){
			printf("%d",Card[play[k]]);//player의 카드 출력. 
	}

	if (sumdealer < 17){//dealer card가 17미만인 경우는 카드를 한장 더 뽑는다. 
		do
		{
			for(n=0;n<j;n++)
			{
				do
				{
					deal[j]= rand()%52;
				}while (deal[j]==deal[n]);
		}// 카드를 중복되지 않을 때 까지 추가한다.
		for(n=0;n<i;n++)
		{
			do
			{
				deal[j]= rand()%52;	
			}while(deal[j]==play[n]);
		
		}//play와 중복되지 않을 때까지 뽑음. 
	}	

	if (Card[deal[j]] == 1)
	{
		printf("\n dealer : A");
    	if (dealsum + 11 > 21) 
		{	 
			Card[deal[j]] = 1;
        	printf("(1)");

    	}//A=1
	}
    else  
	{
        Card[deal[j]] = 11;
        printf("(11)");

    } //A=11

    else if (deal[j] == 10 || deal[j] == 23 || deal[j] == 36 || deal[j] == 49)
        printf("\n딜러가 뽑은 카드 : J(10)");
    else if (deal[j] == 11 || deal[j] == 24 || deal[j] == 37 || deal[j] == 50)
        printf("\n딜러가 뽑은 카드 : Q(10)");
	else if (deal[j] == 12 || deal[j] == 13 || deal[j] == 38 || deal[j] == 51)
        printf("\n딜러가 뽑은 카드 : K(10)");
//Card 배열 안의 숫자가 10일때:  J,K,Q,10 네가지중 하나 일것.	
    else
        printf("\n딜러가 뽑은 카드 : %d", Card[deal[j]]);
    sumdealer += Card[deal[j]];//새로 뽑은 카드를 딜러 카드합에 저장
    j++; //카드를 또 뽑을 경우 배열의 다음 칸에 넣기 위해
    } while (sumdealer<17);

}

int checkResult(); // turn 종료후 player의 최종 결과 출력.
int main void
{	printf("dealer card: \n");
	for(k=0;k<j;k++)
	{
		printf("%d",Card[deal[k]]);
	}//dealer 배열의 카드 print. 
	printf("dealer의 카드 합: %d\n",sumdealer);
	
	printf("player의 카드:");
	for(k=0;k<i,k++)
	{
		printf("%d",Card[play[k]]);
	}//player 배열의 카드 print.
	printf("player의 카드 합: %d\n",sumplayer);

}

//9. 승리자 판단. 
int checkWinner();// game 종료후 최종 승리자 판단. 
int main (void) {
	
	if(sumdealer>21)
	{
	printf("\n player win!\n");
	printf("\n player has %d",bankroll+bettingmoney);
	}
	else if(sumplayer>sumdealer)
	{
		printf("\n player has %d",bankroll+bettingmoney);
	}
	if(sumplayer=21)
	{
		printf("\n player is blackjack\n");
		printf("\n player has %d",bankroll+2*bettingmoney);	
	}	
	return 0;
}

