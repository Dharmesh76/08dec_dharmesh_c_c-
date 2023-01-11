#include<stdio.h>
int main()


{
	int choice;
	printf("Welcome To Shree Namkeen\n");
	printf("Press 1 for Sweets\n");
	printf("press 2 for Namkeen\n");
	scanf("%d", &choice);
	int ch;

	switch (choice)
	{
		case 1:
			   printf("*********SWEETS***********\n");
			   printf("For ladoo press 1\n");
			   printf("For Jalebi press 2\n");
			   scanf("%d",&ch);			   
			   switch (ch)
			   {
			   	case 1:
			   		   printf("You purchase ladoo\n<----------------THANK YOU-------------->\n");
			   		   break;
			    case 2:
			    	   printf("you purchase Jalebi\n<----------------THANK YOU-------------->\n");
			    	   break;
			    default: 
				        printf("enter valid choice");	   
			
			   }
			                
			            
			   
			   
			   break;
		case 2: 
		       printf("***********NAMKEEN***********\n");
			   printf("for chips press 1\n");
			   printf("For Chevda press 2\n");
			   scanf("%d", &ch);
			   switch (ch)
			   { 
			      case 1:
			      	     printf("you purchase chips\n<------------THANK YOU------------>/n");
			      	      break;
                  case 2: 
				         printf("you purchase Chevda\n<----------------THANK YOU-------------->\n");
						 break;
					default:
					        printf("enter valid choice");	 		      	      
			   }
		default:
		        printf("enter valid choice");	     
			          
			   
	}
}

