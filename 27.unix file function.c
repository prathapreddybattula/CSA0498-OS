# include<stdio.h>
# define PERROR -1
main(argc ,argv)
int argc;
char *argv[];
{
char op;
if((argc<3)(argc>4))
{
fprintf(stderr,"ERROR");
exit(1);
}
if(argc==4)
{
printf("\n Are you sure to move the file (y/n)");
scanf("%c",&op);
if(tolower(op)==’y’)
{
if(link(argv[1],argv[2])==PERROR)
{
Perror(argv[0]);
}
if(unlink(argv[1]==PERROR)
{
Perror(argv[1]);
}
}
else
{
else(1);
}
if(argc==3)
{
if(link(argv[1],argv[2])==PERROR)
{
Perror(argv[1]);
}
}
Else
{
exit(1);
}
}
if(argc==3)
{
if(link(argv[1],argv[2])==PERROR)
{
Perror(argv[1]);
}
}
exit(1);
}
