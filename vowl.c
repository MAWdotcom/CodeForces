#include<stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[200];
    int i, j;
    fgets(s1,100,stdin);
    s1[strlen(s1)-1]='\0';
    for(i=0,j=0;i<strlen(s1);i++)
    {
        if (s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o'|| s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O'|| s1[i]=='U')
        {
            NULL;
        }
        else
        {
            s2[j]='.';
            j++;
            s2[j]=s1[i];
            j++;
        }
    }
    s2[strlen(s2)-2]='\0';
    printf("%s",s2);
    return 0;
}