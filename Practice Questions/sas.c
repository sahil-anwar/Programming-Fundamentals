#include <stdio.h>

int main()
{
    // we will print numbers from start to end
    
    // initialize start and end variables
    int start = 1, end = 10;
    
    // initialize variable to keep track of which number is to be printed
    int curr = start;
    
    // defining the label
    print_line :
        
        // print the current number
        printf("%d ", curr);
        
        // check if the current has reached the end
        // if not, that means some numbers are still to be printed
        if(curr<end)
        {
            // increment current
            curr++;
            // use goto to again repeat
            goto print_line;
        }
        
        // if the current has reached the end, the statements inside if will not be executed
        // the program terminates
        
    
    return 0;
}