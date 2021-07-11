#include <stdio.h>
#include <string.h>

void main(void)
{
    char str1[100];
    char str2[20];
    int i, count = 0;
    printf("문자열 1 입력: ");scanf("%s",str1);
    printf("문자열 2 입력: ");scanf("%s",str2);

    if(!strcmp(str1, str2))
    {
        printf("두 문자열은 완벽히 동일합니다.\r\n");
    }
    else{
        printf("두 문자열은 ");
        for(i = 1; i< strlen(str1); i++)
        {
            if(!strncmp(str1, str2,i))
            {
                count++;
            }
        }
        if(count != 0)
        {
            printf("%d 만큼 일치합니다. \r\n", count);
        }
        else{
            printf("완벽히 일치하지 않습니다.");
        }
        
    }
}