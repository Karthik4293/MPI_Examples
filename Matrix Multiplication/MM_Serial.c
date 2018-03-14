// C program to multiply two square matrices.
#include <stdio.h>
#include <time.h>
#define N 5600

double mat_b[N][N];
double mat_a[N][N];
double res[N][N];
int i,j;

// This function multiplies mat1[][] and mat2[][],
// and stores the result in res[][]
void multiply(double mat_b[N][N], double mat_a[N][N], double res[N][N])
{
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat_a[i][k]*mat_b[k][j];
        }
    }
}

void cr_matrix()
{
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if ((i*j) == 0)
              mat_a[i][j] = -1;
            else
              mat_a[i][j] = ((i*j)%2);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
          if ( i+j < 500)
            mat_b[i][j] = -1;
          else
            mat_b[i][j] = ((i*j)%2);
        }
    }
}

int main()
{
    cr_matrix();
    clock_t  begin = clock();
    multiply(mat_a, mat_b, res);
    clock_t end = clock();
    printf("Execution time: %f\n", (double)(end-begin)/CLOCKS_PER_SEC);

// if you want to view the result matrix
/*
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", res[i][j]);
        printf("\n");
    }
*/
    return 0;
}
