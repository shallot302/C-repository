#include <stdio.h>
int main(void)
{
    int n,i,flag = 0,temp = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {

        while (n % i == 0)
        {
            if(flag == 0)
            {
                temp = i;
                flag = 1;
                n /= i;
                continue;
            }
            if(temp != i&&temp != 0)
            {
                
                
            	if (flag == 1)
            	{
            		printf("%d ", temp);
            	}
                if (i == n)
                {
                    printf("%d", n);
                }
                flag = 1;
                temp = i;
            	n /= i;
                continue;
            }
            flag++;
        	n /= i;
            
        }

    }
    return 0;
}