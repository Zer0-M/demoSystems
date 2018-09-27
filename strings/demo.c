#include <stdio.h>
#include <string.h>

int main(){
  printf("strchr Demo\n\n");
  
  char str[]="Order";
  char s='r';
  char *sp=strchr(str,s);
  
  printf("Address of the first occurence of %c in %s: %p\n",*sp,str,sp);
  printf("letter before the first r: %c\n",*(sp-1));
  printf("letter after the first r: %c\n",*(sp+1));
  
  char s1='z';
  sp=strchr(str,s1);

  printf("Addres of the first occurence of z in %s: %p\n",str,sp);

  printf("--------------\n\n");

  printf("strstr Demo\n\n");

  char str1[]="Peter Piper picked a peck of pickled peppers";
  char str2[]="pick";
  char *stp=strstr(str1,str2);

  printf("Main string: %s\n",str1);
  printf("Address of the first occurence of %s: %p\n",str2,stp);
  printf("String from first occurence of %s: %s\n",str2,stp);

  char str3[]="do";
  stp=strstr(str1,str3);
  
  printf("Address of the first occurence of %s: %p\n",str3,stp);

  printf("--------------\n\n");
}
