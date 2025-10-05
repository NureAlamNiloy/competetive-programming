#include <stdio.h>

int main() {
    
    

    return 0;
}


/*





15 Dec Bootcamp
Problem Link - https://codeforces.com/contest/1766/problem/A


Solution  - 

#include<stdio.h>

int main()

{

    int t;

    scanf("%d",&t);

    for(int i=1; i<=t; i++)

    {

        int n;

        scanf("%d",&n);

        if(n<=9)

            printf("%d\n",n);

        else

        {

            int res=9,value=10,cnt=1;

            for(int i=10; i<=n; i+=value)

            {

                if(cnt==10)

                {

                    value*=10;

                    cnt=1;

                }

                res++;

                cnt++;

            }

            printf("%d\n",res);

        }

    }

    return 0;

}













Problem Link - https://codeforces.com/contest/1766/problem/B


Solution 2 -

#include<stdio.h>

int main()

{

    int t;

    scanf("%d",&t);


    for(int i=1; i<=t; i++)

    {

        int n,exist=0;

        scanf("%d",&n);

        char s[200005];

        scanf("%s",s);


        for(int i=0; i<n-1; i++)

        {

            char a=s[i],b=s[i+1];

            int found=0;

            for(int j=i+2; j<n-1; j++)

            {

                if(s[j]==a && s[j+1]==b)

                {

                    found=1;

                    break;

                }

            }

            if(found)

            {

                exist=1;

                break;

            }

        }

        if(exist)

            printf("YES\n");

        else

            printf("NO\n");

    }


    return 0;

}


Prime -


#include<stdio.h>

int main()

{

    int value,prime=1;

    scanf("%d",&value);

    for(int i=2; i<value; i++)

    {

        if(value%i==0)

        {

            prime=0;

            break;

        }

    }

    if(prime && value!=1)

        printf("Prime\n");

    else

        printf("Not prime\n");

    return 0;

}




GCD and Co-prime -


#include<stdio.h>

int min(int a,int b)

{

    if(a<b)

        return a;

    return b;

}

int gcd(int a,int b)

{

    int ans=1;

    for(int i=1; i<=min(a,b); i++)

    {

        if(a%i==0 && b%i==0)

        {

            ans=i;

        }

    }

    return ans;

}

int main()

{

    int q;

    scanf("%d",&q);

    for(int i=1; i<=q; i++)

    {

        int num1,num2;

        scanf("%d%d",&num1,&num2);

        printf("GCD = %d\n",gcd(num1,num2));

    }

    return 0;

}



Unique and Duplicate

#include<stdio.h>

int main()

{

    char s[100]="bbeaaawkk";

    int largestElement=26;


    int freq[largestElement+1];


    for(int i=0; i<=largestElement; i++)

        freq[i]=0;


    for(int i=0; i<strlen(s); i++)

        freq[(s[i]-'a')+1]++;


    int unique=0,duplicate=0;

    for(int i=1; i<=largestElement; i++)

    {

        if(freq[i]==1)

            unique++;

        else if(freq[i]>1)

            duplicate++;

    }

    printf("Unique = %d\n",unique);

    printf("Duplicate = %d\n",duplicate);

    return 0;

}



First Occurrence and Last Occurrence -


#include<stdio.h>

int main()

{


    int n,target;

    scanf("%d%d",&n,&target);

    int arr[n];

    for(int i=0; i<n; i++)

        scanf("%d",&arr[i]);


    int firstOcc=-1,lastOcc=-1;

    for(int i=0; i<n; i++)

    {

        if(target==arr[i])

        {

            firstOcc=i;

            break;

        }

    }


    for(int i=0; i<n; i++)

    {

        if(target==arr[i])

        {

            lastOcc=i;

        }

    }

    if(firstOcc==-1)

        printf("Not found anything\n");

    else

    {

        printf("%d\n",firstOcc);

        printf("%d\n",lastOcc);

    }

    return 0;

}







Linear Search -


#include<stdio.h>

int main()

{


    int n,target;

    scanf("%d%d",&n,&target);

    int arr[n];

    for(int i=0; i<n; i++)

        scanf("%d",&arr[i]);


    int found=0;

    for(int i=0; i<n; i++)

    {

        if(target==arr[i])

        {

            found=1;

            break;

        }

    }

    if(found)

        printf("Element is found\n");

    else

        printf("Element is not found\n");

    return 0;

}






*/


