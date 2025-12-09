#include <stdio.h>

int main(void)
{
  char *string = "World, Hello!";
  short int data = 0xFFFFFFF0; // 16진수

  // 쓰기 모드로 텍스트 파일을 열기
  FILE *p_file = fopen("hello.txt", "at");

  short int data = 0x0;

  if (NULL != p_file)
  {
    for (int i = 411; i < 431; i++)
    {
      if (i % 3 == 0)
      {
        fprintf(p_file, "\n");
      }
    }

    printf("파일 내용을 이렇게 썼어요!~n");

    fclose(p_file);
  }

  return 0;
}