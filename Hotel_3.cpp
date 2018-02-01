#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void design();
void available();
void feature();
void feature2();
void book();
void meal();
void cdetails();
void cancelation();
void checkout();
char typ[5][20]={"","SUPER DELUX","DELUX      ","GENERAL    "};
int chr[4]={0,1500,1000,700};
char av[4][10]={"","No","Yes","Yes"};
int av2[4]={0,1,0,0};
char cnm[4][20]={"","Sachin","N.A","N.A"};
int rno[4]={0,1,2,3};
int prd[4]={0,5,0,0};
char id[4][10];
char mn[4][10];
int psn[4];
char ctnm[5][20];
int days[3];
int rs=0;
int prsn[4]={0,1,0,0};
char fud[21][20]={" ","CHICKEN BIRIYANI","MUTTON BIRIYANI ","EGG  BIRIYANI   ","VEG  BIRIYANI   ","ALOO  PARATHA   ","GOOBI  PARATHA  ","PLAIN  PARATHA  ","MAKKAI   PARATHA ",
"PLAIN  ROTI     ","TANDOORI  ROTI","PLAIN  RICE","BASMATI  RICE   ","CHICKEN  CHAP   ","PANEER  MASALA  ","FISH CURRY","VEG CURRY","ALOO  MASALA    ","CHOCOLATE ICE CREAM","VANEELA ICE CREAM","LASSI         ",};
int fudprc[21]={0,150,350,100,90,40,40,30,30,20,50,60,100,130,50,50,120,100,30,30,20,};

