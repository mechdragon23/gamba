#include "myHeader.h"
#include <string>

int main () 
{
    int menuSelection;

    cout << "Welcome to Gamba\n";
    cout << "Select a game:\n\n";

    cout << "Heads or Tails - 1\n";
    cout << "Horse racing --- 2\n";
    cout << "Dice ----------- 3\n";
    cout << "Scratchers ----- 4\n";
    cout << "Slots -----------5\n";

    cout << "\nquit ----------- 0\n";

    cout << "\nEnter the number of the game you would like to play: ";
    cin  >> menuSelection;

    while(menuSelection != 0)
    {
        system ("CLS"); //clear screen
        system("clear");
        switch(menuSelection)
        {
            case 1:
                //heads or tails function here
                break;
            case 2:
                //horse racing function here
                break;
            case 3:
                //dice function here
                break;
            case 4:
                //scratchers function here
                break;
            case 5:
                //slots function here
                 int option=5;
                 
                 while (option != 0)
                 {
                    string play;
                    cout << "enter s to start spin: ";
                    cin >> play;
                    vector<string> symbols{"@", "%", "#", "$"};
                    vector<int>results = spin();
                    cout << symbols[results[0]] << " "
                         << symbols[results[1]] << " "
                         << symbols[results[2]] << "\n";
       
                    check_Results(results);
                    cout << "would you like to play agian?\n"
                         << "enter 5 to play again or 0 to exit slots: ";
                    cin >> option; 
      
                    system("clear"); // clear scree for linux
                    // system("CLS"); // doenst work on linux
                     
                 }
                  
                  
                break;
        }


        system ("CLS"); //clear screen
        system("clear"); // clear screen for linux
        cout << "Select a game:\n\n";

        cout << "Heads or Tails - 1\n";
        cout << "Horse racing --- 2\n";
        cout << "Dice ----------- 3\n";
        cout << "Scratchers ----- 4\n";
        cout << "Slots -----------5\n";

        cout << "\nquit ----------- 0\n";

        cout << "\nEnter the number of the game you would like to play: ";
        cin  >> menuSelection;
    }


	return 0;
}
