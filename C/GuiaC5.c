 #include<stdio.h>
void main(){
float sec;
float day;
float min;
float hrs;
printf("Igrese los dias\n");
scanf("%f",& day);
printf("Igrese las horas\n");
scanf("%f",& hrs);
printf("Igrese los minutos\n");
scanf("%f",& min);
sec=(day*86400)+(hrs*3600)+(min*60);
printf("Ha pasado %f segundos",sec);
}

