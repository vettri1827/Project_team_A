#include "functions.h"

void game()
{
    int i,countr=0;
    for(i=1;i<=10;i++)
    {
        switch(i)
		{
		case 1:
		        printf("\n\nThe format identifier percent i is also used for _____ data type.");
		        printf("\n\nA.char\t\tB.int\n\nC.float\t\tD.double");
		        if (toupper(getch())=='B')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is B.int");
                    getch();
		            score(countr);
		            break;
                }
		case 2:
		        printf("\n\n\nWhich of the following is a User-defined data type?");
		        printf("\n\nA.typedef int Boolean;\t\tB.typedef enum {Mon, Tue, Wed, Thu, Fri} Workdays;\n\nC.struct {char name[10], int age};\t\tD.all of the mentioned");
		        if (toupper(getch())=='D')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is D.all of the mentioned");
                    getch();
		            score(countr);
		            break;
		        }

        case 3:
		        printf("\n\n\nWhat is the following is invalid header file in C?");
		        printf("\n\nA.math.h\t\tB.mathio.h\n\nC.string.h\t\tD.ctype.h");
		        if (toupper(getch())=='B')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is B.mathio.h");
                    getch();
		            score(countr);
		            break;
                }

        case 4:
		        printf("\n\n\nWhat is the number of characters used to distinguish Identifier or Names of Functions and Global variables.?");
		        printf("\n\nA.31\t\tB.32\n\nC.33\t\tD.28");
		        if (toupper(getch())=='A')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is A.31");
                    getch();
		            score(countr);
		            break;
		        }
        case 5:
		        printf("\n\n\nEach statement in a C program should end with.?");
		        printf("\n\nA.Semicolon ;\t\tB.Colon :\n\nC.Period . (dot symbol)\t\tD.None of the above.");
		        if (toupper(getch())=='A')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
                }
		        else
		        {
		            printf("\n\nWrong!!! The correct answer is A.Semicolon ;");
		            getch();
		            score(countr);
		            break;
		        }
		case 6:
		        printf("\n\n\nA function which calls itself is called a ___ function.");
		        printf("\n\nA. Self Function\t\tB.Auto Function\n\nC.Recursive Function\t\tD.Static Function");
		        if (toupper(getch())=='C' )
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is C.Recursive Function");
		            getch();
                    score(countr);
		            break;
                }
        case 7:
		        printf("\n\n\nHow many values can a C Function return at a time.?");
		        printf("\n\nA. Only One Value\t\tB.Maximum of two values\n\nC.Maximum of three values\t\tD.Maximum of 8 values");
		        if (toupper(getch())=='A')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is A. Only One Value");
                    getch();
		            score(countr);
		            break;
                }
        case 8:
		        printf("\n\n\nWhat is the value of an array element which is not initialized.?");
		        printf("\n\nA.By default Zero 0\t\tB.1\n\nC.Depends on Storage Class\t\tD.None of the above.");
		        if (toupper(getch())=='C')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch(); 
                    break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is C.Depends on Storage Class");
                    getch();
		            score(countr);
		            break;
                }
        case 9:
		        printf("\n\n\nWhat are the types of data allowed inside a structure.?");
		        printf("\n\nA.int, float, double, long double\t\tB.char, enum, union\n\nC.pointers and Same structure type members\t\tD.All the above");
		        if (toupper(getch())=='D')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is D.All the above");
                    getch();
		            score(countr);
		            break;
                }
        case 10:
		        printf("\n\n\nWhat is the input file in a C program building process.?");
		        printf("\n\nA.filename.k\t\tB.filename.cpp\n\nC.filename.c\t\tD.filename.p");
		        if (toupper(getch())=='C')
			    {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch(); 
                    break;
                }
		        else
		        {
                    printf("\n\nWrong!!! The correct answer is C.filename.c");
                    getch();
                    score(countr);
                    break;
                }
        }
    }
    score(countr);
}
