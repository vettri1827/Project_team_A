#include "functions.h"
void show_record()
    {
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%19s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}
void reset_score()
    {
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%19s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%19s%.2f",nm,sc);
    fclose(f);}
void help()
	{
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded Rs.1000/-.");
    printf("\n    By this way you can win upto TEN THOUSAND cash prize in Rs...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");}
void edit_score(float score, char plnm[20])
	{
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%19s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%19s\n%.2f",plnm,sc);
	    fclose(f);}}
