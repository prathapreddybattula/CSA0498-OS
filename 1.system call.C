#include<stdio.h>
#include<unistd.h>
int main()
{
  printf("Process ID of Running Process: %d\n", getpid() );
  printf("Parent Process ID Running Process: %d\n", getpid() );
  return 0;
}


OUTPUT:
Process ID of Running Process: 11064
Parent Process ID Running Process: 11064
