#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include"proj.h"
int choice;
vehicle vinput(vehicle v)
{
	printf("Enter Details:\n");
	printf("Bus Number(UP64XX1011):");
	fgets(v.number_plate,20,stdin);
	printf("Driver Name:");
	fgets(v.Dname,30,stdin);
	printf("Contact No.:");
    fgets(v.cont_number,11,stdin);
	fflush(stdin);
	printf("Seats:");
	scanf("%s",v.seats);
	getchar();
	printf("From:");
	fgets(v.from,20,stdin);
	printf("Departure Time:");
	fgets(v.dep_time,10,stdin);
	fflush(stdin);
	printf("To:");
	fgets(v.to,20,stdin);
	printf("Arrival Time:");
	fgets(v.arr_time,10,stdin);
	fflush(stdin);	
	return v;
}
void voutput(vehicle v)
{
	printf("\nBus Number(UP64XX1011):%s",v.number_plate);
	printf("Driver Name:%s",v.Dname);
	printf("Contact No.:%s",v.cont_number);
	printf("\nNo. of seats:%s",v.seats);
	printf("\nFrom:%s",v.from);
	printf("Departure Time:%s",v.dep_time);
	printf("To:%s",v.to);
	printf("Arrival Time:%s\n",v.arr_time);
		
}

void delay(int number_of_seconds) 
{ 
    int milli_seconds = 1000 * number_of_seconds; 
    clock_t start_time = clock(); 
    while (clock() < start_time + milli_seconds)
    	; 
}
char login[20],pass[12];
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

void runner()
{
	printf("\n\n\t\t\t\t\t\033[43;31m WELCOME TO TICKET BOOKING SERVICE  \033[0m\n");
	printf("\t\t\t\t\t\e[35;5m _________________________________ \e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m1)Admin      \e[0m \t\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m2)User        \e[0m\t\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m3)Exit        \e[0m\t\t\t  \e[35;5m|\e[0m\n");
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

	case 3:
		system("clear");
		exit(0);
	default:
		printf("\n\n\t\t\t\t\t\e[0;1mWRONG INPUT!!! \n\n\t\t\t\t\t ENTER AGAIN");
		runner();

}

}
int admin_login()
{
	system("clear");
	printf("\n\n\t\t\t\t\t\033[43;31m -----LOG IN TO THE SYSTEM-----  \033[0m\n");
	printf("\t\t\t\t\t\e[35;5m _________________________________ \e[0m\n");
	printf("\n\t\t\t\t\t\e[0;1m USERNAME :");
	scanf("%s",login);
	printf("\t\t\t\t\t\e[0;1m PASSWROD :");
	scanf("%s",pass);
	printf("\t\t\t\t\t\e[35;5m _________________________________ \e[0m\n");
	if((!(strcmp(login,"admin")))&&(!(strcmp(pass,"admin"))))
		return(1);
	else
	{
		printf("\n\n\t\t\t\t\t\e[0;1mWRONG CREDENTIALS \n\n\n");
		sleep(3);
		admin_login();
	}
}


