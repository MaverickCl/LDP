 #include<stdio.h>;
void main(){
	int i=0;
for(i=1;i<101;i++){
	if(i%3==0){
	printf("%d; hola\n",i);
	}
	if(i%5==0){
		printf("%d: mundo\n",i);
	}
	if(i%3==0 && i%5==0){
		printf("%d:hola mundo\n",i);
	
	}
	
}
}
