#include <myHeader.h>

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
                break;
        }


        system ("CLS"); //clear screen
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
