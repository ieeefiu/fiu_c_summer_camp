#include <stdio.h>
#include <stdlib.h>

void print_car(int car, int position);

int main()
{
    char input[3];
    
    int car_1_position = 1;
    int car_2_position = 1;

    printf("\033[0;0H\033[2J");
    
    printf("Car Racing Game\n"
           "Player 1 presses the 'a' key\n"
           "Player 2 presses the 'l' key\n"
           "When the referee says GO, press your key\n"
           "To quit, enter 'q'\n");
    print_car(1, car_1_position);
    print_car(2, car_2_position);
    
    while (car_1_position < 60 && car_2_position < 60) {

        fgets(input, 3, stdin);
        
        printf("\033[0;0H\033[2J");
        
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

    if (car_1_position > car_2_position) {
        printf("Car 1 is the winner!\n");
    }
    else {
        printf("Car 2 is the winner!\n");
    }
    
    return 0;
}

void print_car(int car, int position)
{
    printf("\rCar %d: |", car);
    for (int i = 0; i < position; i++) {
        printf("-");
    }
    printf("o=o\n");
}
