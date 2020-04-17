#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
int fd,fd1,p,n;
char buff[100];
fd=open("gk.txt",O_CREAT|O_RDWR,0777);
n=read(0,buff,100);
write(fd,buff,n);
fd1 = open("gk.txt",O_RDWR);
p=lseek(fd1,-6,SEEK_END);
read(fd1,buff,5);
write(1,buff,5);

}
