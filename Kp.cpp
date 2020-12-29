#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int arr[100][100];
    int n, m, index_min_i = 0, index_min_j = 0 , i=1,j=1;
    printf_s("Введите размерность первого массива: ");
 //   do 
 //   {
    n = 5;
    m = 5;
//    } while ((n < 0) && (m < 0));
        printf_s("Введите первую матрицу: \n");
        srand(time(NULL));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = rand()% 200+(-100);
                printf_s("|%d ", arr[i][j]);
                
            }
            printf_s("\n");
        }
    int min = arr[0][0];
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        { 
            if ((arr[i][j] < 0) && (arr[i][j] < min))
                {
                    index_min_i = i;
                    index_min_j = j;
                    min = arr[i][j];
                }
        }
    }
    printf_s("Выводим значение минимального элемента\n");
    //arr[index_min_i][index_min_j] = min;
    
    printf_s("%d \n", min );
    printf_s("Выведем позицию минимального отрицательного элемента \n");
    printf_s("Строка: ");
    printf_s("%d \n", index_min_i+1);
    printf_s("Столбец:");
    printf_s("%d", index_min_j+1);
    
    return(0);
}
