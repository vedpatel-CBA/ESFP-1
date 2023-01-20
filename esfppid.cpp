#include <stdio.h>
#include<string.h>
int input();

int main()
{
	printf("PLEASE LOGIN HERE\n\n");
	char id[50];

User:

printf("Enter your id:");

scanf("%s", &id);

if (strcmp(id,"ved")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"ved12345")==0)


{

printf("You have successfully logged in \n\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

}



	printf("1.GET INFO ABOUT YOUR CROPS\n");
	printf("2.GET UPADATED WITH LATEST GOVERNMENT SCHEMES AND AIDS\n");
	printf("3.CONTACT WITH OUR BEST EXPERTS\n\n");
	int choice, num;
	choice:
	printf("ENTER YOUR CHOICE:");
	
	
	choice = input();
	
	switch (choice) {
	char hlo,hii;
	hlo:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&hii);
	if(hii=='y' || hii=='Y')
	{
		goto choice1;
	}
	else
	{
	    goto choice;	
	}
	  char a,b;
	a:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&b);
	if(b=='y' || b=='Y')
	{
		goto choice2;
	}
	else
	{
	    goto choice;	
	}
	char c,d;
	c:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&d);
	if(b=='y' || b=='Y')
	{
		goto choice3;
	}
	else
	{
	    goto choice;	
	}	
		
	case 1: {
				printf("\nPLEASE SELECT CROP TO GET INFO\n\n");
			printf("1.WHEAT\n");
			printf("2.MAIZE\n");
			printf("3.RICE\n");
			printf("4.MILLET\n");
			printf("5.APPLE\n");
			printf("6.MANGO\n");
			printf("7.PINEAPPLE\n");
			printf("8.CAULIFLOWER\n");
			printf("9.TOMATO\n");
			printf("10.ONION\n\n");
		    
		    int choice1;
		    choice1:
		    printf("ENTER YOUR CHOICE for CROP:");
		    scanf("%d",&choice1);
			if(choice1==1)
			{
				printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 } 
			 else if(choice1==2)
			 {
			 	printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			  else if(choice1==3)
			 {
			 		printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			  else if(choice1==4)
			 {
			 	printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			  else if(choice1==4)
			 {
			 	printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			  else if(choice1==5)
			 {
			 	printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			  else if(choice1==6)
			 {
			 	printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			  else if(choice1==7)
			 {
			 	printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			   else if(choice1==8)
			 {
			 		printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			   else if(choice1==9)
			 {
			 	printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
			   else if(choice1==10)
			 {
			 	printf("\nREQUIRED CEREDENTIALS:\n");
				printf("TEMPERATURE:20-25 CELSIUS\n");
				printf("CLIMATE:WARM\n");
				printf("BEST HARVESTING PERIOD:APRIL\n\n");
				goto hlo;
			 }
		    else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
		    
		
	}
	case 2: {
            	printf("PLEASE SELECT ANY SCHEME OR PROGRAM FOR MORE INFORMATION\n\n");
				printf("1.Pradhan Mantri Krishi Sinchai Yojana\n");
				printf("2.PM Kisan Maan Dhan Yojana\n");
				printf("3.Pradhan Mantri Kisan Samman Nidhi\n");
				printf("4.Pradhan Mantri Fasal Bima Yojana\n");
				printf("5.National Agriculture Infra Financing Facility\n");
				printf("6.Kisan Credit Card\n\n");
				int choice2;
				choice2:
		        printf("ENTER YOUR CHOICE for PROGRAM AND SCHEMES:");
                scanf("%d",&choice2);
  
                
                if(choice2==1)
                {
                	
					printf("\nHar Khet ko Pani Prime Minister Krishi Sinchayee Yojana Government of India is committed to accord high priority to water conservation and its management.To this effect Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) has been formulated with the vision of extending the coverage of irrigation  Har Khet ko pani  and improving water use efficiency  More crop per drop' in a focused manner with end to end solution on source creation, distribution, management, field application and extension activities. The Cabinet Committee on Economic Affairs chaired by Hon ble Prime Minister has accorded approval of Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) in its meeting held on 1st July, 2015.\n\n");
					goto a;
				 }
				  if(choice2==2)
                {
                	
					printf("Har Khet ko Pani Prime Minister Krishi Sinchayee Yojana Government of India is committed to accord high priority to water conservation and its management.To this effect Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) has been formulated with the vision of extending the coverage of irrigation  Har Khet ko pani  and improving water use efficiency  More crop per drop' in a focused manner with end to end solution on source creation, distribution, management, field application and extension activities. The Cabinet Committee on Economic Affairs chaired by Hon ble Prime Minister has accorded approval of Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) in its meeting held on 1st July, 2015.\n\n");
					goto a;
				 }
				  if(choice2==3)
                {
                	
					printf("Har Khet ko Pani Prime Minister Krishi Sinchayee Yojana Government of India is committed to accord high priority to water conservation and its management.To this effect Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) has been formulated with the vision of extending the coverage of irrigation  Har Khet ko pani  and improving water use efficiency  More crop per drop' in a focused manner with end to end solution on source creation, distribution, management, field application and extension activities. The Cabinet Committee on Economic Affairs chaired by Hon ble Prime Minister has accorded approval of Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) in its meeting held on 1st July, 2015.\n\n");
					goto a;
				 }
				  if(choice2==4)
                {
                	
					printf("Har Khet ko Pani Prime Minister Krishi Sinchayee Yojana Government of India is committed to accord high priority to water conservation and its management.To this effect Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) has been formulated with the vision of extending the coverage of irrigation  Har Khet ko pani  and improving water use efficiency  More crop per drop' in a focused manner with end to end solution on source creation, distribution, management, field application and extension activities. The Cabinet Committee on Economic Affairs chaired by Hon ble Prime Minister has accorded approval of Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) in its meeting held on 1st July, 2015.\n\n");
					goto a;
				 }
				  if(choice2==5)
                {
                	
					printf("Har Khet ko Pani Prime Minister Krishi Sinchayee Yojana Government of India is committed to accord high priority to water conservation and its management.To this effect Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) has been formulated with the vision of extending the coverage of irrigation  Har Khet ko pani  and improving water use efficiency  More crop per drop' in a focused manner with end to end solution on source creation, distribution, management, field application and extension activities. The Cabinet Committee on Economic Affairs chaired by Hon ble Prime Minister has accorded approval of Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) in its meeting held on 1st July, 2015.\n\n");
					goto a;
				 }
				  if(choice2==6)
                {
                	
					printf("Har Khet ko Pani Prime Minister Krishi Sinchayee Yojana Government of India is committed to accord high priority to water conservation and its management.To this effect Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) has been formulated with the vision of extending the coverage of irrigation  Har Khet ko pani  and improving water use efficiency  More crop per drop' in a focused manner with end to end solution on source creation, distribution, management, field application and extension activities. The Cabinet Committee on Economic Affairs chaired by Hon ble Prime Minister has accorded approval of Pradhan Mantri Krishi Sinchayee Yojana (PMKSY) in its meeting held on 1st July, 2015.\n\n");
					goto a;
				 }
				  else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
			case 3:{
				printf("\nPLEASE SELECT CHOICE TO CONNECT WITH OUR EXPERT \n\n");
			printf("1.SOIL EXPERT\n");
			printf("2.FERTILIZERS EXPERT\n");
			printf("3.FINANCIAL EXPERT\n");
			printf("4.LOGISTICS AND EQUIPMENTS EXPERT\n");
		
		    
		    int choice3;
		    choice3:
		    printf("ENTER YOUR CHOICE for CROP:");
		    scanf("%d",&choice3);
			if(choice3==1)
			{
				
				printf("MOB:1234567890\n");
				printf("E-MAIL:ved8642@gmail.com\n");
				printf("SOCIAL:ved.linkedin\n\n");
				goto c;
			 } 
			 else if(choice3==2)
			 {
			 		printf("MOB:1234567890\n");
				printf("E-MAIL:ved8642@gmail.com\n");
				printf("SOCIAL:ved.linkedin\n\n");
			
				goto c;
			 }
			  else if(choice3==3)
			 {
			 		printf("MOB:1234567890\n");
				printf("E-MAIL:ved8642@gmail.com\n");
				printf("SOCIAL:ved.linkedin\n\n");	
			
				goto c;
			 }
			   else if(choice3==4)
			 {
			 		printf("MOB:1234567890\n");
				printf("E-MAIL:ved8642@gmail.com\n");
				printf("SOCIAL:ved.linkedin\n\n");	
			
				goto c;
			 }
			 else
		    {
		    	printf("SORRY WRONG CHOICE");
			}

			}

				 
				 break;
		
		
	}
	
	default:
		printf("wrong Input\n");
	}





return 0;
}


int input(){

    int number;
    scanf("%d", &number);
    return (number);
}
