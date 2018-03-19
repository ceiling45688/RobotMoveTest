#include<stdio.h>
#include<string.h>
#define N 100

/*Qes: Initially, there is a Robot at position(0,0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.
        The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R(Right), L(Left), U(Up) and D(Down).
        The output should be true or false representing whether the robot makes a circle.
*/


int main()
{
    char str[N];
    printf("Input:");
    scanf("%s", str);
    if(JudgeRobotMove(str))
        printf("\nOutput: true");
    else
        printf("\nOutput: false");
    return 0;
}

int JudgeRobotMove(char str[])
{
    int i, l=0, r=0, u=0, d=0;
    char strL[N], strR[N], strU[N], strD[N];
    for (i=0; i<strlen(str); i++)
    {
        if (str[i] == 'L') strL[l++] = str[i];
        else if(str[i] == 'R') strR[r++] = str[i];
        else if(str[i] == 'U') strU[u++] = str[i];
        else strD[d++] = str[i];
    }
    strD[d] = '\0', strL[l] = '\0', strR[r] = '\0', strU[u] = '\0';
    if (strlen(strL)==strlen(strR) && strlen(strD)==strlen(strU)) return 1;
    return 0;
}
