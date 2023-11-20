#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool hasLowerCase = false;
    bool hasUpperCase = false;
    bool hasNumber = false;
    bool hasSymbol = false;

    int length = strlen(password);

    for (int i = 0; i < length; i++)
    {
        if (islower(password[i]))
        {
            hasLowerCase = true;
        }
        if (isupper(password[i]))
        {
            hasUpperCase = true;
        }
        if (isdigit(password[i]))
        {
            hasNumber = true;
        }
        if (ispunct(password[i]))
        {
            hasSymbol = true;
        }
    }
    if (hasLowerCase == true && hasUpperCase == true && hasNumber == true && hasSymbol == true)
    {
        return true;
    }
    return false;
}
