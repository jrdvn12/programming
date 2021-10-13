#include <stdio.h>
#include <string.h>

int isGreater(int num1, int num2) { // checks if num1 > num2
  char str1[100], str2[100], tmp1[100];

  sprintf(str1, "%d", num1);
  sprintf(str2, "%d", num2);

  strcpy(tmp1, str1);
  strcat(str1, str2); // str1 = str1 + str2
  strcat(str2, tmp1); // str2 = str2 + str1

  if(strcmp(str1, str2) == 1) {
    return 1;
  } else if(strcmp(str1, str2) == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int salary[20];
  int tmp, n, i, j;

  printf("Enter number of terms: ");
  scanf("%d", &n);

  printf("Enter values: ");
  for(int i=0; i<n; i++) {
    scanf("%d", &salary[i]);
  }
  
  for(i=0; i<n; i++) {
    for(j=i+1; j<n; j++) {
      if(isGreater(salary[i], salary[j]) == 0) {
        // swaps 2 adjacent numbers
        tmp=salary[i];
        salary[i]=salary[j];
        salary[j]=tmp;
      }
    }
  }

  printf("Maximum Salary: ");
  for(int j=0; j<n; j++) {
    printf("%d", salary[j]);
  }
  printf("\n");

  return 0;
}