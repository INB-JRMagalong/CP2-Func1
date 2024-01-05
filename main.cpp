#include <iostream>

int MainMenu();
int InputData(int, int&);
int Add(int, int, char&);
int Subtract(int, int, char&);
int Multiply(int, int, char&);
int Division(int, int, char&);
char EndTrail();

int main()
{
    int num1 = 0, num2 = 0, choice, result = 0;
    char action = '-';

    do
    {
        do
        {
            choice = MainMenu();
            switch (choice)
            {
            case 1:
                result = Add(InputData(1, num1), InputData(2, num2), action);
                break;
            case 2:
                result = Subtract(InputData(1, num1), InputData(2, num2), action);
                break;
            case 3:
                result = Multiply(InputData(1, num1), InputData(2, num2), action);
                break;
            case 4:
                result = Division(InputData(1, num1), InputData(2, num2), action);
                break;
            default:
                std::cout << "INVALID CHOICE!\n\n";
                break;
            }

            if (choice >= 1 && choice <= 4)
            {
                std::cout << num1 << " " << action << " " << num2 << " = " << result << "\n";
            }
        } while (choice < 1 || choice > 4);

    } while (EndTrail() == 'y' || EndTrail() == 'Y');
}

int MainMenu()
{
    int choice;

    std::cout
        << " === Select a Mathematical Solution ===\n"
        << " 1. Add\n"
        << " 2. Subtract\n"
        << " 3. Multipliction\n"
        << " 4. Division\n"
        << " \n"
        << " Enter Choice: ";
    std::cin >> choice;

    system("cls");

    return choice;
}

int InputData(int no, int& num)
{
    std::cout << "Please input value: ";
    std::cin >> num;
    return num;
}

int Add(int x, int y, char& action)
{
    action = '+';
    return x + y;
}

int Subtract(int x, int y, char& action)
{
    action = '-';
    return x - y;
}

int Multiply(int x, int y, char& action)
{
    action = '*';
    return x * y;
}

int Division(int x, int y, char& action)
{
    action = '/';
    return x / y;
}

char EndTrail()
{
    char continueChoice = 'y';

    std::cout << "Do you still wish to Continue [y/n]:";
    std::cin >> continueChoice;

    system("cls");

    return continueChoice;
}
