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

	int add; // �߰� ī��. 
	int gameEnd = 0; 							
	int bankroll; //���� ���� �ݾ�. 
	int n_user;               // Player ��. 
	int bettingmoney=0; //���ñݾ�
	int player[21]={NULL};//player �� �߰��� ī��.
	int sum_player =0;// �÷��̾� ī�� ��
	int deal[21]={NULL}; // ������ �߰��� ī��
	int sum_dealer=0;//������ ī�� ��. 
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
//2. dollar �����ֱ�.
	

//3. ī�带 ���� �ֱ�. 
int CardTray;
int cardIndex = 0;			
int mixCardTray(int N_CARD); //ī�� �ֱ�. 
int ShuffleCard(int N_CARD); //ī�带 ����.	
int main(void)
{
	int t;
	int i;
	int desk[52];
	for (i=0;i<52;i++)
		desk[i]=(i/13+3)*100+i%13+1;
	srand((unsigned)time(NULL)); //random �ʱ�ȭ.	
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

// ��  ROUND ���� ǥ���ϱ�. 
for (int ROUND=0;ROUND<100000000;ROUND++)
	{
		printf("----------------------\n") ;
		printf("---------ROUND%d-------------\n",ROUND);
		printf("----------------------\n");
	} 

		
//4.player ���� �����ϱ�
int betDollar(int bankroll,int bettingmoney); //bankroll:���ð����� �ݾ� �� ���� �ݾ�, bettingmoney:���� �ݾ�.
int main(void){
	
	//��ȿ�� ���� ���� ������ LOOP ����.
	do
	{
		printf("-----------Betting step---------");
		printf("your betting(total:$50): \n");
		//���� �ݾ� �Է��ϱ�. 
		scanf("%d", &bettingmoney);
		printf("current bankroll: %d\n",bankroll); 
			
	} while (bettingmoney>bankroll||bettingmoney<=0 );
	return bettingmoney;
}

 //5. ���徿 ī�带 �����ش�.
int offerCards{int player[N_MAX_CARDHOLD],int dealer[N_MAX_CARDHOLD]};// player�� dealer���� ���徿 ī�带 �����ش�. 
int player[N_MAX_CARDHOLD]={0}; //�÷��̾�� ���� ī�� �ʱ�ȭ.
int dealer[N_MAX_CARDHOLD]={0};

int main (){
	deal[0]= rand()%(52); // ������ �ι�° ī��.
	do{
		deal[1]=rand()%(52);
	}while (deal[1]==deal[0]); 

	do{
		play[0]=rand%(52);
	}while (play[0]==deal[0]||play[0]==deal[1]);;// player �� ù��° ī��. 

	do {
		play[1]=rand()%(52);
	} while (play[1] == deal[0] || play[0] == deal[1] || play[1] == play[0]); //�ٸ� ī��� �ߺ����� ���� ������.
}

//6.ī���� �ջ� ��� �� ���� ����. 

int calcStepResult(int sumplayer,int sumdealer);   
int main(void)
{
 
	sumdealer = Card[deal[0]] + Card[deal[1]]; //������ ī�� ��
	sumplayer = Card[play[0]] + Card[play[1]]; //player�� ī�� ��
	printf("dealer�� ī��:X %d\n",Card[deal[1]]); //������ ù��° ���ڴ� X�� ǥ��. 
	printf("player�� ī��:X %d\n",Card[play[0]],Card[play[1]]);
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

//7. ���� turn�� player���� go/stay ���� ����. 
int getAction();
int main(void){

	for
	{
		do{
	
			printf("ī�带 �� �����ðڽ��ϱ�? 1-go, other-stay");
			scanf("&d",&add);
		}while(add!=1&&add!=0); //ī�带 ������ �Ȼ����� ����
 		if(add<17)// ī�� ���ڰ� 17�̸��̸� go. 
 		{
 			for n=0;n<i;n++){
 				do{
 					play[i]=rand()%52;
				}while(play[i]==play[n]);
		 	}
	 	}
	}
	
		if (Card[play[i]] == 1){
                   	 printf("\n player�� ���� ī�� : A");
                    	do {
                        	 printf("\n select A, 1 or 11?");
                         	printf("\n(1�� ����Ϸ��� 1, 11�� ����Ϸ��� 0 �Է�)");
							 scanf_s("%d", &Ace);
                   	 }while (Ace != 1 && Ace != 0);
        	if(Ace==1){
         		Card[play[i]]=1; //A�� 1�� ����������. 
			 }          
  			else if (Ace==0){ //A�� 11�� ����������. 
  		 		Card[play[i]]=11;
		  	 }
		}
		else if (play[i] == 10 || play[i] == 23 || play[i] == 36 || play[i] == 49)
                printf("\n player�� select�� ī�� : J(10)");          
              else if (play[i] == 11 || play[i] == 24 || play[i] == 37 || play[i] == 50)
               printf("\n player�� select�� ī�� : Q(10)");
              else if (play[i] == 12 || play[i] == 13 || play[i] == 38 || play[i] == 51)
               printf("\n player�� select�� ī�� :K(10)");
		//Card �迭 ���� ���ڰ� 10�϶�:  J,K,Q,10 �װ����� �ϳ� �ϰ�.
		
		else
			printf("\n play�� select�� ī��:%d\n",Card[play[i]]);
			sumplayer+=Card[play[i]];//new card ���ڸ� sum �� ����.
			i++;
			if(sumplayer>=21)
			{	
				break //player card�� 21 �̻��̸� for���� �������´�. 
			}	 
    	}
    	else if(add==0)// card �� ���̻� ���� �ʴ� ���.
			break;
	}
	printf("dealer card :%d %d\n",Card[deal[0]], Card[deal[1]]);
	printf("player card:");
	
	return 0;
}

