#include<stdio.h>
int main(){
	
	char month;
	

	printf("enter month\n");
	scanf("%c", &month);
	
	switch(month){
		
		case 'j' : printf("january");
		break;
		case 'f' : printf("february");
		break;
		case 'm' : printf("march");
		break;
		case 'a' : printf("april");
		break;
		case 'M' : printf("may");
		break;
		case 'J' : printf("june");
		break;
		case 'U' : printf("july");
		break;
		case 'A' : printf("august");
		break;
		case 's' : printf("september");
		break;
		case 'o' : printf("october");
		break;
		case 'n' : printf("november");
		break;
		case 'd' : printf("december");
		break;
		
		return 0;
		
		
		
		
	}
}
