#include <iostream>

int main()
{
    int num1, num2, choice;
    char continueChoice = 'y';

    do
    {
        do
        {
            std::cout
                << " === Select Mathematical Solution ===\n"
                << " 1. Add\n"
                << " 2. Subtract\n"
                << " 3. Multipliction\n"
                << " 4. Division\n"
                << "\n"
                << " Enter Choice: ";
            std::cin >> choice;

            system("cls");

            switch (choice)
            {
            case 1:
                std::cout << "Please input number 1:";
                std::cin >> num1;
                std::cout << "Please input number 2:";
                std::cin >> num2;
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
                break;
            case 2:
                std::cout << "Please input number 1:";
                std::cin >> num1;
                std::cout << "Please input number 2:";
                std::cin >> num2;
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
                break;
            case 3:
                std::cout << "Please input number 1:";
                std::cin >> num1;
                std::cout << "Please input number 2:";
                std::cin >> num2;
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
                break;
            case 4:
                std::cout << "Please input number 1:";
                std::cin >> num1;
                std::cout << "Please input number 2:";
                std::cin >> num2;
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
                break;
            default:
                std::cout << "You entered an invalid choice!\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        std::cout << "Do you want to Contninue [y/n]:";
        std::cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'y');
}
