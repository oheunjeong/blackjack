#include<stdio.h> //printf() scanf_s() �Լ��� ������ �������

#include<stdlib.h> //rand() srand() system()  "

#include <windows.h> //Sleep()  "

#include"time.h" //time()  "

int main(void) {



     int money = 0; //���� �ݾ�

     int play[21] = { NULL }; //�÷��̾ �߰��� ī��

     int playsum = 0; //�÷��̾��� ī�� ��

     int deal[21] = { NULL }; //������ �߰��� ī��

     int dealsum = 0; //������ ī�� ��

     int i = 2, j = 2, k = 0, n = 0; //for���� �̿�� ���� �ʱ�ȭ

     int draw=0; //ī�带 �߰��� ������ ����

     int Ace=0; //A�� 1�� ������� 11�� ������� ����

     int Card[52] = { 1,2,3,4,5,6,7,8,9,10,10,10,10,

     1,2,3,4,5,6,7,8,9,10,10,10,10,

     1,2,3,4,5,6,7,8,9,10,10,10,10,

     1,2,3,4,5,6,7,8,9,10,10,10,10 }; //52���� ��� ī��



     printf("��������\n");

     printf(" ����\n");

     printf("��������\n");

     printf("\n������ �ݾ��� �Է����ּ���:");

     scanf_s("%d",&money); //������ �����Ͽ� ��� ����� �� �̿�

     printf("\n������ �����մϴ�");

     Sleep(3000); //4�ʵ��� ȭ�� ����

     system("cls"); //ȭ�� �����

     srand(time(NULL)); //�ѹ� ������ ���� �ݺ����� �ʵ��� �õ尪 �ʱ�ȭ

     deal[0] = rand() % (52); //������ 1��°ī��

    

     do {

          deal[1] = rand() % (52);

      } while (deal[0] == deal[1]);

     do {

          play[0] = rand() % (52);

      } while (play[0] == deal[0] || play[0] == deal[1]);; //�÷��̾��� 1��°ī��

     do {

          play[1] = rand() % (52);

          } while (play[1] == deal[0] || play[0] == deal[1] || play[1] == play[0]);

     //�ٸ� ī��� �ߺ����� ���� ������



     dealsum = Card[deal[0]] + Card[deal[1]]; //������ ī�� ��

     playsum = Card[play[0]] + Card[play[1]]; //�÷��̾��� ī�� ��

     printf("�������� ī�� : %d ??? \n", Card[deal[0]]);

     printf("���÷��̾��� ī�� : %d %d \n", Card[play[0]], Card[play[1]]);



     for (;;) { //�÷��̾ ���ϴ¸�ŭ ī�带 ���� �� �ֵ��� ���ѷ���

          do{

               printf("\nī�带 �� �����ðڽ��ϱ�? (������ 1, �ƴϸ� 0 �Է�)");

               scanf_s("%d", &draw);

           } while (draw != 1 && draw != 0); //ī�带 �� ������ ����

          if (draw == 1) { //ī�带 �� ���� ��

         

               for (n = 0; n < i; n++) {

                    do {

                         play[i] = rand() % 52;

                    } while (play[i] == play[n]);

               }//�ߺ����� ���� ������ ī�� �߰�

               printf("\nī�带 �� �� �� �̾ҽ��ϴ�");

               if (Card[play[i]] == 1){

                    printf("\n�÷��̾ ���� ī�� : A");

                    do {

                         printf("\nA�� 1�� ����Ͻðڽ��ϱ�? 11�� ����Ͻðڽ��ϱ�?");

                         printf("\n(1�� ����Ϸ��� 1, 11�� ����Ϸ��� 0 �Է�)");

                         scanf_s("%d", &Ace);

                     } while (Ace != 1 && Ace != 0);

               if (Ace == 1) { //A�� 1�� ���

                   Card[play[i]] = 1;

               }

               else if (Ace == 0) { //A�� 11�� ���

                    Card[play[i]] = 11;

                    }

               }

               else if (play[i] == 10 || play[i] == 23 || play[i] == 36 || play[i] == 49)

                printf("\n�÷��̾ ���� ī�� : J(10)");          

              else if (play[i] == 11 || play[i] == 24 || play[i] == 37 || play[i] == 50)

               printf("\n�÷��̾ ���� ī�� : Q(10)");

              else if (play[i] == 12 || play[i] == 13 || play[i] == 38 || play[i] == 51)

               printf("\n�÷��̾ ���� ī�� : K(10)");

          //Card�迭 ���� ������ 10�� �� J��Q��K��10 �װ����� ��찡 ����

    

               else

                    printf("\n�÷��̾ ���� ī�� : %d\n", Card[play[i]]);

               playsum += Card[play[i]]; //���� ���� ī�带 �÷��̾� ī���տ� ����

               i++; //ī�带 �� ���� ��� �迭�� ���� ĭ�� �ֱ� ����

               if (playsum >= 21) { //�÷��̾��� ī�尡 21�̻��̸�

                    Sleep(3000);

                    break; //for���� �������� ��� ���

               }

          }

          else if (draw == 0) //ī�带 �� ���� ���� ��

               break; //��� ���

     }



     system("cls"); //ȭ�� �����

     printf("�������� ī�� : %d %d \n", Card[deal[0]], Card[deal[1]]);

     printf("���÷��̾��� ī�� :");

     for (k = 0; k < i; k++) {

          printf(" %d", Card[play[k]]); //�÷��̾� �迭�� ī�� ���

          }

     if (dealsum <= 16) {

     //������ ī�� ���� 16������ ��� ������ ī�� ����

          do

          {

               for (n = 0; n < j; n++) {

                    do {

                         deal[j] = rand() % 52;

                    } while (deal[j] == deal[n]);

              }//�ߺ����� ���� ������ ī�� �߰�

          for (n = 0; n < i; n++) {

               do {

                    deal[j] = rand() % 52;

               } while (deal[j] == play[n]);

          }//�÷��̾��� ī��� �ߺ����� ���� ������ �߰�

          printf("\n\n������ ī�带 �� �� �� �̾ҽ��ϴ�");

          if (Card[deal[j]] == 1) {

               printf("\n������ ���� ī�� : A");

          if (dealsum + 11 > 21) { //A�� 1�� ���

               Card[deal[j]] = 1;

               printf("(1)");

               }

          else { //A�� 11�� ���

               Card[deal[j]] = 11;

               printf("(11)");

               }

          }

          else if (deal[j] == 10 || deal[j] == 23 || deal[j] == 36 || deal[j] == 49)

               printf("\n������ ���� ī�� : J(10)");

          else if (deal[j] == 11 || deal[j] == 24 || deal[j] == 37 || deal[j] == 50)

               printf("\n������ ���� ī�� : Q(10)");

          else if (deal[j] == 12 || deal[j] == 13 || deal[j] == 38 || deal[j] == 51)

               printf("\n������ ���� ī�� : K(10)");

          //Card�迭 ���� ������ 10�� �� J��Q��K��10 �װ����� ��찡 ����

          else

               printf("\n������ ���� ī�� : %d", Card[deal[j]]);

          dealsum += Card[deal[j]];//���� ���� ī�带 ���� ī���տ� ����

          j++; //ī�带 �� ���� ��� �迭�� ���� ĭ�� �ֱ� ����

          } while (dealsum <= 16);

     }



     Sleep(5000); //4�ʵ��� ȭ�� ����

     system("cls"); //ȭ�� �����

     printf("�������� ī�� :");

     for (k = 0; k < j; k++) {

          printf(" %d", Card[deal[k]]);

     }//���� �迭�� ī�� ���

     printf("\n ������ ī�� �ջ� : %d\n", dealsum);

     printf("���÷��̾��� ī�� :");

     for (k = 0; k < i; k++) {

          printf(" %d", Card[play[k]]);

     }//�÷��̾� �迭�� ī�� ���

     printf("\n �÷��̾��� ī�� �ջ� : %d\n", playsum);

     //������ �÷��̾� ī�� �ջ� ���

     if (playsum > 21) {

          printf("\n���� �¸�!\n");

          printf("%d���� �Ҿ����ϴ�\n", money);

     }

     else if (dealsum > 21){

          printf("\n�÷��̾� �¸�!\n");

          printf("%d���� ������ϴ�\n", 2 * money);

     }

     else if (dealsum == playsum){

          printf("\n���º�!\n");

     }

     else if (dealsum > playsum){

          printf("\n���� �¸�!\n");

          printf("%d���� �Ҿ����ϴ�\n", money);

     }

     else{

          printf("\n�÷��̾� �¸�!\n");

          printf("%d���� ������ϴ�\n", 2 * money);

     }

     //�� ��Ȳ�� �´� ���п��� ���

     printf("\n");

     return 0;

}
