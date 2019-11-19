#include<stdio.h> //printf() scanf_s() 함수를 포함한 헤더파일

#include<stdlib.h> //rand() srand() system()  "

#include <windows.h> //Sleep()  "

#include"time.h" //time()  "

int main(void) {



     int money = 0; //배팅 금액

     int play[21] = { NULL }; //플레이어가 추가한 카드

     int playsum = 0; //플레이어의 카드 합

     int deal[21] = { NULL }; //딜러가 추가한 카드

     int dealsum = 0; //딜러의 카드 합

     int i = 2, j = 2, k = 0, n = 0; //for문에 이용될 변수 초기화

     int draw=0; //카드를 추가로 받을지 결정

     int Ace=0; //A를 1로 사용할지 11로 사용할지 결정

     int Card[52] = { 1,2,3,4,5,6,7,8,9,10,10,10,10,

     1,2,3,4,5,6,7,8,9,10,10,10,10,

     1,2,3,4,5,6,7,8,9,10,10,10,10,

     1,2,3,4,5,6,7,8,9,10,10,10,10 }; //52장의 모든 카드



     printf("♠♥♣◆\n");

     printf(" 블랙잭\n");

     printf("♠♥♣◆\n");

     printf("\n∑배팅 금액을 입력해주세요:");

     scanf_s("%d",&money); //변수에 저장하여 결과 출력할 때 이용

     printf("\n게임을 시작합니다");

     Sleep(3000); //4초동안 화면 띄우기

     system("cls"); //화면 지우기

     srand(time(NULL)); //한번 랜덤한 수가 반복되지 않도록 시드값 초기화

     deal[0] = rand() % (52); //딜러의 1번째카드

    

     do {

          deal[1] = rand() % (52);

      } while (deal[0] == deal[1]);

     do {

          play[0] = rand() % (52);

      } while (play[0] == deal[0] || play[0] == deal[1]);; //플레이어의 1번째카드

     do {

          play[1] = rand() % (52);

          } while (play[1] == deal[0] || play[0] == deal[1] || play[1] == play[0]);

     //다른 카드와 중복되지 않을 때까지



     dealsum = Card[deal[0]] + Card[deal[1]]; //딜러의 카드 합

     playsum = Card[play[0]] + Card[play[1]]; //플레이어의 카드 합

     printf("∑딜러의 카드 : %d ??? \n", Card[deal[0]]);

     printf("∑플레이어의 카드 : %d %d \n", Card[play[0]], Card[play[1]]);



     for (;;) { //플레이어가 원하는만큼 카드를 뽑을 수 있도록 무한루프

          do{

               printf("\n카드를 더 뽑으시겠습니까? (맞으면 1, 아니면 0 입력)");

               scanf_s("%d", &draw);

           } while (draw != 1 && draw != 0); //카드를 더 뽑을지 결정

          if (draw == 1) { //카드를 더 뽑을 때

         

               for (n = 0; n < i; n++) {

                    do {

                         play[i] = rand() % 52;

                    } while (play[i] == play[n]);

               }//중복되지 않을 때까지 카드 추가

               printf("\n카드를 한 장 더 뽑았습니다");

               if (Card[play[i]] == 1){

                    printf("\n플레이어가 뽑은 카드 : A");

                    do {

                         printf("\nA를 1로 사용하시겠습니까? 11로 사용하시겠습니까?");

                         printf("\n(1로 사용하려면 1, 11로 사용하려면 0 입력)");

                         scanf_s("%d", &Ace);

                     } while (Ace != 1 && Ace != 0);

               if (Ace == 1) { //A를 1로 사용

                   Card[play[i]] = 1;

               }

               else if (Ace == 0) { //A를 11로 사용

                    Card[play[i]] = 11;

                    }

               }

               else if (play[i] == 10 || play[i] == 23 || play[i] == 36 || play[i] == 49)

                printf("\n플레이어가 뽑은 카드 : J(10)");          

              else if (play[i] == 11 || play[i] == 24 || play[i] == 37 || play[i] == 50)

               printf("\n플레이어가 뽑은 카드 : Q(10)");

              else if (play[i] == 12 || play[i] == 13 || play[i] == 38 || play[i] == 51)

               printf("\n플레이어가 뽑은 카드 : K(10)");

          //Card배열 안의 정수가 10일 때 J·Q·K·10 네가지의 경우가 있음

    

               else

                    printf("\n플레이어가 뽑은 카드 : %d\n", Card[play[i]]);

               playsum += Card[play[i]]; //새로 뽑은 카드를 플레이어 카드합에 저장

               i++; //카드를 또 뽑을 경우 배열의 다음 칸에 넣기 위해

               if (playsum >= 21) { //플레이어의 카드가 21이상이면

                    Sleep(3000);

                    break; //for문을 빠져나와 결과 출력

               }

          }

          else if (draw == 0) //카드를 더 뽑지 않을 때

               break; //결과 출력

     }



     system("cls"); //화면 지우기

     printf("∑딜러의 카드 : %d %d \n", Card[deal[0]], Card[deal[1]]);

     printf("∑플레이어의 카드 :");

     for (k = 0; k < i; k++) {

          printf(" %d", Card[play[k]]); //플레이어 배열의 카드 출력

          }

     if (dealsum <= 16) {

     //딜러의 카드 합이 16이하일 경우 무조건 카드 뽑음

          do

          {

               for (n = 0; n < j; n++) {

                    do {

                         deal[j] = rand() % 52;

                    } while (deal[j] == deal[n]);

              }//중복되지 않을 때까지 카드 추가

          for (n = 0; n < i; n++) {

               do {

                    deal[j] = rand() % 52;

               } while (deal[j] == play[n]);

          }//플레이어의 카드와 중복되지 않을 때까지 추가

          printf("\n\n딜러가 카드를 한 장 더 뽑았습니다");

          if (Card[deal[j]] == 1) {

               printf("\n딜러가 뽑은 카드 : A");

          if (dealsum + 11 > 21) { //A를 1로 사용

               Card[deal[j]] = 1;

               printf("(1)");

               }

          else { //A를 11로 사용

               Card[deal[j]] = 11;

               printf("(11)");

               }

          }

          else if (deal[j] == 10 || deal[j] == 23 || deal[j] == 36 || deal[j] == 49)

               printf("\n딜러가 뽑은 카드 : J(10)");

          else if (deal[j] == 11 || deal[j] == 24 || deal[j] == 37 || deal[j] == 50)

               printf("\n딜러가 뽑은 카드 : Q(10)");

          else if (deal[j] == 12 || deal[j] == 13 || deal[j] == 38 || deal[j] == 51)

               printf("\n딜러가 뽑은 카드 : K(10)");

          //Card배열 안의 정수가 10일 때 J·Q·K·10 네가지의 경우가 있음

          else

               printf("\n딜러가 뽑은 카드 : %d", Card[deal[j]]);

          dealsum += Card[deal[j]];//새로 뽑은 카드를 딜러 카드합에 저장

          j++; //카드를 또 뽑을 경우 배열의 다음 칸에 넣기 위해

          } while (dealsum <= 16);

     }



     Sleep(5000); //4초동안 화면 띄우기

     system("cls"); //화면 지우기

     printf("∑딜러의 카드 :");

     for (k = 0; k < j; k++) {

          printf(" %d", Card[deal[k]]);

     }//딜러 배열의 카드 출력

     printf("\n 딜러의 카드 합산 : %d\n", dealsum);

     printf("∑플레이어의 카드 :");

     for (k = 0; k < i; k++) {

          printf(" %d", Card[play[k]]);

     }//플레이어 배열의 카드 출력

     printf("\n 플레이어의 카드 합산 : %d\n", playsum);

     //딜러와 플레이어 카드 합산 출력

     if (playsum > 21) {

          printf("\n딜러 승리!\n");

          printf("%d원을 잃었습니다\n", money);

     }

     else if (dealsum > 21){

          printf("\n플레이어 승리!\n");

          printf("%d원을 얻었습니다\n", 2 * money);

     }

     else if (dealsum == playsum){

          printf("\n무승부!\n");

     }

     else if (dealsum > playsum){

          printf("\n딜러 승리!\n");

          printf("%d원을 잃었습니다\n", money);

     }

     else{

          printf("\n플레이어 승리!\n");

          printf("%d원을 얻었습니다\n", 2 * money);

     }

     //각 상황에 맞는 승패여부 출력

     printf("\n");

     return 0;

}
