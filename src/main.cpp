
#include <iostream>
#include <complex>
#include <complex_math.h>
using namespace std;

static void help()
{
    cout << "--help - show all commands" << endl;
    cout << "add - to add uo two complex numbers" << endl;
    cout << "subtract - to subtract the second number from the first number" << endl;
    cout << "divide - to divvide the first number with the second number" << endl;
    cout << "multiply - to multiply two numbers" << endl;
    cout << "exit - exit, obviously" << endl;
    cout << "---------" << endl;
};

bool is_valid(double& value, const string& prompt)
{
    while (true)
    {
        cout << prompt;
        cin >> value;

        // Проверяем, произошла ли ошибка ввода
        if (cin.fail())
        {
            cout << "Error: input correct number." << endl;
            cin.clear();  // Сбрасываем ошибку
            cin.ignore(32767, '\n'); // Очищаем буфер
        }
        else
        {
            return true;
        }
    }
}




int main(int argc, char** argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; ++i)
        {
            string key = argv[i];
            if (key == "--help")
            {
                help();
            }

        }
    }

    

    string command = " "; //строка для вводимых команд

    complex<double> result; //для хранения результатов вычислений

    double realPart, imagPart; //реальная и мнимые части нашего комплексного числа

    while (command != "exit") //продолжаем, пока пользователь не выйдет
    {
        cout << "Input command: " << endl;
        cin >> command;
        if (command == "add") //сложение
        {
            is_valid(realPart, "Input the real part of the first number: ");
            is_valid(imagPart, "Input imaginative part of the first number: ");
            cout << endl;
            complex<double> a(realPart, imagPart);
            is_valid(realPart, "Input the real part of the second number:");
            is_valid(imagPart, "Input imaginative part of the second number: ");
            cout << endl;
            complex<double> b(realPart, imagPart);
            
            result = add(a, b);
            cout << "Addition of the first and second number:" << result.real()
                << " + " << result.imag() << "i\n" << endl;
        }
        else if (command == "subtract") //вычитание
        {
            is_valid(realPart, "Input the real part of the first number: ");
            is_valid(imagPart, "Input imaginative part of the first number: ");
            cout << endl;
            complex<double> a(realPart, imagPart);
            is_valid(realPart, "Input the real part of the second number:");
            is_valid(imagPart, "Input imaginative part of the second number: ");
            cout << endl;
            complex<double> b(realPart, imagPart);

            result = subtract(a, b);
            cout << "Subtraction of the second number from the first one:" << result.real()
                << " + " << result.imag() << "i\n" << endl;
        }
        else if (command == "divide") //деление
        {
            is_valid(realPart, "Input the real part of the first number: ");
            is_valid(imagPart, "Input imaginative part of the first number: ");
            cout << endl;
            complex<double> a(realPart, imagPart);
            is_valid(realPart, "Input the real part of the second number:");
            is_valid(imagPart, "Input imaginative part of the second number: ");
            cout << endl;
            complex<double> b(realPart, imagPart);
            if (b == 0.0)
            {
                cout << "Do not divide by zero." << endl;
            }
            else
            {
                result = divide(a, b);
                cout << "Divison of the first and second number:" << result.real()
                    << " + " << result.imag() << "i\n" << endl;
            }
        }
        else if (command == "multiply") //умножение
        {
            is_valid(realPart, "Input the real part of the first number: ");
            is_valid(imagPart, "Input imaginative part of the first number: ");
            cout << endl;
            complex<double> a(realPart, imagPart);
            is_valid(realPart, "Input the real part of the second number:");
            is_valid(imagPart, "Input imaginative part of the second number: ");
            cout << endl;
            complex<double> b(realPart, imagPart);

            result = multiply (a, b);
            cout << "M:" << result.real()
                << " + " << result.imag() << "i\n" << endl;
        }
        else if (command == "--help")
        {
            help();
        }
        else if (command == "exit")
        {
            cout << "Exiting programm" << endl;
        }
        else
        {
            cout << "Incorrect input" << endl;
        }
    }
    return 0;
}