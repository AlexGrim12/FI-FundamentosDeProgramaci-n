int main()
{
    char tablero[8][8], peon = 'P', torre = 'T', caballo = 'C', alfil = 'A', rey = 'K', reyna = 'Q';
    int i = 0, j = 0;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; i++)
        {
            tablero[i][j] = 'A';
        }
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; i++)
        {
            printf("%c\t", tablero[i][j]);
        }
        printf("\n");
    }
    return 0;
}
