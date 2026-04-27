#include <stdio.h>
#include <stdlib.h>

typedef struct perhitungan {
  int size;
  int arr[];
}
contoh;

int main() {
  int n;
  int sum;
  int count;
  int sorted;
  int median;
  int n1;
  int n2;
  int min;
  
  contoh *data = (contoh * ) malloc(sizeof(contoh * ) + n * sizeof(int));
  n = 0;
  while (data -> arr[n-1] != -1)
  {
    scanf("%d", data -> arr + n);
    n = n + 1;
  }

  
  if ((n-1) % 2 == 0)
  {
    n1 = (n-1) / 2;
    n2 = ((n-1) /2) + 1;
    median = (data -> arr[n1] + data -> arr[n2]) / 2;
    
  }
  else {
    n1 = (n-1) / 2;
    median = data -> arr[n1];
  }

  for (int i = 0; i < (n-1) - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n-1; j++) {
            if (data -> arr[j] < data-> arr[min])
                min = j;
        }
       if (min != i) {
            int temp =  data -> arr[min];
            data -> arr[min] = data -> arr[i];
            data -> arr[i] = temp;
        }
    }

count = n-1;
printf("COUNT %d", count);
printf(" SORTED ");
  for (int i = 0; i < n-1; i++)
    printf("%d ", data -> arr[i]);
printf(" MEDIAN %d ", median);
  free(data);
  return 0;
}
