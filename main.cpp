#include <iostream>

int MainMenu();
int InputData();
int Add();
int Subtract();
int Multiply();
int Divide();

int main()
{
    int num1, num2, choice;
    char continueChoice = 'y';

    do
    {
        do
        {
            switch (MainMenu())
            {
            case 1:
                Add();
                break;
            case 2:
                Subtract();
                break;
            case 3:
                Multiply();
                break;
            case 4:
                Divide();
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
    return 0;
}

    int MainMenu() {
    	
    int choice;
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
    return choice;
}
	int Add() {
	int num1, num2;
				std::cout << "Please input number 1:";
                std::cin >> num1;
                std::cout << "Please input number 2:";
                std::cin >> num2;
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
	}
	
	int Subtract() {
	int num1, num2;
				std::cout << "Please input number 1:";
                std::cin >> num1;
                std::cout << "Please input number 2:";
                std::cin >> num2;
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
	}
	int Multiply() {
	int num1, num2;
				std::cout << "Please input number 1:";
                std::cin >> num1;
                std::cout << "Please input number 2:";
                std::cin >> num2;
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
	}
	int Divide() {
	int num1, num2;
				std::cout << "Please input number 1:";
                std::cin >> num1;
                std::cout << "Please input number 2:";
                std::cin >> num2;
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
	}
