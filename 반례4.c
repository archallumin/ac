#include <stdio.h>

int main(void)
{
    int N;
    int A[51];
    int B[51];
    int arr[51];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        int idx = 0;
        for (int j = 0; j < N; j++)
        {
            if (B[i] > B[j])
            {
                idx += 1;
            }
            if (B[i] < B[j])
            {
                idx += 0;
            }
        }
        arr[i] = idx;
    }
    int T = 0;
    for (int i = 0; i < N; i++)
    {

        T += A[N - 1 - arr[i]] * B[i];
    }
    printf("%d ", T);

    return 0;
}