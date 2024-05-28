#include <iostream>
using namespace std;

int main()
{

    // Input
    // int n;
    // cout << "Enter your Number : ";
    // cin >> n;
    // cout << "Your input is : " << n << endl;

    // Conditions

    // int num;
    // cout << "Enter your Number : ";
    // cin >> num;

    // if (num < 0) {
    //     cout << "Number is Negative" << endl;
    // } else if (num > 0) {
    //     cout << "Number is Positive" << endl;
    // } else {
    //     cout << "Number is Zero" << endl;
    // }

    // Question
    // int a = 2;
    // int b = a + 1;

    // if ((a = 3) == b)
    // {
    //     cout << a;
    //     cout << "Yes";
    // }
    // else
    // {
    //     cout << a + 1;
    //     cout << "No";
    // }

    // int a = 24;

    // if (a > 20)
    // {
    //     cout << "Hi";
    // }
    // else if (a == 24)
    // {
    //     cout << "Tech";
    // }
    // else
    // {
    //     cout << "Himanshu";
    // }
    // cout << a;

    // int a= 'a'; // 97
    // int z= 'z'; // 122
    // cout << a << endl;
    // cout << z << endl;

    // int A= 'A'; // 65
    // int Z= 'Z'; // 90
    // cout << A << endl;
    // cout << Z << endl;

    // char ch;
    // cout << "Enter your Character : ";
    // cin >> ch;

    // if (97 <= ch >= 122) {
    //     cout << "It is a small letter" << endl;
    // } else if (65 <= ch >= 90)
    // {
    //     cout << "It is a capital letter" << endl;
    // } else {
    //     cout << "It is a Number" << endl;
    // }

    // if (ch >= '0' && ch <= '9') {
    //     cout << ch << " is a number." << endl;
    // }
    // else if (ch >= 'a' && ch <= 'z') {
    //     cout << ch << " is a lowercase letter." << endl;
    // }
    // else if (ch >= 'A' && ch <= 'Z') {
    //     cout << ch << " is an uppercase letter." << endl;
    // }
    // else {
    //     cout << ch << " is a special character." << endl;
    // }

    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << ch << " is Lowercase" << endl;
    // }
    // else if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout << ch << " is Uppercase" << endl;
    // }
    // else if (ch >= '0' && ch <= '9')
    // {
    //     cout << ch << " is Digit" << endl;
    // }
    // else
    // {
    //     cout << ch << " is Special Character" << endl;
    // }

    //  LOOPS

    // While loop

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 0;

    // while (i <= num)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    //  Sum 1 to N

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;

    // int sum = 0;
    // int i = 0;

    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // cout << "Sum is : " << sum << endl;

    // Find sum of all even numbers from 1 to N

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int sum = 0;
    // int i = 0;

    // while (i <= num)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //         i++;
    //     }
    //     i++;
    // }
    // cout << "Sum of all even numbers is : " << sum << endl;

    // Prime or Not

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // bool isPrime = true;
    // int i = 2;

    // while (i < num)
    // {
    //     if (num % i == 0)
    //     {
    //         isPrime = false;
    //     }
    //     i++;
    // }

    // if (isPrime == true)
    // {
    //     cout << "Number is prime" << endl;
    // }
    // else if (isPrime == false)
    // {
    //     cout << "Number is not prime" << endl;
    // }

    // Patterns

    //  * * * *
    //  * * * *
    //  * * * *
    //  * * * *

    // int i = 0;
    // while (i <= 4)
    // {
    //     int j = 0;
    //     while (j <= 4)
    //     {
    //         cout << '*' << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //  for any number

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 0;
    // while (i < num) {
    //     int j = 0;
    //     while (j < num)
    //     {
    //         cout << '*' << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // 1 1 1 
    // 2 2 2
    // 3 3 3

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int i = 1;

    while (i <= num)
    {
        int j = 1;
        while (j <= num) {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}