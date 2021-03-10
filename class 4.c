//1101

#include<stdio.h>
int main()
{
    char data[50],even[50],even1[50],deeven[50];
    int i,j,count=0,m,n,p, q;

    printf("Enter data: ");
    scanf("%s",data);

    int len=strlen(data);
    j=0;

    printf("\n Do you use even or odd\n If you use even, then enter 1 \n if you use odd, enter 2: ");
    scanf("%d",&m);

    if(m==1)
    {
        for(i=0; i<len; i++)
        {
            if(data[i]=='1')
            {
                count++;
            }
            even[j]=data[i];
            j++;
        }

        //printf("\nCount is : %d",count);

        if(count%2==0)
        {
            even[j]='0';
            j++;
        }
        else
        {
            even[j]='1';
            j++;
        }
        len=strlen(even);
        even[j]='\0';
        printf("\nNow data is : %s",even);
        strcpy(even1, even);

        printf("\nDo you change one data,\nif you want change then enter 1,if you don't change enter 2: ");
        scanf("%d",&n);
        if(n==1)
        {
            printf("\n enter positions, do you want to change: ");
            scanf("%d",&p);
            printf("\n Enter 0 or 1: ");

            scanf("%d",&q);

            even1[p] = q+'0';

            printf("\n finally your data is: %s",even1);
        }
        else
        {
            printf("\nNow data is : %s",even1);
        }
        printf("\n your data is");
        if(strcmp(even,even1) == 0)
            printf(" No error.\n");
        else
            printf(" Error.\n");

    }

    if(m==2)
    {
        for(i=0; i<len; i++)
        {
            if(data[i]=='1')
            {
                count++;
            }
            even[j]=data[i];
            j++;
        }

        //printf("\nCount is : %d",count);

        if(count%2==0)
        {
            even[j]='1';
            j++;
        }
        else
        {
            even[j]='0';
            j++;
        }
        len=strlen(even);
        even[j]='\0';
        printf("\nNow data is : %s",even);
        strcpy(even1, even);

        printf("\n Do you change one data\nif you want change then enter 1 or don't change enter 2: ");
        scanf("%d",&n);
        if(n==1)
        {
            printf("\n enter positions do you want to change: ");
            scanf("%d",&p);
            printf("\n Enter 0 or 1: ");

            scanf("%d",&q);

            even1[p] = q+'0';

            printf("\n finally your data is: %s",even1);
        }
        else
        {
            printf("\nNow data is : %s",even1);
        }

        printf("\n you data is ");
        if(strcmp(even,even1) == 0)
            printf(" Not error.\n");
        else
            printf(" Error.\n");

    }

}
