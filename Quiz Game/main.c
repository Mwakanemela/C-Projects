#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void show_record();
void reset_score();
void help();
void edit_score(float, char[]);

int main()
{
	int counter, r, r1, count, i, n;
	float score;
	char choice;
	char playername[20];
	mainhome:
	system("cls");
	
	printf("\t\t\t C Program Quiz Game\n");
	printf("\n\t\t________________________________________");
	
	printf("\n\t\t\t WELCOME ");
	printf("\n\t\t\t to ");
	printf("\n\t\t\t THE GAME ");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t BECOME A MILLIONAIRE!!!!!!!!!!!!! ");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	
	printf("\n\t\t > Press S to start the game");
	printf("\n\t\t > Press V to view the highest score");
	printf("\n\t\t > Press R to reset score");
	printf("\n\t\t > Press H for help");
	printf("\n\t\t > Press Q to quit");
	printf("\n\t\t________________________________________");
	
	choice = toupper(getch());
	if(choice == 'V')
	{
		show_record();
		goto mainhome;
	}
	else if(choice == 'H')
	{
		help();
		getch();
		goto mainhome;
	}
	else if(choice == 'R')
	{
		reset_score();
		getch();
		goto mainhome;
	}
	else if(choice == 'Q')
	{
		exit(1);
	}
	else if(choice == 'S')
	{
		system("cls");
		
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t Register your name: ");
		gets(playername);
		
		system("cls");
		
		printf("\n---------------------- Welcome %s to C Program Quiz Game ----------------", playername);
		
		printf("\n\n Here are some tips you might wanna know before playing:");
		printf("\n--------------------------------------------------------------------------------");
		printf("\n >> There are 2 rounds in this Quiz Game, WARMUP ROUND and CHALLENGE ROUND");
		printf("\n >> In warmup round you will be asked 3 questions to test your");
		printf("\n general knowledge. You are eligible to play CHALLENGE ROUND if you give atleast 2");
		printf("\n right answers, otherwise you cannot proceed further to the CHALLENGE ROUND.");
		printf("\n >> Your game starts with CHALLENGE ROUND. In this round you will be asked a");
		printf("\n total of 10 questions. Each right answer will be awarded K100, 000!");
		printf("\n By this way you can win upto ONE MILLION KWACHA cash prize!!!!.......");
		printf("\n >> You will be given 4 options and you have to press A, B, C, or D for the");
		printf("\n right option.");
		printf("\n >> You will be asked question continously, till right answers are given");
		printf("\n >> No negative marking for wrong answers!");
		
		printf("\n\n\t!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!");
		
		printf("\n\n\n Press Y to start the game!\n");
		printf("\n Press any other key to return to the main menu!");
		
		if(toupper(getch()) == 'Y')
		{
			goto home;
		}
		else
		{
			goto mainhome;
			system("cls");
		}
		
		home:
			system("cls");
			count = 0;
			for(i = 1; i <= 3; i++)
			{
				system("cls");
				r1 = i;
				
				switch(r1)
				{
					case 1: 
							printf("\n\n Which of the following is a Palindrome number?");
							printf("\n\n A. 42042 \t\t B. 101010 \n\n C. 23232 \t\t D. 01234");
							
							if(toupper(getch()) == 'C')
							{
								printf("\n\n Correct!!!");
								count++;
								getch();
								break;
							}
							else 
							{
								printf("\n\n Wrong!!! The correct answer is C. 23232");
								getch();
								break;
							}
							
					case 2: 
							printf("\n\n The country with the highest environmental performance index is....");
							printf("\n\n A. Malawi \t\t B. Denmark \n\n C. Switzerland \t\t D. Finland");
							
							if(toupper(getch()) == 'C')
							{
								printf("\n\n Correct!!!");
								count++;
								getch();
								break;
							}
							else 
							{
								printf("\n\n Wrong!!! The correct answer is C. Switzerland");
								getch();
								break;
							}
							
					case 3: 
							printf("\n\n Which animal laughs like a human being?");
							printf("\n\n A. Bear \t\t B. Hyena \n\n C. Donkey \t\t D. Chimpanzee");
							
							if(toupper(getch()) == 'B')
							{
								printf("\n\n Correct!!!");
								count++;
								getch();
								break;
							}
							else 
							{
								printf("\n\n Wrong!!! The correct answer is B. Hyena");
								getch();
								break;
							}
					
					case 4: 
							printf("\n\n What is the group of frogs known as?");
							printf("\n\n A. Traffic \t\t B. Toddler \n\n C. A Police \t\t D. An Army");
							
							if(toupper(getch()) == 'D')
							{
								printf("\n\n Correct!!!");
								count++;
								getch();
								break;
							}
							else 
							{
								printf("\n\n Wrong!!! The correct answer is D. An Army");
								getch();
								break;
							}									
									
				}	
			}
			
			
			if(count >= 2)
			{
				goto test;
			}
			else 
			{
				system("cls");
				printf("\n\n Sorry You Are Not Eligible To Play This Game, Better Luck Next Time");
				getch();
				goto mainhome;
			}
			
			test:
				system("cls");
				printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***", playername);
				printf("\n\n\n\n\t!Press any key to Start the Game!");
				if(toupper(getch()) == 'P')
				{
					goto game;
				}
				
				game:
					counter = 0;
					for(i = 1; i <= 10; i++)
					{
						system("cls");
						r = i;
						
						switch(r)
						{
							case 1:
								printf("\n\n What is the National Game of England?");
								printf("\n\n A. Football \t\t B. Basketball \n\n C. Cricket \t\t D.Baseball");
								if(toupper(getch()) == 'C')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is C. Cricket");
									getch();
									goto score;
									break;
								}
								
							case 2:
								printf("\n\n Study of Earthquake is called........,");
								printf("\n\n A. Seismology \t\t B. Cosmology \n\n C. Orology \t\t D. Etimology");
								if(toupper(getch()) == 'A')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is A. Seismology");
									getch();
									goto score;
									break;
								}
									
							case 3:
								printf("\n\n Among the top 10 highesy peaks in the world, how many lie in Nepal?");
								printf("\n\n A. 6 \t\t B. 7 \n\n C. 8 \t\t D. 9");
								if(toupper(getch()) == 'C')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
									getch();
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is C. 8");
									getch();
									goto score;
									break;
								}
							
							case 4:
								printf("\n\n The laws of Electromagnetic Induction were given by?");
								printf("\n\n A. Faraday \t\t B. Tesla \n\n C. Maxwell \t\t D. Coulomb");
								if(toupper(getch()) == 'A')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
									
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is A. Faraday");
									getch();
									goto score;
									break;
								}
							
							case 5:
								printf("\n\n In what unit is electric power measured?");
								printf("\n\n A. Coulomb \t\t B. Watt \n\n C. Power \t\t D. Units");
								if(toupper(getch()) == 'B')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
									
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is B. Watt");
									getch();
									goto score;
									break;
								}
								
							case 6:
								printf("\n\n Which element is found in Vitamin B12?");
								printf("\n\n A. Zinc \t\t B. Cobalt \n\n C. Calcium \t\t D. Iron");
								if(toupper(getch()) == 'B')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
									
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is B. Cobalt");
									getch();
									goto score;
									break;
								}
							
							case 7:
								printf("\n\n What is the National of Japan?");
								printf("\n\n A. Polska \t\t B. Hellas \n\n C. Drukyul \t\t D. Nippon");
								if(toupper(getch()) == 'D')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
									
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is D. Nippon");
									getch();
									goto score;
									break;
								}
							
							case 8:
								printf("\n\n How many times a piece of paper can be folded at the most?");
								printf("\n\n A. 6 \t\t B. 7 \n\n C. 8 \t\t D. Depends on paper size");
								if(toupper(getch()) == 'B')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
									
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is B. 7");
									getch();
									goto score;
									break;
								}						
									
							case 9:
								printf("\n\n What is the capital of Denmark?");
								printf("\n\n A. Copenhagen \t\t B. Helsinki \n\n C. Ajax \t\t D. Galatasaray");
								if(toupper(getch()) == 'A')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
									
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is A. Coppenhagen");
									getch();
									goto score;
									break;
								}
								
							case 10:
								printf("\n\n Which is the longest River in the world?");
								printf("\n\n A. Nile \t\t B. Koshi \n\n C. Ganga \t\t D. Amazon");
								if(toupper(getch()) == 'A')
								{
									printf("\n\n Correct!!!");
									counter++;
									getch();
									break;
									
								}
								else 
								{
									printf("\n\n Wrong!!! The correct answer is A. Nile");
									getch();
									goto score;
									break;
								}
							
							
						}
					}
					
					score:
						system("cls");
						score = (float) counter * 100000;
						if(score > 0.00 && score < 1000000)
						{
							printf("\n\n\t\t *************** CONGRATULATIONS *******************");
							printf("\n\t You won K%.2f", score);
							goto go;
						}
						else if(score == 1000000.00)
						{
							printf("\n\n\n \t\t ***********CONGRATULATIONS *****************");
							printf("\n\t\t\t\t YOU ARE A MILLIONAIRE !!!!!!!!!!!");
							printf("\n\t\t You won L%.2f", score);
							printf("\t\t Thank You!!");
						}
						else 
						{
							printf("\n\n\t *********** SORRY YOU DIDNOT WIN ANY CASH ***********");
							printf("\n\t\t Thanks for your participation");
							printf("\n\t\t TRY AGAIN");
							goto go;
						}
			
			go:
				puts("\n\n Press Y if you want to play again");
				puts(" Press any key if you want to go main menu");
				if(toupper(getch()) == 'Y')
				{
					goto home;
				}
				else
				{
					edit_score(score, playername);
					goto mainhome;	
				}		
	}	
	
}	

