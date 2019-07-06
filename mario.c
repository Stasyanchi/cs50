#include <cs50.h>
#include <stdio.h>

int get_height(string prompt);
    int n;

int main(void)
{
    int h = get_height("Height: ");
    for (int i = 0; i < n; i++)
    {
    for(int j = 0; j < h - i - 1; j++)
    {
        printf("%s", " ");
    }
    for(int k = 0; k < i+1; k++)
    {
        printf("#");
    }
        printf("\n");
    }
}
int get_height(string prompt)
{
    do
    {
        n = get_int("%s", prompt);
    }
    while ((n > 8) || (n < 1));
    return n;
}
