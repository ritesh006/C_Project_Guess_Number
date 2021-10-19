
/* ---------   Write a prorgram that generates a random number and asks the user to 
    guess a number. If guessing number is higher than computer generated actual number
    program displays "Lower Number Please" similarly user guess is low program prints
    "Higher Number Please". When user guess correct number a program displays number 
    of attempt player took for guessing a correct number  ------------------------- */


# include <stdio.h>
# include <stdlib.h>            /* srand() and rand() function uses this library */
# include <time.h>              /* Time function include in this library */

int main()
{   
    /* Initialize input variable */    

    int input_num_guess;  /* User guessed number stored in this variable */       
    int random_num;       /* Random number generated by computer store in this variable */  
    int num_of_guess = 1 ;    /* Number of guesses store in this variable */         

   /* -----------------------Start Random Number Generator----------------------------------- */
   
    /* Calling time() function within srand() function. Time function returns time in
    seconds this value save in srand() function and srand() will pass this value to 
    rand() function as a seed to rand() function. Time fuction return differant value 
    in each iterations  */

    srand(time(0));                    

    random_num= rand() % 10 + 1;

    /* this will generates the random number using rand() function and store to 
    input_num variable. ( %100 ) gives the range between 0 t0 9 and adding ( + 1 ) 
    gives the range between 1 to 10 */    

    //printf("random number is %d \n",random_num);


    /*------------------------------ End Random Number Generator ------------------------------*/
    do
    {
        printf("Guess The Number Between 1 to 10: ");  /* Message for user to enter number 1 to 10 */
        scanf("%d",&input_num_guess);                  /* Taking input from user */

        if (input_num_guess < random_num)
        {
            /*  if your guess is greater than computer generated random number dislay 
                message for user to Enter Lower number than previous again */
         
            printf("Higher Number Please !\n");
        }
            else if (input_num_guess > random_num)
            {
                /*  if your guess is greater than computer generated random number dislay 
                    message for user to Enter Lower number than previous again */

                printf("Lower Number Please !\n");
            }
                else
                {
                    /* if you guess correct  number print the message and number of attempt you 
                        use for guessing the correct number */

                    printf("Your Guessed Correct Number in %d Attempt!\n", num_of_guess);
                }
                
                num_of_guess++;         /* num of guess increment until you guessed correct number */
    
    } while (input_num_guess != random_num); /* End do-while loop */

        /* Loop break when input num equal to random num */

    

    return 0; 
} 