#include <iostream>
#include <random>
#include <string>
#include <unistd.h>
#include "myHeader.h"

int roll_dice(int number){
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;

    cout << "Rolling..." << endl;
    cout <<"               ((  _______ " << endl;
    cout <<"      _______     /\\O    O\\" << endl;
    cout <<"     /O     /\\   /  \\      \\" << endl;
    cout <<"    /   O  /O \\ / O  \\O____O\\ ))" << endl;
    cout <<" ((/_____O/    \\\\    /O     /" << endl;
    cout <<"   \\O    O\\    / \\  /   O  /" << endl;
    cout <<"    \\O    O\\ O/   \\/_____O/" << endl;
    cout <<"     \\O____O\\/ ))           ))" << endl;
    cout <<"  ((                       " << endl << endl;

    sleep(1);
    cout << "The first die rolled " << dice1 << "." << endl;
    if (dice1 == 1){ 
        cout << "+-------+" << endl;
        cout << "|       |" << endl;  
        cout << "|   o   |" << endl;
        cout << "|       |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice1 == 2){ 
        cout << "+-------+" << endl;
        cout << "| o     |" << endl;  
        cout << "|       |" << endl;
        cout << "|     o |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice1 == 3){ 
        cout << "+-------+" << endl;
        cout << "| o     |" << endl;  
        cout << "|   o   |" << endl;
        cout << "|     o |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice1 == 4){ 
        cout << "+-------+" << endl;
        cout << "| o   o |" << endl;  
        cout << "|       |" << endl;
        cout << "| o   o |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice1 == 5){ 
        cout << "+-------+" << endl;
        cout << "| o   o |" << endl;  
        cout << "|   o   |" << endl;
        cout << "| o   o |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice1 == 6){ 
        cout << "+-------+" << endl;
        cout << "| o   o |" << endl;  
        cout << "| o   o |" << endl;
        cout << "| o   o |" << endl;
        cout << "+-------+" << endl << endl;
    }

    cout << "The second die rolled " << dice2 << "." << endl;
    if (dice2 == 1){ 
        cout << "+-------+" << endl;
        cout << "|       |" << endl;  
        cout << "|   o   |" << endl;
        cout << "|       |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice2 == 2){ 
        cout << "+-------+" << endl;
        cout << "| o     |" << endl;  
        cout << "|       |" << endl;
        cout << "|     o |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice2 == 3){ 
        cout << "+-------+" << endl;
        cout << "| o     |" << endl;  
        cout << "|   o   |" << endl;
        cout << "|     o |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice2 == 4){ 
        cout << "+-------+" << endl;
        cout << "| o   o |" << endl;  
        cout << "|       |" << endl;
        cout << "| o   o |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice2 == 5){ 
        cout << "+-------+" << endl;
        cout << "| o   o |" << endl;  
        cout << "|   o   |" << endl;
        cout << "| o   o |" << endl;
        cout << "+-------+" << endl << endl;
    } else if (dice2 == 6){ 
        cout << "+-------+" << endl;
        cout << "| o   o |" << endl;  
        cout << "| o   o |" << endl;
        cout << "| o   o |" << endl;
        cout << "+-------+" << endl << endl;
    }

    int total = dice1 + dice2;
    return total;
}