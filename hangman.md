# Exercise: Hangman Game

![hangman](https://t3.ftcdn.net/jpg/02/62/24/44/360_F_262244457_ifaHuRxphif4md99qlWG0xKgWly4J4js.jpg)

## Objective

Write a C program that simulates a game of Hangman using loops. The program should do the following:

1. Initialize a secret word or phrase that the player needs to guess.

2. Display an initial empty hangman figure and a series of underscores representing the letters in the secret word.

3. Ask the player to guess a letter.

4. Use a loop (either `for` or `while`) to check if the guessed letter is in the secret word. If it is, reveal the letter in the word; if not, update the hangman figure.

5. Continue asking the player to guess letters until they either guess the entire word or exhaust a predetermined number of attempts.

6. Display the outcome of the game (win or lose) and the secret word.

## Instructions

1. Initialize a secret word or phrase for the player to guess.

2. Display an initial hangman figure with empty spaces representing the letters in the secret word.

3. Implement a loop (either `for` or `while`) that repeatedly asks the player to guess a letter.

4. Use the loop to check if the guessed letter is in the secret word. If it is, reveal the letter in its correct position in the word. If not, update the hangman figure.

5. Continue the game until the player either successfully guesses the entire word or exhausts a predetermined number of attempts (e.g., six incorrect guesses).

6. Display the outcome of the game (win or lose) and reveal the secret word.

7. After the game, ask the player if they want to play another round. If they choose to continue, repeat the process; if not, exit the program.

8. Provide suitable messages to guide the user through the game.
