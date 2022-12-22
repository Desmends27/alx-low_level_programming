#include "main.h"
#include "strlen.c"
#include "stddef.h"
/**
 * _strcmp- compares two intergers to find if they are the same
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 0(string are equal)
 * if not equal and s1_len > s2_len return positive value(15)
 * else if s2_len>s1_len return negative value
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;
    int flag = 0;    
    while (flag == 0)
    {
        if (s1[i] > s2[i])
        {
            flag = 1;
        }
        else if (s1[i] < s2[i])
        {
            flag = -1;
        }

        if (s2[i] == '\0')
        {
            break;
        }

        i++;
    }
    return flag;
}

