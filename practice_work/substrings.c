// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int count(const char *str,int k)
{
    int n=strlen(str);
    int count=0;
    int left=0,right=0,dis=0;
    int freq[26]={0};
    while(right<n)
    {
        if(freq[str[right]-'a']==0)
        {
            dis++;
        }
        freq[str[right]-'a']++;
        right++;
        while(dis>k)
        {
            freq[str[left]-'a']--;
            if(freq[str[left]-'a']==0)
            {
                dis--;
            }
            left++;
        }
        count += right-left;
    }
    return count;
}
int check(const char *str,int k)
{
    return count(str,k-1);
}
int main() 
{
    const char *str="abaaca";
    int k=2;
    printf("%d",check(str,k));
    //printf("%d",a);
    return 0;
}
