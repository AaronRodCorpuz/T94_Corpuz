#include <stdio.h>

int main(){
    int sec;
    int rpm;
    int degrees;
    int degs;


    printf("Create a program in C according to this problem: \n\n     A spinning tire makes 3000 revolutions per minutes. Calculate how many degrees it rotate \nin one second. Then display the Degrees. \n \nDefine the number of seconds in a minute: ");
    scanf("%d", &sec);
    printf("Input the given rpm: ");
    scanf("%d", &rpm);
    printf("Input the number of degrees in one rotation: ");
    scanf("%d", &degrees);

    degs = rpm / sec * degrees;
    printf("\n%d rpm / %d sec. * %d = %d deg/s", rpm, sec, degrees, degs);

    return 0;
}


