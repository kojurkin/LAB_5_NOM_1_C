#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double random (int lower_range_limit, int upper_range_limit)
{
    double result;
    result = rand() % (upper_range_limit - lower_range_limit) + lower_range_limit + (1. / rand());
    return result;
}

int main()
{
    srand(time(0));
    int count_num;
    int lower_range_limit, upper_range_limit;
    double randomres;
    printf("Enter count of nums\n");
    scanf("%d", &count_num);
    printf("Enter Lower and upper range limits\n");
    scanf("%d %d", &lower_range_limit, &upper_range_limit);
    FILE *out_file = fopen("output.txt", "w");
    for (int i = 0; i < count_num; i++)
    {
        int j = i + 1;
        randomres = random(lower_range_limit, upper_range_limit);
        //printf("%dnum = %lf\n", j, randomres);//
        fprintf(out_file, "%lf\n ", randomres);
    }
    fclose(out_file);
    return 0;
}