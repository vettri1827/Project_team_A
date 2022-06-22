#include "functions.h"
void home()
{
        int count=0,i,r1;
        for(i=1;i<=5;i++)
        {
            int r1=i;
            switch(r1)
		    {
		    case 1:
		            printf("\n\nWhich of the following is not a valid variable name declaration?");
		            printf("\n\nA.int _a3;\t\tB. int a_3\n\nC.int 3_a\t\tD.int _3a");
		            if (toupper(getch())=='C')
			        {
			            printf("\n\nCorrect!!!");
                        count++;
			            break;
                    }
		            else
		            {
		                printf("\n\nWrong!!! The correct answer is C.int 3_a");
		                break;
		            }

            case 2:
		            printf("\n\n\n All keywords in C are in ____________");
		            printf("\n\nA.LowerCase letters\t\tB.UpperCase letters\n\nC.CamelCase letters\t\tD.None of the mentioned");
		            if (toupper(getch())=='A')
			        {
                        printf("\n\nCorrect!!!");
                        count++;
			            break;
                    }
		            else
		            {
                        printf("\n\nWrong!!! The correct answer is A.LowerCase letters");
		                break;
                    }

            case 3:
		            printf("\n\n\nFind an integer constant.");
		            printf("\n\nA.3.145\t\tB.34\n\nC.125.00\t\tD.0.5");
		            if (toupper(getch())=='B')
			        {
                        printf("\n\nCorrect!!!");
                        count++;
			            break;
                    }
		            else
		            {
                        printf("\n\nWrong!!! The correct answer is B.34");
		                break;
                    }
            case 4:
		            printf("\n\n\nWho invented C Language?");
		            printf("\n\nA.Charles Babbage\t\tB.Grahambel\n\nC.Dennis Ritchie\t\tD.Steve Jobs");
		            if (toupper(getch())=='C')
			        {
                        printf("\n\nCorrect!!!");
                        count++;
			            break;
                    }
		            else
		            {
                        printf("\n\nWrong!!! The correct answer is C.Dennis Ritchie");
		                break;
                    }
            case 5:
                    printf("\n\n\nC is a which level language.?");
                    printf("\n\nA.Low Level\t\tB.High Level\n\nC.Low + High\t\tD.None");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        count++;
                        break;
                    }
                    else
		            {
                        printf("\n\nWrong!!! The correct answer is B.High Level");
		                break;
                    }
            }
        }
        if(count>=3)
	        test();
	    else
	    {
	        printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getch();
	        mainhome();
	    }
}
