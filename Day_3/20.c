//Write a program to read temperature entigrade and display a suitable message according to temperature state below : Temp < 0 then Freezing weatherTemp 0-10 then Very Cold weatherTemp 10-20 then Cold weatherTemp 20-30 then Normal in TempTemp 30-40 then Its HotTemp >=40 then Its Very Hot

#include <stdio.h>
void main()
{
     int tmp;

    printf("Input days temperature : ");
    scanf("%d",&tmp);
   if(tmp<0)
             printf("Freezing weather.\n");
   else if(tmp<10)
            printf("Very cold weather.\n");
            else if(tmp<20)
                        printf("Cold weather.\n");
                    else if(tmp<30)
                               printf("Normal in temp.\n");
                            else if(tmp<40)
                                         printf("Its Hot.\n");
                                    else
                                           printf("Its very hot.\n");

}