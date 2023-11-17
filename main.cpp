#include <iostream>

int main()
{
    int sum = 4000000;
    int entrances = 10;
    int apartments = 40;
    int pay = sum / (entrances * apartments);

    std::cout << "Welcome to the rent calculator!" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Enter the amount indicated on the receipt: " << sum  << std::endl;
    std::cout << "How many entrances are there in your house? " << entrances << std::endl;
    std::cout << "How many apartments are there in each entrance? " << apartments << std::endl;
    std::cout << "--------------We count---------------" << std::endl;
    std::cout << "Each apartment must pay " << pay << " rubles." << std::endl;
}
