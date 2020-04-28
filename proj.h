typedef struct vehicle
{
	char number_plate[20];
	char Dname[30];
	char cont_number[11];
	char from[20];
	char to[20];
	char arr_time[10];
	char dep_time[10];
	char seats[5];

}vehicle;
vehicle vinput(vehicle );
void voutput(vehicle );
void delay(int );
void user();
void admin();
int admin_login();
void admin_menu();
void runner();
void service_update();















