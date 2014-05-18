#include <stdio.h>

int main()
{long int t;
scanf("%ld",&t);
while(t--)

{
    char ch[1000];
    scanf("%s",&ch);
    int i=0;
    while(ch[i]!='\0')
    {
        switch(ch[i])
        {

        case ' ':printf(" ");
        break;
        case 'A':printf("11 ");
        break;
        case 'B':printf("12 ");
        break;
        case 'C':printf("13 ");
        break;
        case 'D':printf("14 ");
        break;
        case 'E':printf("15 ");
        break;
        case 'F':printf("21 ");
        break;
        case 'G':printf("22 ");
        break;
        case 'H':printf("23 ");
        break;
        case 'I':printf("24 ");
        break;
        case 'J':printf("24 ");
        break;
        case 'K':printf("25 ");
        break;
        case 'L':printf("31 ");
        break;
        case 'M':printf("32");
        break;
        case 'N':printf("33 ");
        break;
        case 'O':printf("34 ");
        break;
        case 'P':printf("35 ");
        break;
        case 'Q':printf("41 ");
        break;
        case 'R':printf("42 ");
        break;
        case 'S':printf("43 ");
        break;
        case 'T':printf("44 ");
        break;
        case 'U':printf("45 ");
        break;
        case 'V':printf("51 ");
        break;
        case 'W':printf("52 ");
        break;
        case 'X':printf("53 ");
        break;
        case 'Y':printf("54 ");
        break;
        case 'Z':printf("55 ");
        break;
        default: break;
        }
        i++;
}
printf("\n");}
    return 0;
}
