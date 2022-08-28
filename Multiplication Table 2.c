#include <stdio.h>
int main()
{
    // declaring table
    int table[10][10];


    int sum = 0;
    // loop
    for(int i = 0; i < 10; i++){
        printf("%d table starting \n\n",i + 1);
        for(int j = 0; j < 10; j++){
             // using addition instead of multiply for better performance
            sum += (i + 1);
            //
            table[i][j] = sum;
            // printing table
            printf("%d x %d = %d \n",i + 1,j + 1,table[i][j]);
        }
        sum = 0;
        printf("\n");
    }

}