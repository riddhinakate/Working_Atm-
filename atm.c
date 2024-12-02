#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i=1,s,d,balance,withdrwl,pin,phone,np,m,nm,otp,cotp;
  
  n=1234;
  balance=2000;
  phone=5555;
  otp=222;
  while(i<2){
  	printf("\nEnter the pin : ");
    scanf("%d",&pin);
   
  if(pin==n){
  	printf("\n\n1. Check the balance \n");
  	printf("2. Cash deposit \n");
  	printf("3. Cash withdrawl \n");
  	printf("4. Change the pin \n");
	printf("5. Change the mobile no. \n");
	printf("6. Check the mobile no. \n");
	printf("7. Exit transaction \n\n");	
	printf("Enter your choice : ");
	scanf("%d",&s);
	
	switch(s){
		
	case 1:
		printf("Your balance is %d\n",balance);
		break;
    case 2:
    	printf("\nDeposit the money : ");
    	scanf("%d",&d);
    	balance=balance+d;
    	break;
    case 3:
    	printf("\nWithdrawl the cash : ");
    	scanf("%d",&withdrwl);
    	balance=balance-withdrwl;
    	break;
    case 4:
        printf("\nEnter the new pin : ");
        scanf("%d",&np);
        n=np;
        break;
//    case 5:
//        printf("\nEnter the new mobile no. : ");
//        scanf("%d",&m);
//        phone=m;
//        break;

//otp
    case 5:
    	printf("Enter the otp : ");
    	scanf("%d",&nm);
    	if(nm==otp){
    		printf("Enter the new mobile no. : ");
    		scanf("%d",&m);
    	printf("Enter the confirm otp : ");
    	scanf("%d",&cotp);
    		if(cotp==otp){
    			printf("Your mobile no. is changed successfully!!");
    			printf("Your mobile no. is %d\n",m);
    		}
    		else{
    			printf("Invalid ! Otp not matched\n");
			}
		}
		else{
			printf("Wrong otp\n");
		}
		phone=m;
		break;
    	
    
    case 6:
    	printf("Your mobile no. is %d",phone);
    	break;
    case 7:
        printf("Thank You !!");
        i++;
        break;
        
    default:
    	printf("!!ERROR!! Wrong Input!");
    	
	}//switch closed// 		  	
	
  }
  else{
  	printf("Invalid ! Wrong pin");
  }
  
  }//loop closed//
}
