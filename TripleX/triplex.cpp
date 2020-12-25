#include <iostream>
#include <ctime>

/*
 _____ _          _   _             __      ___  ___    
/  ___| |        | | | |           /  |     |  \/  |    
\ `--.| | ___   _| | | | __ _ _ __ `| |  ___| .  . |    
 `--. \ |/ / | | | | | |/ _` | '_ \ | | / _ \ |\/| |    
/\__/ /   <| |_| \ \_/ / (_| | | | || ||  __/ |  | |    
\____/|_|\_\\__, |\___/ \__,_|_| |_\___/\___\_|  |_/    
             __/ |                               
            |___/ 

std::cout << "⢀⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀ \n";
std::cout << "⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀ \n";
std::cout << "⠀⠀⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀  ⠀ \n";
std::cout << "⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆⠀⠀⠀⠀⠀⠀  ⠀ \n";
std::cout << "⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆  \n";
std::cout << "⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠁⠸⣼⡿ \n";
std::cout << "⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉⠀⠀⠀⠀⠀  \n";
std::cout << "⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀ ⠀ \n";
std::cout << "⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀  \n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇⠀⠀⠀⠀⠀  ⠀ \n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀  ⠀ \n";
std::cout << "⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀  ⠀⠀ \n";
std::cout << "⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀  ⠀⠀ \n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀  ⠀ \n";
std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⠿⠿⠿⠿⠛⠉                 \n\n";
*/

void PrintIntroduction(int Difficulty)

{
std::cout << "\n\nGet out of my swamp!!!\n";
std::cout << "ooh, it's you... I'm sorry\n";
std::cout << "There are 10 security level's, you are now on level " << Difficulty;
std::cout << "\nEnter the password to continue \n\n";

}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "*There are 3 numbers in the code";
    std::cout << "\n*The codes add-up to: " << CodeSum;
    std::cout << "\n*The codes multiply to give: " << CodeProduct << std::endl;  

    int GuessA, GuessB, GuessC;
    std::cout << "Introduce First code:  \n";
    std::cin >> GuessA;
    std::cout << "Introduce Second code: \n";
    std::cin >> GuessB;
    std::cout << "Introduce Last code: \n";
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nNice, Next security level ";
        return true;
    }
    else
    {
        std::cout << "\nERROR, INCORRECT CODE, RETRY";
        return false;
    }
}

int main()
{
    srand(time(NULL));

    int Difficulty = 1;
    int const MaxDifficulty = 10;

    while (Difficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(Difficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++Difficulty;
        }
        
    }
    std::cout << "\nNice you can enter the swamp\n";
    return 0;
}