#include<stdio.h>
void copy()
{char str1[100],copy[100];
int i=0;
while(str1[i]!='\0')
{copy[i]=str1[i];
i++;
}
}
int main()

{
    char str1[100];
    int choice;
    printf("enter a string 1:\n");
    scanf("%s",str1);
    printf("enter your choice:\n");
    printf("1 to copy a string:\n");
    switch(choice)
    {
        case 1:{copy(str1);
        printf("copied string=%s\n",copy);
        break;}
    }
    return 0;
}
