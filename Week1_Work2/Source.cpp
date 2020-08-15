#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char a[300], ans[300];
    int countchar, pass = 0, temp = 0, sed, k = 0;
    scanf("%s%n", &a, &countchar);
    //printf("countchar : %d\n",countchar );
    for (int i = 0;i < countchar;i++)
    {
        if (a[i] - '0' < 7 && i == 0)
        {
            //printf("GET IN\n");
            temp += (a[i] - '0') * 10;
            //printf("temp : %d ",temp);
        }
        else
        {

            temp += a[i] - '0';
            //printf("else temp : %d i : %d\n",temp,i);
            ans[k] = temp / 7 + '0';
            k++;
            sed = temp % 7;
            temp = sed * 10;
        }


    }
    for (int i = 0;i < k;i++)
    {
        printf("%c", ans[i]);
    }
    printf("\n");
    //printf("Ans : %s \n",ans);
    printf("Sed : %d", sed);



}
