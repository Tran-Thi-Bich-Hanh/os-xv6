#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int pid1 = getpid();
  int pid2 = ugetpid();

  printf("getpid()  = %d\n", pid1);
  printf("ugetpid() = %d\n", pid2);

  if(pid1 == pid2){
    printf("OK: PID trung nhau!\n");
  } else {
    printf("FAIL: PID khong khop!\n");
  }

  exit(0);
}