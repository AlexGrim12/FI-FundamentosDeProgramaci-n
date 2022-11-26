int main()
{
    int i = 0, j = 0;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 1 || i == 6)
            {
                printf("P\t");
            }
            else if ((i == 0 && j == 0) ||
                     (i == 7 && j == 0) ||
                     (i == 0 && j == 7) ||
                     (i == 7 && j == 7))
            {
                printf("T\t");
            }
            else if ((i == 0 && j == 1) ||
                     (i == 7 && j == 1) ||
                     (i == 0 && j == 6) ||
                     (i == 7 && j == 6))
            {
                printf("C\t");
            }
            else if ((i == 0 && j == 2) ||
                     (i == 7 && j == 2) ||
                     (i == 0 && j == 5) ||
                     (i == 7 && j == 5))
            {
                printf("A\t");
            }
            else if ((i == 0 && j == 4) ||
                     (i == 7 && j == 4))
            {
                printf("K\t");
            }
            else if ((i == 0 && j == 3) ||
                     (i == 7 && j == 3))
            {
                printf("Q\t");
            }
            else
            {
                printf(".\t");
            }
        }
        printf("\n");
    }
    return 0;
}
