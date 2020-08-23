#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 

int random_num(int, int);
char int_to_char(int);
int Check(char, char);

int main()
{
    int k[4], result = 0, ex;
    char Char_[4], Receive[4];
    char *n = Char_;
    srand(time(0));
    for (int i = 0; i < 4; i++)
    {
        k[i] = random_num(1, 62);
        Char_[i] = int_to_char(k[i]);
        printf("%c", *n);
        if (i == 3)
        {
            printf(": ");
        }
        else
        {
            printf(" ");
        }
        n++;
    }
    for (int j = 0; j < 4; j++) {
        scanf_s("%c", &Receive[j]);
        if (Receive[j] == ' ')
        {
            j--;
        }
    }
    for (int k = 0; k < 4; k++)
    {
        ex = Check(Char_[k], Receive[k]);
        if (ex == 1)
        {
            result++;
            if (result == 4 && k == 3)
            {
                printf("Correct!");
            }
            else if (result < 4 && k == 3)
            {
                printf("Wrong!");
            }
        }
        else
        {
            if (result == 4 && k == 3)
            {
                printf("Correct!");
            }
            else if (result < 4 && k == 3)
            {
                printf("Wrong!");
            }
        }
    }
	return 0;
}

int random_num(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    return num;
}

char int_to_char(int in)
{
    char ch;
    if (in > 26 && in <= 36)
    {
        int numnum = in - 26;
        switch (numnum)
        {
        case 1: ch = '1'; break;
        case 2: ch = '2'; break;
        case 3: ch = '3'; break;
        case 4: ch = '4'; break;
        case 5: ch = '5'; break;
        case 6: ch = '6'; break;
        case 7: ch = '7'; break;
        case 8: ch = '8'; break;
        case 9: ch = '9'; break;
        case 10: ch = '0'; break;
        default: break;
        }
    }
    else if (in > 0 && in <= 26)
    {
        switch (in)
        {
        case 1: ch = 'a'; break;
        case 2: ch = 'b'; break;
        case 3: ch = 'c'; break;
        case 4: ch = 'd'; break;
        case 5: ch = 'e'; break;
        case 6: ch = 'f'; break;
        case 7: ch = 'g'; break;
        case 8: ch = 'h'; break;
        case 9: ch = 'i'; break;
        case 10: ch = 'j'; break;
        case 11: ch = 'k'; break;
        case 12: ch = 'l'; break;
        case 13: ch = 'm'; break;
        case 14: ch = 'n'; break;
        case 15: ch = 'o'; break;
        case 16: ch = 'p'; break;
        case 17: ch = 'q'; break;
        case 18: ch = 'r'; break;
        case 19: ch = 's'; break;
        case 20: ch = 't'; break;
        case 21: ch = 'u'; break;
        case 22: ch = 'v'; break;
        case 23: ch = 'w'; break;
        case 24: ch = 'x'; break;
        case 25: ch = 'y'; break;
        case 26: ch = 'z'; break;
        default: break;
        }
    }
    else if (in > 36 && in <= 62)
    {
        int n = in - 36;
        switch (n)
        {
        case 1: ch = 'A'; break;
        case 2: ch = 'B'; break;
        case 3: ch = 'C'; break;
        case 4: ch = 'D'; break;
        case 5: ch = 'E'; break;
        case 6: ch = 'F'; break;
        case 7: ch = 'G'; break;
        case 8: ch = 'H'; break;
        case 9: ch = 'I'; break;
        case 10: ch = 'J'; break;
        case 11: ch = 'K'; break;
        case 12: ch = 'L'; break;
        case 13: ch = 'M'; break;
        case 14: ch = 'N'; break;
        case 15: ch = 'O'; break;
        case 16: ch = 'P'; break;
        case 17: ch = 'Q'; break;
        case 18: ch = 'R'; break;
        case 19: ch = 'S'; break;
        case 20: ch = 'T'; break;
        case 21: ch = 'U'; break;
        case 22: ch = 'V'; break;
        case 23: ch = 'W'; break;
        case 24: ch = 'X'; break;
        case 25: ch = 'Y'; break;
        case 26: ch = 'Z'; break;
        default: break;
        }
    }
    return ch;
}

int Check(char x, char y)
{
    int c_or_w = 0;
    if (x == y)
    {
        c_or_w = 1;
    }
    else
    {
        c_or_w = 0;
    }
    return c_or_w;
}