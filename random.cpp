#include <iostream>
#include <cstdlib>

int main(){
    int name;
    std::cout << "Welcome to number guess! \n Press 1 for 10 number guess \n Press 2 for 100 number guess" << std::endl;
    std::cin >> name;
    int rando;
    int num;

    if(name == 1)
    {
        rando = rand() % 11;
        std::cout << "Input your number from one to ten!" << std::endl;
        std::cin >> num;
        if (num >= 0 && num <= 10)
        {
            if(num == rando){
                std::cout << "Congrats! You guessed the correct number!" << std::endl;
                return 1;
            }
            else{
                std::cout << "Oof! You got the wrong number! Try again next time... It was " << rando << std::endl;
                return 1;
            }
        }
        else{
            std::cout << "Number greater or less than 0 to 10" << std::endl;
            return 1;
        }

    }

    else if(name == 2)
    {
        rando = rand() % 101;
        std::cout << "Input your number from one to hundred!" << std::endl;
        std::cin >> num;
        if (num >= 0 && num <= 100)
        {
            if(num == rando){
                std::cout << " Wow! Congrats! You guessed the correct number!" << std::endl;
                return 1;
            }
            else{
                std::cout << "Oof! You got the wrong number! Try again next time... It was " << rando  << std::endl;
                return 1;
            }
        }
        else{
            std::cout << "Number greater or less than 0 to 100" << std::endl;
            return 1;
        }

    }
    else {
        std::cout << "Number greater or less than 1 to 2" << std::endl;
         return 1;
    }

}