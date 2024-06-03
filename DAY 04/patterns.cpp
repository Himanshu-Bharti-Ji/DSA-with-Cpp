// Patterns Questions

#include <iostream>
using namespace std;

int main()
{

    // Question 1.

    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= num)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 2.

    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= num)
    //     {
    //         cout << num - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 3.

    //  1 2 3 4                 1 2 3
    //  5 6 7 8         or      4 5 6
    //  9 10 11 12              7 8 9
    //  13 14 15 16

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // int count = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= num)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 4.

    // *
    // * *
    // * * *
    // * * * *

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*" << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 5.

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 6.

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // int value = i;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << value << " ";
    //         value++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 7.

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // // My Approach

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i + j - 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 2nd Approach

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     int value = i;
    //     while (j <= i)
    //     {
    //         cout << value << " ";
    //         value++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 8.

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // 1st way

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     int value = i;
    //     while (j <= i)
    //     {
    //         cout << value << " ";
    //         value--;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 2nd way

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 9.

    // A A A
    // B B B
    // C C C

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // while (i <= num
    // )
    // {
    //     int j = 1;
    //     char ch = 'A' + i - 1;
    //     while (j <= num)
    //     {
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 10.

    // A B C
    // A B C
    // A B C

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // My way

    // int i = 1;
    // int count = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= num)
    //     {
    //         char ch = 'A' + count - 1;
    //         cout << ch << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 2nd way

    // int i = 1;
    // char ch = 'A';
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= num)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 11.

    // A B C
    // B C D
    // C D E

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // My way

    // int i = 1;
    // char ch = 'A';
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= num)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     ch = ch - 2;
    //     i++;
    // }

    // 2nd way

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= num)
    //     {
    //         char ch = 'A' + i + j - 2; // 'A' + (i + j - 1) - 1
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 12.

    // A
    // B B
    // C C C

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     char ch = 'A' + i - 1;
    //     while (j <= i)
    //     {
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 13.

    // A
    // B C
    // D E F
    // G H I J

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // char ch = 'A';
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 14.

    // A
    // B C
    // C D E
    // D E F G

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // // My Approach

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 14.

    // D
    // C D
    // B C D
    // A B C D

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // while (i <= num)
    // {
    //     int j = 1;
    //     char ch = 'A' + num - i;
    //     while (j <= i)
    //     {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 15.

    //    *
    //   **
    //  ***
    // ****

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // My way

    // int i = 1;
    // while (i <= num)
    // {
    //     // For Space
    //     int j = 1;
    //     while (j <= num - i)
    //     {
    //        cout << " ";
    //        j++;
    //     }

    //     // For Star
    //     int k = 1;
    //     while (k <= i)
    //     {
    //         cout << '*';
    //         k++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 2nd way

    // int i = 1;
    // while (i <= num)
    // {
    //     // For Space
    //     int space = num - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }

    //     // For Star
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << '*';
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 16.

    // ****
    // ***
    // **
    // *

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 0;
    // while (i < num)
    // {
    //     int j = 1;
    //     while (j <= num - i)
    //     {
    //         cout << '*';
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 17.

    // ****
    //  ***
    //   **
    //    *

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // int value = num;
    // while (i <= num)
    // {
    //     // For Space
    //     int j = 1;
    //     while (j <= i - 1)
    //     {
    //         cout << ' ';
    //         j++;
    //     }

    //     // For Star
    //     int k = 1;
    //     while (k <= value)
    //     {
    //         cout << '*';
    //         k++;
    //     }
    //     cout << endl;
    //     value--;
    //     i++;
    // }


    // Question 18.

    //    1
    //   121
    //  12321
    // 1234321

    // int num;
    // cout << "Enter a number : ";
    // cin >> num;

    // int i = 1;
    // while(i <= num) {
    //     int j = 1;
    //     while (j <= (num-i))
    //     {
    //         cout << " " << " ";
    //         j++;
    //     }

    //     int k = 1;
    //     while (k <= i)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }

    //     int l = 1;
    //     while (l <= (i-1))
    //     {
    //         cout << i - l << " ";
    //         l++; 
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Question 19.
 
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int i = 1;
    int counter = num;
    int value = 2;
    while (i <= num)
    {
        int j = 1;
        while (j <= counter)
        {
            cout << j << " ";
            j++;
        }

        int k = 0;
        while (k < value)
        {
            cout << "*" << " ";
            k += 1;
        }

        int m = 1;
        int n = counter;
        while (m <= counter)
        {
            cout << n << " ";
            m++;
            n--;
        }
            
        cout << endl;
        i++;
        counter--;
        value = value + 2;
    }
    

}
