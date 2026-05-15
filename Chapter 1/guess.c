#include <stdio.h>

int evaluate_guess(int guess, int secret){
    if (guess > secret) {
        printf("Too high!\n");
        return 0;
    }
    else if (guess < secret){
        printf("Too low!\n");
        return 0;
    }
    else if (guess == secret){
        printf("You won!\n");
        return 1;
    }
}


int main(void){
    int secret_number = 87;
    int game_won = 0;
    int guess_user;
    int attempts = 0;
    
    while(game_won == 0) {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess_user);
        
        game_won = evaluate_guess(guess_user,secret_number);
        attempts++;
    }
    printf("Your attempts are %d\n", attempts);

}