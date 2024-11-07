#include <stdio.h>
void read_matrix(int n, int v[101][101])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &v[i][j]);
        }
    }

}
void show_on_p(int n, int v[101][101], int p, int s)
{
    if (p == 0 && s == 1) //afisare matrix
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", v[i][j]);
            }
            printf("\n");
        }
    }
    else if (p == 1 && s == 3)//odd column value
    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2 != 0)
                {
                    printf("%d ", v[i][j]);
                }
            }

        }

    }
    else if (p == 2 && s == 2)//even rows values
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i % 2 == 0)
                {
                    printf("%d ", v[i][j]);
                }
            }

        }
    }
    else if (p == 0 && s == 5)//maximum
    {
        int maxim =-99999999999;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (maxim < v[i][j])
                    maxim = v[i][j];
            }
        }
        printf("%d", maxim);

    }
    else if (p == 0 && s == 6)//min
    {
        int minim = 999999999;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (minim > v[i][j])
                    minim = v[i][j];
            }
        }
        printf("%d", minim);
    }
    else if (p != 0 && s == 4)//divisibiity with a given value
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] % p == 0)
                    printf("%d", v[i][j]);
            }
        }
    }

}
int main()
{
    char s[2] = "";
    int n = 0, matrix[101][101];
    printf("matrix intercative");
    while (1)
    {
        char s;
        printf("chose one of the oprin bellow\n");
        printf("a:->read a nxn matrix; this option is obligatory\n");
        printf("b:->show the matrix\n");
        printf("c:->show the elements on the even line pos\n");
        printf("d:->show th elemets on the odd columns\n");
        printf("e:->show the elements divisible with a value given form the keyboard\n");
        printf("g:->show the mimimum from the matrix\n");
        printf("h:->show the minimum from the matrix\n");
        printf("i:->leave\noption = ");
        scanf(" %c", &s);

        switch (s)
        {
        case 'a':
            printf("enter the the matrix value ");
            scanf("%d", &n);
            read_matrix(n, matrix);
            break;
        case 'b':
            if (n == 0)
            {
                printf("you need to read a matrix firsrt, enter n bellow\n");
                scanf("%d", &n);
                read_matrix(n, matrix);
                show_on_p(n, matrix, 0, 1);
                printf("\n");
            }
            else {
                show_on_p(n, matrix, 0, 1);
                printf("\n");
            }
            break;
        case 'c':
            if (n == 0)
            {
                printf("you need to read a matrix firsrt, enter n bellow\n");
                scanf("%d", &n);
                read_matrix(n, matrix);
                show_on_p(n, matrix, 2, 2);
                printf("\n");
            }
            else {
                show_on_p(n, matrix, 2, 2);
                printf("\n");
            }
            break;
        case 'd':
            if (n == 0)
            {
                printf("you need to read a matrix firsrt, enter n bellow\n");
                scanf("%d", &n);
                read_matrix(n, matrix);
                show_on_p(n, matrix, 1, 3);
                printf("\n");
            }
            else {
                show_on_p(n, matrix, 1, 3);
                printf("\n");
            }
            break;
        case 'e':
            if (n == 0)
            {
                printf("you need to read a matrix firsrt, enter n bellow\n");
                int val;
                scanf("%d", &n);
                read_matrix(n, matrix);
                scanf("%d", &val);
                show_on_p(n, matrix, val, 4);
                printf("\n");
            }
            else
            {
                int val;
                scanf("%d", &val);
                show_on_p(n, matrix, val, 4);
                printf("\n");
            }
            break;
        case 'g':
            if (n == 0)
            {
                printf("you need to read a matrix firsrt, enter n bellow\n");
                scanf("%n", &n);
                read_matrix(n, matrix);
                show_on_p(n, matrix, 0, 5);
                printf("\n");
            }
            else {
                show_on_p(n, matrix, 0, 5);
                printf("\n");
            }
            break;

        case 'h':
            if (n == 0)
            {
                printf("you need to read a matrix firsrt, enter n bellow\n");
                scanf("%n", &n);
                read_matrix(n, matrix);
                show_on_p(n, matrix, 0, 6);
                printf("\n");
            }
            else {
                show_on_p(n, matrix, 0, 6);
                printf("\n");
            }
            break;
        case 'i':return 0;

        }
    }


}
