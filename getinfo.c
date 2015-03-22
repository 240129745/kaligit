#include<stdio.h>
#include<assert.h>
#include<pwd.h>
#include<unistd.h>
extern struct passwd *pwd;
void getinfo()
{
	pwd=getpwuid(getuid());
	assert(NULL!=pwd);

	printf("the user name is:%s\n",pwd->pw_name);
	printf("uid is %d\n",getuid());
}