void show_record()
{
	system("cls");
	char name[20];
	float score;
	FILE *f;
	
	f = fopen("score.txt", "r");
	fscanf(f, "%s%f", &name, &score);
	printf("\n\n\t\t******************************************");
	
	printf("\n\n\t\t %s has secured the Highest Score %0.2f", name, score);
	printf("\n\n\t\t******************************************");
	
	fclose(f);
	getch();
}

void reset_score()
{
	system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f = fopen("score.txt", "r+");
	fscanf(f, "%s%f", &nm, &sc);
	sc = 0;
	fprintf(f, "%s, %.2f", nm, sc);
	fclose(f);
}

void help()
{
	system("cls");
	printf("\n\n t\t HELP");
		
		printf("\n\n Here are some tips you might wanna know before playing:");
		printf("\n--------------------------------------------------------------------------------");
		printf("\n >> There are 2 rounds in this Quiz Game, WARMUP ROUND and CHALLENGE ROUND");
		printf("\n >> In warmup round you will be asked 3 questions to test your");
		printf("\n general knowledge. You are eligible to play CHALLENGE ROUND if you give atleast 2");
		printf("\n right answers, otherwise you cannot proceed further to the CHALLENGE ROUND.");
		printf("\n >> Your game starts with CHALLENGE ROUND. In this round you will be asked a");
		printf("\n total of 10 questions. Each right answer will be awarded K100, 000!");
		printf("\n By this way you can win upto ONE MILLION KWACHA cash prize!!!!.......");
		printf("\n >> You will be given 4 options and you have to press A, B, C, or D for the");
		printf("\n right option.");
		printf("\n >> You will be asked question continously, till right answers are given");
		printf("\n >> No negative marking for wrong answers!");
		
		printf("\n\n\t!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!");
		
		printf("\n\n\t\t\t***********************************************");
		printf("\n\t\t Developed by : Mwakanemela Kayange 2023");
		printf("\n\n\t\t\t***********************************************");
		
}

void edit_score(float score, char plnm[20])
{
	system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f = fopen("score.txt", "r");
	fscanf(f, "%s %f", &nm, &sc);
	
	if(score >= sc)
	{
		sc = score;
		fclose(f);
		fopen("score.txt", "w");
		fprintf(f, "%s\n%.2f", plnm, sc);
		fclose(f);
	}
}
