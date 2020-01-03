#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CAPACITY 5
int crushed=0;
void login();
void sell();
void menu();
void crush_box();
void purchase();
/*void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}
void clrscr(void)
{
    system("clear");
}
char getch()
{
      char c; // This function should return the keystroke
      system("stty raw");    // Raw input - wait for only a single keystroke
      system("stty -echo");  // Echo off
      c = getchar();
      system("stty cooked"); // Cooked input - reset
      system("stty echo");   // Echo on - Reset
      return c;
} */
void crush_box(){
int i;
gotoxy(20,9);
	cprintf("%c",201);
	for(i=21;i<=58;i++){
	gotoxy(i,9);
	cprintf("%c",205);
	}
	gotoxy(i,9);
	cprintf("%c",187);
	for(i=10;i<=17;i++){
	gotoxy(20,i);
	cprintf("%c",186);
	}
	for(i=10;i<=17;i++){
	gotoxy(59,i);
	cprintf("%c",186);
	}
	gotoxy(20,i);
	cprintf("%c",200);
	for(i=21;i<=58;i++){
	gotoxy(i,18);
	cprintf("%c",205);
	}
	gotoxy(i,18);
	cprintf("%c",188);
	gotoxy(30,12);
	}
void purchase(){
	int i;
	gotoxy(20,9);
	cprintf("%c",201);
	for(i=21;i<=50;i++){
	gotoxy(i,9);
	cprintf("%c",205);
	}
	gotoxy(i,9);
	cprintf("%c",187);
	for(i=10;i<=17;i++){
	if(i==11){
	gotoxy(20,i);
	cprintf("%c",204);
	}
	else{
	gotoxy(20,i);
	cprintf("%c",186);
	}
	}
	for(i=10;i<=17;i++){
	if(i==11){
	gotoxy(51,i);
	cprintf("%c",185);
	}
	else{
	gotoxy(51,i);
	cprintf("%c",186);
	}
	}
	gotoxy(20,i);
	cprintf("%c",200);
	for(i=21;i<=50;i++){
	gotoxy(i,11);
	cprintf("%c",205);
	}

	for(i=21;i<=50;i++){
	gotoxy(i,18);
	cprintf("%c",205);
	}
	gotoxy(i,18);
	cprintf("%c",188);
	gotoxy(25,12);
	cprintf("sorry!!");
	gotoxy(25,13);
	cprintf("service not started yet");
	sleep(3);
	menu();
}
void sell(){
int i,op;
char crush;
	gotoxy(20,9);
	cprintf("%c",201);
	for(i=21;i<=58;i++){
	gotoxy(i,9);
	cprintf("%c",205);
	}
	gotoxy(i,9);
	cprintf("%c",187);
	for(i=10;i<=17;i++){
	if(i==11){
	gotoxy(20,i);
	cprintf("%c",204);
	}
	else{
	gotoxy(20,i);
	cprintf("%c",186);
	}
	}
	for(i=10;i<=17;i++){
	if(i==11){
	gotoxy(59,i);
	cprintf("%c",185);
	}
	else{
	gotoxy(59,i);
	cprintf("%c",186);
	}
	}
	gotoxy(20,i);
	cprintf("%c",200);
	for(i=21;i<=58;i++){
	gotoxy(i,11);
	cprintf("%c",205);
	}

	for(i=21;i<=58;i++){
	gotoxy(i,18);
	cprintf("%c",205);
	}
	gotoxy(i,18);
	cprintf("%c",188);
textcolor(15);
gotoxy(22,10);
cprintf("How many bottles you want to crush?");
gotoxy(25,13);
cscanf("%d",&op);
crushed=crushed+op;
clrscr();
if(crushed>CAPACITY){
crushed=crushed-op;
gotoxy(15,12);
cprintf("sorry!!MACHINE CAN CRUSHED ONLY %d BOTTLES",CAPACITY-crushed);
sleep(2);
clrscr();
sell();
}
else{
for(i=1;i<=op;i++){
textcolor(15);
crush_box();
gotoxy(30,12);
cprintf("insert bottle & press crush");
crush=getch();
sleep(1);
clrscr();
crush_box();
textcolor(i);
gotoxy(30,12);
cprintf("bottle is crushing");
gotoxy(30,13);
cprintf("\nwait for 3 seconds...");
sleep(2);
clrscr();
}
crush_box();
textcolor(15);
gotoxy(25,12);
cprintf("all %d bottle crushed",op);
gotoxy(25,14);
cprintf("rs %d is added to your wallet",op*3);
sleep(2);
clrscr();
crush_box();
gotoxy(25,12);
cprintf("Thank you for saving enviornment");
sleep(2);
clrscr();
}
}
void menu(){
	int i;
	char op;
	clrscr();
	gotoxy(20,9);
	cprintf("%c",201);
	for(i=21;i<=50;i++){
	gotoxy(i,9);
	cprintf("%c",205);
	}
	gotoxy(i,9);
	cprintf("%c",187);
	for(i=10;i<=17;i++){
	if(i==11){
	gotoxy(20,i);
	cprintf("%c",204);
	}
	else{
	gotoxy(20,i);
	cprintf("%c",186);
	}
	}
	for(i=10;i<=17;i++){
	if(i==11){
	gotoxy(51,i);
	cprintf("%c",185);
	}
	else{
	gotoxy(51,i);
	cprintf("%c",186);
	}
	}
	gotoxy(20,i);
	cprintf("%c",200);
	for(i=21;i<=50;i++){
	gotoxy(i,11);
	cprintf("%c",205);
	}

	for(i=21;i<=50;i++){
	gotoxy(i,18);
	cprintf("%c",205);
	}
	gotoxy(i,18);
	cprintf("%c",188);
	gotoxy(27,10);
	cprintf("Bottle Collection");
	gotoxy(22,12);
	cprintf("1. To sell waste bottle");
	gotoxy(22,14);
	cprintf("2. To purchase waste bottle");
	gotoxy(22,16);
	cprintf("3. To check ur status");
	op=getch();
	clrscr();
	switch(op){
	case '1':if(crushed==CAPACITY){
	gotoxy(15,12);
	cprintf("sory machine is overflow! can't collect bottles :)");
	menu();
	}
	else{
	sell();
	login();
	}
	break;
	case '2':purchase();
	break;
	case '3'://status();
	cprintf("status");
	break;
	}
}
void login(){
int flag=0,j;
char *fpin,fname;
char *pin;
FILE *fp;
clrscr();
gotoxy(25,12);
cprintf("enter your 4 digit smart no:");
for(j=0;j<6;j++){
pin[j]=getch();
cprintf("*");
}
fp=fopen("data.txt","r");
if(fp==0){
gotoxy(25,15);
cprintf("no such file");
}
else{
while(fscanf(fp,"%s",fpin)!=-1){
if(strcmp(fpin,pin)==0){
flag=1;
break;
}
else{
flag=0;
}
}
}
if(flag==1){
gotoxy(35,14);
cprintf("successful login");
sleep(3);
clrscr();
fscanf(fp,"%s",fname);
gotoxy(25,12);
cprintf("welcome %s",fname);
sleep(3);
fclose(fp);
clrscr();
menu();
}
else{
gotoxy(35,14);
fclose(fp);
cprintf("incorrect pin");
sleep(1);
login();
}
}
int main(void){
	login();
       return 0;
       }
