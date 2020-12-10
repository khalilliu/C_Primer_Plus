#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 5

void *say_hello(void *args)
{
  printf("Hello Runoob！\n");
  return 0;
}

int main()
{
  pthread_t tids[NUM_THREADS];
  for (int i = 0; i < NUM_THREADS; ++i)
  {
    // 参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
    int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
    if (ret != 0)
    {
      printf("pthread_create error: error_code = %d\n", ret);
    }
  }

  pthread_exit(NULL);
  return 0;
}
