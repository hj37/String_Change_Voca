#include <iostream>

using namespace std;

void solution(char* a)
{
    char b[100]; /*a를 옮겨서 읽을 공간 */
    int p = 0; /*b배열의 첨자 */
    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] != ' ')
        {
            /*a[i]가 공백일때는 무시하고 아닐때는 조건문 들어감 */

            if(a[i]>= 65 && a[i] <= 90)
            {
                b[p++] = a[i] + 32;
            }
            else
            {

                /*소문자 일때는 그대로 저장 */
                b[p++] = a[i];
            }
        }

    }
    b[p] = '\0';
    /*마지막에는 항상 끝났다는 문자를 넣어줘야 제대로 출력됨 */
    printf("%s",b);

}

int main()
{
    freopen("input.txt","rt",stdin);/*입력값으로 파일에 있는 값을 읽어온다 */

    /*변수 길이 100이하 원래 입력될 문자열 공간 a[100], 소문자로 변환해서
    옮길 공간 b[100] */
    char a[100];
    gets(a);    /* 문자열 공백 포함해서 한 번에 읽어오는거 */
    solution(a);

    return 0;
}
