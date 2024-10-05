#include <iostream>

int main(){
    std::cout<< "Hello world!" << std::endl;
    int input;
    int a;
    int b;
    int sum;

    std::string name;
   

    std::cout << "Input 1 for addition "<< std::endl;
    std::cout << "Input 2 for multiplication "<<std::endl;
    std::cout << "Input 3 for divison "<<std::endl;
    std::cout << "Input 4 for substraction "<<std::endl;
    std::cin >> input;

    if(input==1)
    {
       std::cin >> a;
       std::cin >> b;
       sum = a+b;
    }
    else if(input == 2){
        std::cin >> a;
        std::cin >> b;
        sum = a*b;
    }
    else if(input == 3){
        std::cin >> a;
        std::cin >> b;
        if (a != 0 && b != 0)
        {
           sum = a/b;
        }
        else{
            std::cout << "Error! Divided by 0"<< std::endl;
            return 1;
        }
    }
    else if(input == 4){
        std::cin >> a;
        std::cin >> b;
        sum = a-b;
    }
    else{
        std::cout << "Invalid input" << std::endl;
    }
    std::cout << "value = " << sum << std::endl;

    return 0;

}
