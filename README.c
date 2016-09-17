# isomorphic
#include<stdio.h>
int main()
{
 char str[]="egg";
 char str1[]="add";
 int safe ;
 safe = isomorphic(str,str1);
 if(safe==1)
  printf("True");
  else printf("false");
return 0;
}
int isomorphic(char str,char str1)
{
int ctr,count=0,count1=0;
 for(ctr=0;str[ctr]!=NULL;ctr++)
 {
  if(str[ctr]==str[ctr+1])
  {
    count++;
    ctr++;
  }
  else 
    ctr++;
  }
 for(ctr=0;str[ctr]!=NULL;ctr++)
 {
  if(str1[ctr]==str1[ctr+1])
  {
    count1++;
    ctr++;
  }
  else 
    ctr++;
  }
  if(count==count1)
   return 1;
   else return 0;
 }
