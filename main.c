#include <stdio.h>
#include <string.h>

int main(){
  char input[512];
  while(1){
    printf("Commands:\n  help: Prints help");
    if(fgets(input, 512, stdin)){
      if(input starts with "help\n"){
        printf("%s\n", input);
      }
    }else{
      printf("Error reading input\n");
    }
  }
  return 0;
}
