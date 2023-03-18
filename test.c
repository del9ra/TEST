#include <stdio.h>
#include <ctype.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string word = "HI!";
    int x = 0;
    for (int i = 0; i < strlen(word); i++) 
    {
        int n = (int) word[i];
        while (n != 0)
        {
            n = n / 2;
            print_bulb(n % 2);
        }
        
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
