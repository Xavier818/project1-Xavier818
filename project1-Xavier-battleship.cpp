/*
  Created by Pierce Alston on 9/6/2019.
  The program's function is to complete a game of battleship using the coordinate
  inputs from the user.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int row1;   
    int column1;
    char btlShipArrayDisplay[3][3];  // the array with values of hits and misses
    int btlShipArray[3][3]; // the array with the value that will be randomly replaced

    btlShipArray[0][0] = 2; // assigns the individual array values to a non-1 value
    btlShipArray[0][1] = 3;
    btlShipArray[0][2] = 4;
    btlShipArray[1][0] = 5;
    btlShipArray[1][1] = 6;
    btlShipArray[1][2] = 7;
    btlShipArray[2][0] = 8;
    btlShipArray[2][1] = 9;
    btlShipArray[2][2] = 10;
    btlShipArray[rand() % 3][ rand() % 3] = 1; // reassigns a random point in the array to 1


    btlShipArrayDisplay[0][0] = ' '; // assigns the display array with a blank space
    btlShipArrayDisplay[0][1] = ' ';
    btlShipArrayDisplay[0][2] = ' ';
    btlShipArrayDisplay[1][0] = ' ';
    btlShipArrayDisplay[1][1] = ' ';
    btlShipArrayDisplay[1][2] = ' ';
    btlShipArrayDisplay[2][0] = ' ';
    btlShipArrayDisplay[2][1] = ' ';
    btlShipArrayDisplay[2][2] = ' ';



    cout << "Welcome to Battleship! This is the game board." << endl; //Entrance statement and display of clear board
    cout << "      |" << "     |" << endl;
    cout << " -----+" << "-----+" << "-----" << endl;
    cout << "      |" << "     |" << endl;
    cout << " -----+" << "-----+" << "-----" << endl;
    cout << "      |" << "     |" << endl;
    cout << " Pick a location to hit (row[0-2] column[0-2]): " << endl; // initial guess
    cin >> row1;
    cin >> column1;

     for (int k = 0; k < 9; ++k) {      //allows the user to input guesses until they hit the ship.
        if (btlShipArray[row1][column1] == 1) {
            btlShipArrayDisplay[row1][column1] = 'O'; //assigns the display

            cout << "   " << btlShipArrayDisplay[0][0] << "  | " << btlShipArrayDisplay[0][1] << "   |  " << btlShipArrayDisplay[0][2] <<  endl;
            cout << " -----+" << "-----+" << "-----" << endl;
            cout << "   " << btlShipArrayDisplay[1][0] << "  | " << btlShipArrayDisplay[1][1] << "   |  " << btlShipArrayDisplay[1][2] <<  endl;
            cout << " -----+" << "-----+" << "-----" << endl;
            cout << "   " << btlShipArrayDisplay[2][0] << "  | " << btlShipArrayDisplay[2][1] << "   |  " << btlShipArrayDisplay[2][2] <<  endl;

            cout << "Hit, you've sunk the battleship!";
            cout << "(" << k + 1 << " guesses)" << endl;

            return 0;

        } else {
            cout << "Miss, please pick another location to hit (row [0-2] column[0-2]): )" << endl;
            cin >> row1;
            cin >> column1;
            btlShipArrayDisplay[row1][column1] = 'X';
            cout << "   " << btlShipArrayDisplay[0][0] << "  | " << btlShipArrayDisplay[0][1] << "   |  " << btlShipArrayDisplay[0][2] <<  endl;
            cout << " -----+" << "-----+" << "-----" << endl;
            cout << "   " << btlShipArrayDisplay[1][0] << "  | " << btlShipArrayDisplay[1][1] << "   |  " << btlShipArrayDisplay[1][2] <<  endl;
            cout << " -----+" << "-----+" << "-----" << endl;
            cout << "   " << btlShipArrayDisplay[2][0] << "  | " << btlShipArrayDisplay[2][1] << "   |  " << btlShipArrayDisplay[2][2] <<  endl;
        }
    }

    return 0;
}
