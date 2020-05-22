 #include<stdio.h>
void main(){
	
float sec;
float day;
float min;
float hrs;
printf("Igrese los segundos\n");
scanf("%f",& sec);
day=sec/86400;
min=sec/60;
hrs=sec/3600;
printf("Han pasado %f dias\n",day);
printf("Han pasado %f horas\n",hrs);
printf("Han pasado %f minutos\n",min);
}

