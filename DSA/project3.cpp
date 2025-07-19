#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Base class for games
class Game {
protected:
    int balance;
public:
    // Constructor to initialize balance
    Game(int initialBalance) : balance(initialBalance) {}

    // Virtual function to play the game

    virtual void playGame() = 0;

    // Virtual destructor
    virtual ~Game() {}
};

class DiceGame : public Game {
private:
    int rollDice() {
        return rand() % 10 + 1;
    }

public:
    static int totalGamesPlayed;

    // Constructor to initialize balance and call base class constructor
    DiceGame(int initialBalance) : Game(initialBalance) {}

    // Static member function to retrieve the total number of games played
    static int getTotalGamesPlayed() {
        return totalGamesPlayed;
    }

    // Function to get the betting amount
    int getBettingAmount() {
        int bettingAmount;
        do {
            cout << "Enter amount to bet (Current balance: $" << balance << "): $";
            cin >> bettingAmount;
            if (bettingAmount > balance) {
                cout << "Error: Betting amount cannot be greater than current balance! Please enter a valid amount.\n";
            }
        } while (bettingAmount > balance);
        return bettingAmount;
    }

    // Function to play the game
    void playGame() override {
        // Increment the total number of games played
        totalGamesPlayed++;

        // Game rules
        cout << "===== GAME RULES =====" << endl;
        cout << "1. Guess a number between 1 to 10" << endl;
        cout << "2. Bet an amount of money on your guess" << endl;
        cout << "3. If your guess matches the rolled number, you win 10 times your bet" << endl;
        cout << "4. If your guess doesn't match, you lose your bet" << endl;
        cout << "5. You can continue playing until you run out of money or choose to quit" << endl;
        cout << endl;

        // Main game loop
        while (balance > 0) {
            // Get betting amount
            int bettingAmount = getBettingAmount();

            // Get player's guess
            int guess;
            cout << "Guess a number between 1 to 10: ";
            cin >> guess;

            // Roll the dice
            int dice = rollDice();
            cout << "The dice rolled: " << dice << endl;

            // Determine result
            if (guess == dice) {
                cout << "Congratulations, you win $" << bettingAmount * 10 << "!" << endl;
                balance += bettingAmount * 10;
            } else {
                cout << "Oops, better luck next time! You lost $" << bettingAmount << endl;
                balance -= bettingAmount;
            }

            // Ask if the player wants to continue
            char playAgain;
            cout << "Do you want to play again? (y/n): ";
            cin >> playAgain;
            if (playAgain != 'y' && playAgain != 'Y') {
                break;
            }
        }

        // Game over
        cout << "\nGame over! Your final balance is $" << balance << endl;
    }
};

// Initializing static data member
int DiceGame::totalGamesPlayed = 0;

int main() {
    srand(time(0)); // Seed random number generator

    // Player setup
    string playerName;
    int initialBalance;
    cout << "Enter your name: ";
    cin >> playerName;
    cout << "Enter initial balance: $";
    cin >> initialBalance;

    // Create an object of DiceGame and start playing
    while (true) {
        Game* game = new DiceGame(initialBalance);
        game->playGame();
        delete game;

        // Ask if the player wants to play a new game
        char newGame;
        cout << "Do you want to start a new game? (y/n): ";
        cin >> newGame;
        if (newGame != 'y' && newGame != 'Y') {
            break;
        }
    }

    // Display the total number of games played
    cout << "Total number of games played: " << DiceGame::getTotalGamesPlayed() << endl;

    return 0;
}