void admin_menu()
{
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
	scanf("%d",&choice);
	switch(choice)
	{

		case 1:
			system("clear");
			break;

		case 2:
			system("clear");
			service_update();
			break;

		case 3:
			system("clear");
			break;

		case 4:
			system("clear");
			break;

		case 5:
			system("clear");
			runner();	
		default:
			printf("\n\n\t\t\t\t\t\e[0;1mWRONG INPUT!!! \t ENTER AGAIN");
			sleep(3);
			admin_menu();

	}
}
void service_update()
{
	vehicle v;
	char check_no[20];
	int found = 0;
	service:
	system("clear");
	printf("\n\n\t\t\t\t\t\033[43;31m              UPDATE              \033[0m\n");
	printf("\t\t\t\t\t\e[35;5m _________________________________ \e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m1)Show Buses \e[0m \t\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m2)Update        \e[0m\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m3)Add Bus     \e[0m \t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m4)Remove Bus     \e[0m\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|                                 |\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|\e[0;1m5)Back       \e[0m \t\t\t  \e[35;5m|\e[0m\n");
	printf("\t\t\t\t\t\e[35;5m|_________________________________|\e[0m\n");
	printf("\t\t\t\t\t\e[0;1mEnter your choice:");
	scanf("%d",&choice);
	getchar();
	switch(choice)
	{

		case 1:
			system("clear");
			FILE *in;
			int count = 0;
			in = fopen("Buses.dat","r");
			if(!in)
			{
				printf("\nError opened file\n");
				sleep(3);
				goto service;
			}
			while(fread(&v,sizeof(vehicle),1,in))
			{
				voutput(v);
				count++;
				if(count > 0 && count % 3 == 0)
				{
					printf("\n\nPress enter to continue");
					getchar();
					system("clear");
				} 
			}
			printf("\nNo more data\nPress enter to go back");
			getchar();
			fclose(in);
			goto service;
			

		case 2:
			system("clear");
			printf("\nEnter Bus number to delete record:");
			fgets(check_no,20,stdin);
			in = fopen("Buses.dat","r+");
			if(!in)
			{
				printf("\nError opened file\n");
				sleep(3);
				goto service;
			}			
			while(fread(&v,sizeof(vehicle),1,in))
			{
				if (strcmp (check_no, v.number_plate) == 0)
				{
					printf("\n\n\t\tThe record with requested Bus number found.\n\n");
					voutput(v);
					printf("\n\nEnter new details:\n\n");
					v = vinput(v);
					fseek(in, -1*sizeof(vehicle), SEEK_CUR);
					fwrite(&v,sizeof(vehicle),1,in);		
					printf("\n\nFile successfully Modified");
					printf("\nPress enter to go back");
					getchar();
					found=1;
				}
			}
				if (! found) 
				{
					printf("No record(s) found with the given bus number: %s\n\n", check_no);
					printf("Press enter to go back");
					getchar();
				}
				fclose(in);
				goto service;

		case 3:
			system("clear");
			FILE *out;
			out = fopen("Buses.dat","a");
			if(out == NULL)
			{
				printf("\nError opened file\n");
				sleep(3);
				goto service;
			}
			printf("\n");			
			v = vinput(v);
			fwrite(&v,sizeof(vehicle),1,out);
			printf("\n\nAdded successfully");
			printf("\nPress enter to go back");
			getchar();
			fclose(out);
			goto service;

		case 4:
			system("clear");
			FILE *temp;
			printf("\nEnter Bus number to delete record:");
			fgets(check_no,20,stdin);
			in=fopen("Buses.dat", "r");
			if (!in) 
			{
				printf("Unable to open file");
				sleep(2);
				goto service;
			}
			temp=fopen("tmp.dat", "w");
			if (!temp) 	
			{
				printf("Unable to open file temp file.");
				goto service;
			}
	
			while (fread(&v,sizeof(vehicle),1,in)) 
			{
				if (strcmp (check_no, v.number_plate) == 0) 
				{
					voutput(v);
					printf("\n\n\t\tThis record with requested Bus Number found and deleted.\n\n");
					printf("\n\n\t\tPress enter to continue");
					getchar();
					found=1;
				}
				else 
				{
					fwrite(&v, sizeof(vehicle), 1, temp);
				}
			}
			if (! found) 
			{
				printf("No record(s) found with the given bus number: %s\n\n", check_no);
				printf("\nPress enter to go back");
				getchar();
			}	
			fclose(in);
			fclose(temp);
			remove("Buses.dat");
			rename("tmp.dat", "Buses.dat");
			goto service;

		case 5:
			system("clear");
			admin_menu();	
		default:
			printf("\n\n\t\t\t\t\t\e[0;1mWRONG INPUT!!! \t ENTER AGAIN");
			goto service;
	}

}