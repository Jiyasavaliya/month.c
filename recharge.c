#include<stdio.h>

int main(){
	
	int a; 
	 	
	printf("1.prepaid\n");
	printf("2.postpaid\n");
	
	printf("enter your selection");
	scanf("%d",&a);
	
	switch(a){
		
	case 1 :
	
	printf("\n1.499rs/-1 year  validity and 1.5/day 1000 sms/day\n");
	printf("2.899rs/-2 year  validity and 2.5/day 10000 sms/day\n\n");
	
	
	
	printf("\nenter your selection\n");
	scanf("%d",&a);
	
	switch(a){
		
		case 1 :
			printf("\nyour recharge of 499 id done\enjoy your dataa pake\n\n");
		    break;
	    case 2 :
	    	printf("your recharge of 899 id done\enjoy your dataa pake\n\n");
			break;
	}
		break;
		
		case 2 :
			printf("\nsomething went wrong\nplese try again later\n\n");
            break;
			
			default :
				printf("invalide input\n\n");
				break;
	}
}
