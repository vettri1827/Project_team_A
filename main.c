#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include "functions.h"
void score(int countr);
void test();
void main()
{
    char choice;
    char playername[20];
	mainhome();
	choice=toupper(getch());
    if(choice=='V')
	{
	    show_record();
	    mainhome();
	}
    else if(choice=='H')
	{
	    help();
        getch();
	    mainhome();
	}
	else if(choice=='R')
	{
        reset_score();
	    getch();
	    mainhome();
    }
	else if(choice=='Q')
	    exit(1);
    else if(choice=='S')
    {
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
		scanf("%s",playername);
		printf("\n ------------------  Welcome %19s to C Program Quiz Game --------------------------",playername);
		printf("\n\n Here are some tips you might wanna know before playing:");
		printf("\n -------------------------------------------------------------------------");
		printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
		printf("\n >> In warmup round you will be asked a total of 5 questions to test your");
		printf("\n    Basic knowledge in C. You are eligible to play the game if you give atleast 3");
		printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
		printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
		printf("\n    total of 10 questions. Each right answer will be awarded 1000/-Rs!");
		printf("\n    By this way you can win upto TEN THOUSAND cash prize!!!!!..........");
		printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
		printf("\n    right option.");
		printf("\n >> You will be asked questions continuously, till right answers are given");
		printf("\n >> No negative marking for wrong answers!");
		printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
		printf("\n\n\n Press Y  to start the game!\n");
		printf("\n Press any other key to return to the main menu!");

		if (toupper(getch())=='Y')
		{
			home();
		}
		else
		{
			mainhome();
		}
	}
}

void test(){
    printf("\n\n\t*** CONGRATULATION you are eligible to play the Game ***");
    printf("\n\n\n\n\t!Press any key to Start the Game!");
	getch();
    game();
}

void score(int countr){
	char playername[20];
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:");
	scanf("%19s",playername);
    float score=countr*1000;
	if(score>0.00 && score<10000.00)
	{
	    printf("\n\n\t\t**************** CONGRATULATION *****************");
	    printf("\n\t You won $%.2f",score);
        goto go;
    }
	else if(score==10000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION %s ****************",playername);
	    printf("\n\t\t\t\t YOU ARE A ONE AMONG THE MANY!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
    {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;
    }

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		home();
	else
	{
		edit_score(score,playername);
		mainhome();
    }
}