int main()
{
	m1:
	m2:
	m3:
	m4:
	design();
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				int bk1;
				available();
				printf("\nPress 9 goto main manue.Else any key to Exit.\n");
                 scanf("%d",&bk1);
                 if(bk1==9)
                 goto m1;
                 else
                 exit(0);
                 
			}
			break;
		case 2:
			{
				int bk2;
				feature();
				printf("\nPress 9 goto main manue.Else any key to Exit.\n");
                 scanf("%d",&bk2);
                 if(bk2==9)
                 goto m2;
                 else
                 exit(0);
				
			}
			break;
			case 3:
				{
					int bk3;
					feature2();
					book();
				 printf("\nPress 9 goto main manue.Else any key to Exit.\n");
                 scanf("%d",&bk3);
                 if(bk3==9)
                 goto m3;
                 else
                 exit(0);	
				}
			break;
	    	case 4:
	    		{
	    			int bk4;
	    			meal();
	    		printf("\nPress 9 goto main manue.Else any key to Exit.\n");
                 scanf("%d",&bk4);
                 if(bk4==9)
                 goto m4;
                 else
                 exit(0);
	    		}
	    	break;
	    	case 5:
	    		{
	    		int bk5;
	    			cdetails();
	    			printf("\nPress 9 goto main manue.Else any key to Exit.\n");
                 scanf("%d",&bk5);
                 if(bk5==9)
                 goto m1;
                 else
                 exit(0);
	    			
	    		}
	    	break;
	    	case 6:
	    		{
	    			int bk6;
	    			cancelation();
	    			printf("\nPress 9 goto main manue.Else any key to Exit.\n");
                 scanf("%d",&bk6);
                 if(bk6==9)
                 goto m4;
                 else
                 exit(0);
	    		}
	    	break;
	    	case 7:
	    		{
	    		   int bk7;
	    			checkout();
	    			printf("\nPress 9 goto main manue.Else any key to Exit.\n");
                 scanf("%d",&bk7);
                 if(bk7==9)
                 goto m4;
                 else
                 exit(0);
	    		}
	    	break;
	    	case 8:
	    		{
	    			exit(0);
	    		}
	    	default:
	    		{
	    			printf("Invalid Input!");
	    		}
	    		
	}
}
void design()
{
    system(" COLOR 5F");
    printf("                        * * * * * * * * * * * * * * * * * * * * *");
	printf("\n\n\t\t\t*   Press 1 to Check Availabilty:       *");
	printf("\n\n\t\t\t*   Press 2 to Check Features of room:  *");
	printf("\n\n\t\t\t*   Press 3 to Book a room:             *");
	printf("\n\n\t\t\t*   Press 4 to Book Meal:               *");
	printf("\n\n\t\t\t*   Press 5 to Show customer details:   *");
	printf("\n\n\t\t\t*   Press 6 to Cancellation:            *");
	printf("\n\n\t\t\t*   Press 7 to Checkout from room:      *");
	printf("\n\n\t\t\t*   Press 8 to Exit:                    *");
	printf("");
	printf("");
	printf("\n");
	printf("\n                        * * * * * * * * * * * * * * * * * * * * *");
}
void available()
{
   printf("\n\n\n                          ROOM AVAILABILITY");
   printf("\n\n ---------------------------------------------------------------------------");
   printf("\nRoom No | Type       | Charges   |Availability|    Period     |  Customer Name|\n");
   printf("-----------------------------------------------------------------------------");
   for(int i=1;i<=3;i++)
   {
   	printf("\n\n%d.\t%s\t%d\t ",i,typ[i],chr[i]);
   
   if(av2[i]==1)
   printf("\tNo");
   else
   printf("\tYes");
   printf("\t\t%d",prd[i]);
   printf("\t%s",cnm[i]);
   }
   printf("\n");
   
   
}
void feature()
{
	int ch2,rt;
	sm1:
	feature2();
	scanf("%d",&ch2);
	if(ch2==1)
	{
		printf("                SUPER LUXURY                 \n");
		printf("---------------------------------------------");
		printf("\n Room number:  1\n");
       printf("\n Advance:       Rs.500\n");
       printf("\n             FEATURES OF THIS ROOM         ");
       printf("\n----------------------------------------------");
       printf("\n\n Room charges:  Rs.1500 per day");
       printf("\n\n 1. Bed :       2");
       printf("\n\n 2.Capacity:    Maximum 4 Persons");
       printf("\n\n 3.Balcony:     Yes     ");
       printf("\n-----------------------------------------------");
       printf("\n                     ADDITIONAL FEATURES         ");
       printf("\n------------------------------------------------");
       printf("\n\n 1.A/C:         Yes ");
       printf("\n\n 2.Geyser:      Yes ");
       printf("\n\n 3.TV :         Yes ");
       printf("\n-------------------------------------------------");
	}
	if(ch2==2)
	{
		printf("                LUXURY                 \n");
		printf("---------------------------------------------");
		printf("\n Room number:  2\n");
       printf("\n Advance:       Rs.500\n");
       printf("\n             FEATURES OF THIS ROOM         ");
       printf("\n----------------------------------------------");
       printf("\n\n Room charges:  Rs.1000 per day");
       printf("\n\n 1. Bed :       2");
       printf("\n\n 2.Capacity:    Maximum 3 Persons");
       printf("\n\n 3.Balcony:     No     ");
       printf("\n-----------------------------------------------");
       printf("\n                     ADDITIONAL FEATURES         ");
       printf("\n------------------------------------------------");
       printf("\n\n 1.A/C:         Yes ");
       printf("\n\n 2.Geyser:      No ");
       printf("\n\n 3.TV :         Yes ");
       printf("\n-------------------------------------------------");
	}
	if(ch2==3)
	{
		printf("                NORMAL                 \n");
		printf("---------------------------------------------");
		printf("\n Room number:  1\n");
       printf("\n Advance:       Rs.500\n");
       printf("\n             FEATURES OF THIS ROOM         ");
       printf("\n----------------------------------------------");
       printf("\n\n Room charges:  Rs.700 per day");
       printf("\n\n 1. Bed :       2");
       printf("\n\n 2.Capacity:    Maximum 4 Persons");
       printf("\n\n 3.Balcony:     No     ");
       printf("\n-----------------------------------------------");
       printf("\n                     ADDITIONAL FEATURES         ");
       printf("\n------------------------------------------------");
       printf("\n\n 1.A/C:         No ");
       printf("\n\n 2.Geyser:      No ");
       printf("\n\n 3.TV :         Yes ");
       printf("\n-------------------------------------------------");
	}
	if(ch2>3)
	{
		printf("Invalid Input!Press 0 to retry.Else any key to Exit.\n");
		scanf("%d",&rt);
		if(rt==0)
		goto sm1;
		else
		exit(0);
	}	
  }
  void feature2()
  	{
  	printf("Choose room type:\n\n");
	printf("Press 1 for Super Luxury\n");
	printf("Press 2 for Luxury\n");
	printf("Press 3 for General\n");
   }
  void book()
  {
  	pp1:
	int rm;char bb1[20];int cnfm;
	scanf("%d",&rm);
    if(av2[rm]==1 && rm<=3)
    printf("Room Already Booked.\n");
	if(av2[rm]==0 && rm<=3)
	{
		printf("Room Available:\n");
		printf("Enter Your Name:\n");
	    scanf("%s",cnm[rm]);
	    printf("Enter your Voter ID or PAN ID Number:\n");
	    scanf("%s",id[rm]);
	    printf("Enter Your Mobile Number:\n");
	    scanf("%s",mn[rm]);
	    printf("Enter the Number of Persons with you:\n");
	    scanf("%d",&psn[rm]);
	    if(psn[rm-1]>3)
	    {
	    printf("You have to buy extra Bed!  Rs:100/Bed\n");
	    printf("You have to pay extra Rs:%d\n",(psn[rm]-3)*100);
	    }
	    printf("Enter Your City name:");
	    scanf("%s",ctnm[rm]);
	    printf("Enter Number of Days you will Stay:\n");
	    scanf("%d",&prd[rm]);
	    printf("THANK YOU FOR YOUR DETAIL\n ");
	    printf("Press 1 to Conform and pay Rs.500.Else any key cancel.\n");
	    scanf("%d",&cnfm);
	    if(cnfm==1)
	    {
	    printf("Your Room has been Alloted.\n");
        av2[rm]=1;
        prd[2-1]=days[rm];
        prd[1]=5;
	    }
	    if(cnfm==0)
	    {
	    printf("Cancealed by Customer\n");
    	}
    
      }
    if(rm>3)
	{
    printf("Invalid Input!try Again\n");
    goto pp1;
    }
}
void meal()
{
	int fud1[20];int tmp1=0,tmp2=0,tmp3=0,tmp4=0,tmp5=0,rnum=0;char num[20];
	printf("---------------------MENU-----------------------\n");
	printf("SL.NO        ITEMS                     PRICE(Rs.)   \n\n");
	for(int i=1;i<=20;i++)
	{
	printf("%-10d%-30s%-25d\n",i,fud[i],fudprc[i]);
    }
    printf("------------------------------------------------\n");
    printf("Enter the Food Serial Numbers you want to buy.Wnen Finished Press 0.:\n");
    scanf("%d",&tmp1);
    if(tmp1==0)
    {
    printf("You Purchased Nothing.\n");
    goto fn;
    }
    if(tmp1!=0 && tmp1<=20)
    {
    printf("1.You have Selected:  %s  %d\n",fud[tmp1],fudprc[tmp1]);
    rs=rs+fudprc[tmp1];
    }
    scanf("%d",&tmp2);
    if(tmp2==0)
    {
    printf("Thank You for Purchasing.\n");
    goto fn2;
    }
    if(tmp2!=0 && tmp2<=20)
    printf("2.You have Selected:  %s  %d\n",fud[tmp2],fudprc[tmp2]);
    {
    scanf("%d",&tmp3);
    rs=rs+fudprc[tmp2];
    }
    if(tmp3==0)
    {
    printf("Thank You for Purchasing.\n");
    goto fn3;
    }
    if(tmp3!=0 && tmp3<=20)
    printf("3.You have Selected:  %s  %d\n",fud[tmp3],fudprc[tmp3]);
    {
    scanf("%d",&tmp4);
    rs=rs+fudprc[tmp3];
   }
    if(tmp4==0)
    {
    printf("Thank You for Purchasing.\n");
    goto fn4;
    }
    if(tmp3!=0 && tmp3<=20)
    printf("4.You have Selected:  %s  %d\n",fud[tmp4],fudprc[tmp4]);
    {
    scanf("%d",&tmp5);
    rs=rs+fudprc[tmp4];
    }
    if(tmp5==0)
    {
    printf("Thank You for Purchasing.\n");
    goto fn5;
    }
    if(tmp5!=0 && tmp5<=20)
    {
    printf("5.You have Selected:  %s  %d\n",fud[tmp5],fudprc[tmp5]);
    rs=rs+fudprc[tmp5];
    }
    fn:
    fn2:
    fn3:
    fn4:
    fn5:
    printf("\n");
    lolo:
    printf("Please Enter Your Room Number:\n");
    scanf("%d",&rnum);
	printf("please Enter Your Name:\n");
	scanf("%s",num);int flag=0;
	for(int d=0;d<3;d++)
	{
		if(num==cnm[d] || rnum==d+1)
		flag=1;
		
	}
	if(flag==1)
	printf("Your Order Conformed!It will be Delevered very soon.\nYour Food Cost Rs:%d\n",rs);
	else
	{
	printf("Invalid Name or room number.Please Try Again.\n");
	goto lolo;
   }
}
void cdetails()
{
	int room1;
	printf("Enter room number:\n");
	scanf("%d",&room1);
	if(room1==1)
	{
	    printf("ROOM NUMBER:       %d\n",room1);
		printf("CUSTOMER NAME:     Sachin\n");
		printf("PERIOD             3\n");
		printf("CITY               Delhi\n");
		printf("NUMBER OF MEMBERS: 1\n");
		printf("Contact No:        9091047997\n");
		printf("Voter ID:          GAT546\n");
	}
	if(room1<=3 && room1!=1 && av2[room1]==1)
	{
		printf("ROOM NUMBER:         %d\n\n",room1);
		printf("CUSTOMER NAME:       %s\n\n",cnm[room1]);
		printf("PERIOD:              %d\n\n",prd[room1]);
		printf("CITY :               %s\n\n",ctnm[room1]);
		printf("NUMBER OF MEMBERS:   %d\n\n",psn[room1]);
		printf("Contact No:          %s\n\n",mn[room1]);
		printf("Voter or PAN card No:%s\n\n",id[room1]);
		printf("--------------------------------------------");
	}
	else
	printf("Empty Room\n");
	if(room1>3)
	printf("Invalid Input\n");
	printf("\n");
}
void cancelation()
{
	int room2;char num2[20];
	printf("Enter Room Number:");
	scanf("%d",&room2);int copy=0;
    for(int g3=0;g3<=3;g3++)
    {
    	if(room2==rno[g3])
    	copy++;
    }
    if(copy>0)
    printf("Your Room Cancelled.You Have to pay Rs:%d\n",prd[room2]*chr[room2]);
    else
    printf("Invalid Room Number");
	
}
void checkout()
{
	int room3,copy2=0;
	printf("Enter Room Number:");
	scanf("%d",&room3);
	for(int g4=0;g4<=3;g4++)
    {
    	if((room3)==rno[g4])
    	copy2++;
    }
	if(copy2>0)
	{
	printf("Room Number:         %d\n",room3);
	printf("Customer Name:        %s\n",cnm[room3]);
    printf("Check Out Successful.\nYour bill is Rs:%d\n",rs+(chr[room3]*prd[room3]));
    printf("THANK YOU VISIT AGAIN\n");
   }
    else
    printf("Invalid Room Number\n");

}
    
    
    
  	

