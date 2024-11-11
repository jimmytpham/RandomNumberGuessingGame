#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Jimmy Pham
*  T00629354
*  COMP 3141
*  Module 3 Question 1
*/

void guessGame(); 
bool isCorrect(int, int); 


int main()
{
    guessGame();

    return 0;

}

void guessGame()
{
    int answer; 
    int guess; 
    char response; 


    do {
        answer = 1 + rand() % 100;

        cout << "I have a number between 1 and 100.\n";
        cout << "Can you guess my number?\n";
        cout << "Please type your first guess." << endl << "? ";
        cin >> guess;

        while (!isCorrect(guess, answer))
            cin >> guess;

        cout << "\nYOU ARE THERE (######YOU WON ####)\n";
        cout << "Would you like to play again (y or n)? ";
        cin >> response;

        cout << endl;
    } while (response == 'y');
}

bool isCorrect(int g, int a)
{
    if (g == a)
        return true;


    if (g < a) {
        if (a - g > 10) {
            cout << "You are too cold on the lower side (-----). Try again?\n" << endl;
        }
        else {
            cout << "You are hot on the lower side (---). Try again?\n" << endl;
        }
    }
    if (g > a) {
        if(g - a > 10 ){
            cout << "You are too cold on the upper side (+++++). Try again?\n" << endl;
        }
        else {
            cout << "You are hot on the upper side (+++). Try again?\n"  << endl;
        }
    }

    return false;
}

