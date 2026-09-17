#include <stdio.h>
#include <stdlib.h>// this is used for random function
#include <time.h>//this header file use to change with time 
#include <windows.h>//this header file use to sleep function

#define NUM_STARS 1000// we define globally to visible whole program to declare the star size 

int main()
{
    int console_width = 210;  //set the size of screen to print the star within fix size
    int console_height = 50;  // also set the size of screen to print the star within fix size
     // SetConsoleTitle("Game Show");
    // Set the console title
    
    while (1)
    {
        // Clear the console
        system("cls");

        // Print random stars using an array
        int stars_x[NUM_STARS], stars_y[NUM_STARS]; // declare the array and fix the size 
        for (int i = 0; i < NUM_STARS; i++) // iterate the loop star size time 
        {
            stars_x[i] = rand() % console_width + 1;// take the modulus to fix the location to print the star
            stars_y[i] = rand() % console_height + 1;// also fix the height
            printf("\x1b[%d;%dH", stars_y[i], stars_x[i]);// this is used to fix the location to print the star within fix location
            printf("*");
             printf("\x1b[%d;%dH", console_height/2, console_width/2-17);// fix the size to print the welcome to the show in center 
        printf("WELCOME TO THE GAME SHOW "); // Print "Welcome to the Game Show" in the center of the console
        }        
        // Wait for some time before clearing the screen and printing again
        Sleep(100);
    }
}

