#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    FILE* file, * file2;
    char string[1024], string2[1024], * word, * word1;

    if ((file = fopen("In.txt", "r")) == NULL)
    {
        puts("ERROR1");
    }
    if ((file2 = fopen("In2.txt", "w")) == NULL) 
    { 
        puts("ERROR2");
    }

/*    while (fgets(string, 35 , file) != NULL) 
    {
        for (int i = 0; i < sizeof(string) - 1; i++)
        {
            string2[i] = string[i];
        }
        puts(string); puts(" - "); puts(string2);
        word = strtok(string, " ,");
        while (word != NULL)
        {
            word1 = strtok(string2, " ,");
            while (word1 != NULL)
            {
                printf("3 - ");
                printf("-%s-%s-\n",word, word1);
                for (int i = 0; i < sizeof(word)-1; i++)
                {
                    if (word[i] != word1[i]) break;
                }                          
                puts("GET\n");
                word1 = strtok(0, " ,");
            }
//            fprintf(file2, "%s " ,word);
            word = strtok(0, " ,");
        }
    }*/
    fclose(file);
    fclose(file2);
    return 0;
} 