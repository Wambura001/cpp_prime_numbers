// prime_numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    int number1;
    cout << "Enter a number: ";
    cin >> number1;

    vector <int> prime(number1 + 1, 1);
    for (int i = 2; i * i <= number1; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i; i * j <= number1; j++)
            {
                prime[i * j] = 0;
            }
        }
    }
    cout << "Prime number upto " << number1 << " are; "; 
    for (unsigned i = 2; i <= prime.size(); i++)
    {
        if (prime[i] == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
