#include <stdio.h>
#include <string.h>
char *lTrim(char s[]);
char *rTrim(char *s);
char *trim(char *s);
char *name(char *s);
void sortName(char name[][51], int n);
void printName(char name[][51], int n);
void inputName(char name[][51], int n);

int word(char *s);
int num(char *s);
int main()
{
	printf("Enter string: ");
 char s[31]; gets(s);
 trim(s); puts(s); 
 printf("length=%d",strlen(s));  
 return 0;
}
void sortName(char name[][51], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	 for(j=n-1;j>i;j--)
	  if(strcmp(name[j],name[j-1])<0)// coi thu so sanh cai nao
	{
		char t[51];
		strcpy(t,name[j]);
		strcpy(name[j],name[j-1]);
		strcpy(name[j-1],t);
	}	 
	
}
void printName(char name[][51], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		puts(name[i]);
	}
}
void inputName(char name[][51], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter name %d:",i+1);
		gets(name[i]);
	}
}
int countstr(char *s,char *s1)
{
	char *p=strstr(s,s1);
	int count=0;
	while(p!=NULL)
	{
		count++;
		p++;
		p=strstr(p,s1);// to count next s1 in s after count the first s
	}
	return count;
}
int word(char *s)
{
	int i,count =0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' '&&(i==0||s[i-1]==' '))
		count++;
	}
	return count;
}
int num(char*s)
{
	int i, count=0;
	for(i=0;i<strlen(s);i++)
	{
		if(isdigit(s[i])!=0&&isdigit(s[i-1])==0)
		
		count++;
	}
	return count;
}
char *name(char *s)
{
	int i;
	strlwr(s);
	for(i=0;i<strlen(s)-1;i++)
	{
		if(i==0||(i>0&&s[i-1]==' '))
		s[i]=toupper(s[i]);
	}
}
char *trim(char *s)
{
	rTrim(s);
    lTrim(s);
	char *p= strstr(s,"  ");
	while (p!=NULL)
	{
		strcpy(p,p+1);
		p =strstr(s,"  ");
	}
	return s;
}
char *rTrim(char *s)
{
	int i= strlen(s)-1;
	while(s[i]==' ') i--;
	s[i+1]='\0';
	return s;
}
char *lTrim(char *s)
{
	int i=0;
	while(s[i]==' ') i++;
	if(i>0) strcpy(&s[0],&s[i]);
	return s;
}
