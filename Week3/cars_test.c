/* Miami Prep Camp Programming Class
 * Car Racing Game
 */

#include <stdio.h>
#include <stdlib.h>

/* function prototype for print_car */
void print_car(int car, int position);

int main()
{
    /* This string will hold our player inputs */
    char input[3];

    /* These will store the initial positions of our two cars */
    int car_1_position = 1;
    int car_2_position = 1;

    /* This line moves the cursor to the top of the screen and clears it */
    printf("\033[0;0H\033[2J");

    /* Print the rules and the starting positions of the cars */
    printf("Car Racing Game\n"
           "Player 1 presses the 'a' key\n"
           "Player 2 presses the 'l' key\n"
           "When the referee says GO, press your key\n"
           "To quit, enter 'q'\n");
    print_car(1, car_1_position);
    print_car(2, car_2_position);

    /* loop until one of the cars wins the race */
    while (car_1_position < 60 && car_2_position < 60) {

        /* get a line of input from the keyboard */
        fgets(input, 3, stdin);

        /* clear screen */
        printf("\033[0;0H\033[2J");

        /* check the first character of our input to see which car moved */
        switch (input[0]) {
        case 'a':
            car_1_position += 10;
            break;
        case 'l':
            car_2_position += 10;
            break;
        case 'q':
            printf("Thank you for playing!\n");
            exit(0);
        default:
            break;
        }

        /* display which car is ahead and print cars */
        if (car_1_position > car_2_position) {
            printf("\rCar 1 is ahead!\n");
            print_car(1, car_1_position);
            print_car(2, car_2_position);
        }
        else if (car_1_position < car_2_position) {
            printf("\rCar 2 is ahead!\n");
            print_car(1, car_1_position);
            print_car(2, car_2_position);            
        }
        else {
            printf("\rNeck and neck!\n");
            print_car(1, car_1_position);
            print_car(2, car_2_position);
        }
    }

    /* print the winner */
    if (car_1_position > car_2_position) {
        printf("Car 1 is the winner!\n");
    }
    else {
        printf("Car 2 is the winner!\n");
    }
    
    return 0;
}

/* function to print a car's position */
void print_car(int car, int position)
{
    printf("\rCar %d: |", car);
    for (int i = 0; i < position; i++) {
        printf("-");
    }
    printf("o=o\n");
}
