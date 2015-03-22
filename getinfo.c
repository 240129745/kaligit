#include<stdio.h>
#include<pwd.h>
#include<unistd.h>
extern struct passwd *pwd;
void getinfo()
{
	pwd=getpwuid(getuid());
	printf("the user name is:%s\n",pwd->pw_name);
}

