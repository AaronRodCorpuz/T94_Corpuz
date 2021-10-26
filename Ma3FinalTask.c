#include <stdio.h>

int main(){
    int choice;
    int payment;
    int change;

    printf("Welcome to The ARC Convenience Store! ");
    printf("\n\nPlease select your order\n   [1]Carbonara(250)\n   [2]Japanese Tempura(200)\n   [3]Sushi w/ Caviar(500)\n\nYour Choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1:
          printf("\nInput Payment: ");
          scanf("%d", &payment);
          if(payment>=250){
          printf("You have purchased a Carbonara!\n");
          change= payment - 250;
          printf("Change: %d Pesos \n\nThank You for your purchase. We hope you enjoy your meal. \nCome again!", change);
          }else{
          printf("You don't have enough Funds. Please try again.");
          }break;
    case 2:
          printf("\nInput Payment: ");
          scanf("%d", &payment);
          if(payment>=200){
          printf("You have purchased a Japanese Tempura!\n");
          change= payment - 200;
          printf("Change: %d Pesos \n\nThank You for your purchase. We hope you enjoy your meal. \nCome again!", change);
          }else{
          printf("You don't have enough Funds. Please try again.");
          }break;
    case 3:
          printf("\nInput Payment: ");
          scanf("%d", &payment);
          if(payment>=500){
          printf("You have purchased a Sushi w/ Caviar!\n");
          change= payment - 500;
          printf("Change: %d Pesos \n\nThank You for your purchase. We hope you enjoy your meal. \nCome again!", change);
          }else{
          printf("You don't have enough Funds. Please try again.");
          }break;
    default:
          printf("Invalid Input");
    }
    return 0;
}

