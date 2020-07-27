#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
    FILE *fp,*ft;
    int i;
    char str[20];
    char ch;
    printf("Enter a string(max 20 characters): ");
    gets(str);
    int len=strlen(str);
    fp=fopen("D://name.txt","w");
    fprintf(fp,"%s",str);
    fclose(fp);
    fp=fopen("D://name.txt","a");
    printf("The reverse string is: ");
    for(i=0;i<=len;i++)
    {
        fscanf(fp,"%c",str[len-i]);
        printf("%c",str[len-i]);
    }
    fclose(fp);
    fp=fopen("D://name.txt","r");
    ft=fopen("D://newfile.txt","w");
    while(ch=fgetc(fp)!=EOF)
    {
        fputc(ch,ft);
    }
    fclose(ft);
    fclose(fp);
    printf("\nContent copied to new file.\n");
    return 0;
}
