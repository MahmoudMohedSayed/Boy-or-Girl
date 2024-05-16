/*So he came up with a way to recognize users' genders by their user names.
This is his method: if the number of distinct characters in one's user name is odd, then he is a male, 
otherwise she is a female. You are given the string that denotes the user name, please help
our hero to determinethe gender of this user by his method.*/
#include <iostream>
#include <string>
using namespace std;

int check(int size, string word)
{
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (word[i] == word[j])
            {
                counter++;
            }
        }
    }

    size -= (counter / 2);

    return size;
}

void last_check(int size)
{
    if (size % 2 == 0)
    {
        cout << "CHAT WITH HER";
    }
    else
    {
        cout << "IGNORE HIM";
    }
}

int main()
{
    string word;
    int size;

    cout << "Enter user name you want check\n";
    getline(cin, word);

    size = word.length();

    check(size, word);

    last_check(check(size, word));

    return 0;
}
