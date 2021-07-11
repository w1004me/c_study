#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int random_action(int info);
int MAX_VALUE = 10;

int main(void)
{
    char item_name[20];
    int user_input = 0;
    bool return_value = false;
    int crn_info = 0;
    printf("input item name: ");
    scanf("%s", item_name);

    printf("+%d %s를 강화합니다.", crn_info, item_name);

    while(1)
    {
        printf("강화 = 1, 종료 =0 : \n");
        scanf("%d",&user_input);
        switch(user_input)
        {
            case 0:
                exit(1);
                break;
            case 1:
                if(crn_info < MAX_VALUE)
                {
                    return_value = random_action(crn_info);//0 = 실패, 1 = 성공
                    if(return_value == 1)
                    {
                        crn_info++;
                    }
                    printf("+%d%s\n",crn_info,item_name);
                }
                else
                {
                    printf("강화수치가 넘어갔습니다.");
                }
                
                break;
            default:
                printf("값을 잘못 입력하셨습니다.\n");
                break;
        }
    }
}

int random_action(int info)
{
    int result_value = 0;
    int random = 0;

    random = rand()%MAX_VALUE;//1~10
    if(random < (MAX_VALUE-info))
    {
        printf("성공!!\n");
        result_value = 1;
    }
    else{
        printf("실패!!\n");
        result_value = 0;
    }
    return result_value;
}