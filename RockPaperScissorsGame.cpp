#include <iostream>
#include <cstdlib>
#include <ctime>

#define Rock 1
#define Paper 2
#define Scissors 3


using namespace std;
int main ()
{
    srand((unsigned int)time(NULL));

    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;

    do
    {
       cout << "Select your throw."<< endl;
       cout << "1) Rock" << endl;
       cout << " 2) Paper" << endl;
       cout << "3) Scissors" << endl;
       cout << " Selection: ";
       cin >> player_throw;

       cout << endl; 

        ai_throw = (rand()% 3) + 1;

        if (ai_throw == Rock)
        {
            cout<<" AI throws Rock." << endl;
        }
        else if (ai_throw == Paper)
        {
            cout << " AI throws Paper."<<endl;
        }
        else if (ai_throw == Scissors)
        {
            cout << " AI throws Scissors."<< endl;
        }

        draw== false;
        if (player_throw == ai_throw)
        {
            draw = true;
            cout<<"Draw!! Play Again!"<<endl;
        }
        else if (player_throw == Rock && ai_throw == Scissors)
        {
        cout << "Rock beats Scissors. You Win!!"<< endl;
        }
        else if (player_throw == Rock && ai_throw == Paper)
        {
            cout << " Paper beats Rock!! You Lose."<< endl;
        }
        else if (player_throw == Paper && ai_throw == Rock)
        {
            cout<< " Paper beats Rock!! You Win!!"<<endl;
        }
        else if (player_throw== Paper && ai_throw==Scissors)
        {
            cout<< " Scissors beats Paper!! You Lose." << endl;    
        }
        else if (player_throw == Scissors && ai_throw==Paper)
        {
            cout<< " Scissors beats Paper!! You Win!!"<<endl;

        }
        else if (player_throw == Scissors && ai_throw==Rock)
        {
            cout<<"Rock beats Scissors!!! You Lose!!"<<endl;
        }

        cout<< endl;

       //ran() -> 0.....999999  %3 0-2
       

    } while (draw);
    




    //rock breats scissors
    // scissors beats paper
    //paper beats rock

    return 0;
}