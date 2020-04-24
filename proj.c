#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
void delay(int number_of_seconds) 
{ 
    int milli_seconds = 1000 * number_of_seconds; 
    clock_t start_time = clock(); 
    while (clock() < start_time + milli_seconds)
    	; 
}

 
void user();
void admin();
int admin_login();
void admin_menu();
char login[20],pass[12];
void runner()
{
int choice;

printf("\n\n\t\t\t\t\t\033[43;31m WELCOME TO TICKET BOOKING SERVICE  \033[0m\n");
	printf("\t\t\t\t\t\e[35;5m _________________________________ \e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m1)Admin      \e[0m \t\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m2)User        \e[0m\t\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|_________________________________|\e[0m\n");
	printf("\t\t\t\t\t\e[0;1mEnter your choice:");
	scanf("%d",&choice);

switch(choice)
{

case 1:
system("clear");
admin();
break;

case 2:
system("clear");
user();
break;

default:
printf("\n\n\t\t\t\t\t\e[0;1mWRONG INPUT!!! \n\n\t\t\t\t\t ENTER AGAIN");
runner();

}

}

void admin()
{
int a;
a=admin_login();
if(a)
{
admin_menu();
}
}

void user()
{
printf("working");
}




int admin_login()
{
printf("\n\n\t\t\t\t\t\033[43;31m -----LOG IN TO THE SYSTEM-----  \033[0m\n");
printf("\t\t\t\t\t\e[35;5m _________________________________ \e[0m\n");
printf("\n\t\t\t\t\t\e[0;1m USERNAME :");
scanf("%s",login);
printf("\t\t\t\t\t\e[0;1m PASSWROD:");
scanf("%s",pass);
printf("\t\t\t\t\t\e[35;5m _________________________________ \e[0m\n");
if((!(strcmp(login,"admin")))&&(!(strcmp(pass,"admin"))))return 1;
else
{
printf("\n\n\t\t\t\t\t\e[0;1mWRONG CREDENTIALS \n\n\n");
delay(3);
system("clear");
return 0;
}
}


void admin_menu()
{
int x;
system("clear");
	printf("\n\n\t\t\t\t\t\033[43;31m               ADMIN              \033[0m\n");
	printf("\t\t\t\t\t\e[35;5m _________________________________ \e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m1)Revenue    \e[0m \t\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m2)Service Update\e[0m\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m3)Vehicle Info\e[0m \t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m4)change password\e[0m\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m5)Back       \e[0m \t\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|_________________________________|\e[0m\n");
	printf("\t\t\t\t\t\e[0;1mEnter your choice:");
	scanf("%d",&x);
}


int main()
{
runner();
return 0;
}