//8. ī�� ���� ��Ȳ ���. 
int printCardInitialStatus();
int main(void){
 
	for(k=0;k<i;k++){
			printf("%d",Card[play[k]]);//player�� ī�� ���. 
	}

	if (sumdealer < 17){//dealer card�� 17�̸��� ���� ī�带 ���� �� �̴´�. 
		do
		{
			for(n=0;n<j;n++)
			{
				do
				{
					deal[j]= rand()%52;
				}while (deal[j]==deal[n]);
		}// ī�带 �ߺ����� ���� �� ���� �߰��Ѵ�.
		for(n=0;n<i;n++)
		{
			do
			{
				deal[j]= rand()%52;	
			}while(deal[j]==play[n]);
		
		}//play�� �ߺ����� ���� ������ ����. 
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
        printf("\n������ ���� ī�� : J(10)");
    else if (deal[j] == 11 || deal[j] == 24 || deal[j] == 37 || deal[j] == 50)
        printf("\n������ ���� ī�� : Q(10)");
	else if (deal[j] == 12 || deal[j] == 13 || deal[j] == 38 || deal[j] == 51)
        printf("\n������ ���� ī�� : K(10)");
//Card �迭 ���� ���ڰ� 10�϶�:  J,K,Q,10 �װ����� �ϳ� �ϰ�.	
    else
        printf("\n������ ���� ī�� : %d", Card[deal[j]]);
    sumdealer += Card[deal[j]];//���� ���� ī�带 ���� ī���տ� ����
    j++; //ī�带 �� ���� ��� �迭�� ���� ĭ�� �ֱ� ����
    } while (sumdealer<17);

}

int checkResult(); // turn ������ player�� ���� ��� ���.
int main void
{	printf("dealer card: \n");
	for(k=0;k<j;k++)
	{
		printf("%d",Card[deal[k]]);
	}//dealer �迭�� ī�� print. 
	printf("dealer�� ī�� ��: %d\n",sumdealer);
	
	printf("player�� ī��:");
	for(k=0;k<i,k++)
	{
		printf("%d",Card[play[k]]);
	}//player �迭�� ī�� print.
	printf("player�� ī�� ��: %d\n",sumplayer);

}

//9. �¸��� �Ǵ�. 
int checkWinner();// game ������ ���� �¸��� �Ǵ�. 
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

