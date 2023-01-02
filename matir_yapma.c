#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define sira 4
#define sutun 7

int main(void) {
  int a[sira][sutun];

  srand(time(NULL));


for(int i=0; i<sira; i++){
    for(int i=0;i<sutun;i++){
        a[i][j] = rand() % (111 - (-11 + 1)) + -11;
    }
    
}

for(int i=0;i<sira;i++){
    for(int i=0;i<sutun;i++){
        printf("%d",a[i][j])
    }
    printf("\n");
}
return 0;
    

}
