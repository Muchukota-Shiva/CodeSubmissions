/* this question is asking me to make a guess the number game
you basically ask input from within 1-20 and ask person to guess it
aslo mention if they are above it or below it , plus how error if they enter anything outside of 1-20 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed 
int main()
{
	//enum ans{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int num = 0 , randnum = 0 , guessnum = 0;
	// tries is tries done , num is num guessed , randnum is num gen , guessnum is the number of guess left
	time_t t; // from time.h
	
	// initialisation of random number
	srand((unsigned) time(&t));

	// get the random number 
	randnum = rand()%21;

	printf("this is a guessing game.\ni chose a number between 1-20.\n try guessing it :p\n\n\n");
	printf("hello this is a new code i am writing ");
	// logic for the upcoming loop , 5 tries , guess num will get -1 each time. leave after it reaches 0
	for(guessnum = 5 ; guessnum>0 ; --guessnum )
	{
		printf("\nYou have %d tr%s left.", guessnum, guessnum == 1 ? "y" : "ies");
		// wtf is above [telmentery] ? %s after the tr will change on basis of guessnum. if suessnum = 1 then print try otherwise ies cuz prural
		printf("\nguess a number - ");
		scanf("%d",&num);
		//
		if(num == randnum)
		{
			printf("\ncongratulations . You guessed it \n");
			break;

		}
		else if(num<0 || num>20) // || is or , checking for valid guess
		{
			printf("i said the number is between 1 and 20 :| \n");
			guessnum+=1;
		}
		else if(randnum>num)
		{
			printf("sorry , %d is worng. My number is greater than that",num);
		}
		else if(randnum<num)
		{
			printf("sorry , %d is wrong. My number is smaller than that",num);
		}
	}
	//loop ended
	printf("you had five tries and failed. the number is %d",randnum);
	return 0;
}
/*  el finis  */