



#include <stdio.h>
#include <conio.h>
#include<string.h>
struct air
{ char name[20];
  int phno;
  char address[50];
  int ticketno;

  }s;
void view();
void reserve();
void cancel();
void form();
void menu()
{ int ch;
clrscr();
printf("\tRAILWAY RESERVATION SYSTEM");
printf("\n\n1.VIEW ALL TRAINS");
printf("\n\n2.RESERVE A TICKET");
printf("\n\n3.CANCEL A TICKET");
printf("\n\n4.exit ");
printf("\nEnter your choice(1,2,3or4)");
scanf("%d",&ch);
switch(ch)
{ case 1: view();
 getch();
 menu();
 break;
  case 2: reserve();
  getch();
  menu();
  break;
  case 3: cancel();
getch();
menu();
break;
  case 4:exit();
break;
  default:printf("\nenter a valid choice");
}}
void view()
{ clrscr();
  printf("CODE    ROUTE TIMINGS   ");
  printf("\n1021 Delhi to Mumbai                06:30      ");
  printf("\n1024    Delhi to kolkata       12:00   ");
  printf("\n1098 Delhi to Amritsar 14:30   ");
  printf("\n1987 Delhi to Banglore 18:00      ");
  printf("\n1576 Delhi to chennai        20:00      ");

  getch();

}

void form()
{
 printf("\nEnter the name");
 scanf("%s",&s.name);
 printf("\nEnter the phone number");
 scanf("%d",&s.phno);
 printf("\n Enter the address");
 scanf("%s",&s.address);
 printf("\n\Enter the seat no");
 scanf("%d",&s.ticketno);
 printf("Your ticket is confirmed");
 getch();
}
void reserve()
{ int code,total_seats=100,reserved=0,class;
  clrscr();
  if(reserved<total_seats)
  {  reserved++;
   printf("Enter the train code");
   scanf("%d",&code);
   if(code==1021||code==1024||code==1098||code==1987||code==1576)
    { clrscr();
     printf("\n 1.first class(fare Rs1500 )");
     printf("\n 2.second class(fare Rs800)");
     printf("\n 3.sleeper class(fare Rs500)");
     scanf("%d",&class);
       if(class==1)
       {clrscr();

printf("Your fare is Rs.1500");
form();
menu();
       }
       else if(class==2)
       {clrscr();
printf("\nYour fare is Rs.800");
form();
menu();
       }
       else if(class==3)
       {clrscr();
       printf("\n Your fare is Rs.500");
form();
menu();
       }
       else
       { clrscr();
printf("Enter vali choice(1,2or 3)");
menu();
       }
 getch();
}
else
 printf("WARNING!YOU HAVE ENTERED THE WRONG CODE");

}
}
void cancel()
{int ticket;
 char ch;
 clrscr();
printf("enter the ticket no");
scanf("%d",&ticket);
 if(ticket==s.ticketno)
  {  printf("your ticket is cancelled");
 getch();
   }
 else
 {printf("ticket no is invalid");
  getch();
 menu();
}}
void main()
{
clrscr();
       printf("\n  WELCOME TO RAILWAY RESERVATION SYSTEM");
getch();
menu();
}
