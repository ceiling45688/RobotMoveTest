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
    int i, a=0, b=0;
    for (i=0; i<strlen(str); i++)
    {
        if (str[i] == 'L') a++;
        else if(str[i] == 'R') a--;
        else if(str[i] == 'U') b++;
        else b--;
    }
    if (a==0 && b==0) return 1;
    return 0;
}
