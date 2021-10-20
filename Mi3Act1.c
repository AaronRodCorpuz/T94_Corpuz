#include <stdio.h>
int main()
{
   int temperature;

    printf("Input the temperature in centigrade :");
    scanf("%d",&temperature);
        if(temperature<0)
        printf("Freezing weather.\n");
        else if(temperature<10)
        printf("Very cold weather.\n");
        else if(temperature<20)
        printf("Cold weather.\n");
        else if(temperature<30)
        printf("Normal in temp.\n");
        else if(temperature<40)
        printf("Its Hot.\n");
        else
        printf("Its very hot.\n");

}
