#include <stdio.h>
#include <string.h>

int main(void) {
		int t;
	    scanf("%d\n", &t);


	while (t--) {

	   int n;
	   scanf("%d\n", &n);
	   char str[300];
	   fgets(str, 300, stdin);
    str[strlen(str) - 1] = '\0';

	   int one = 0;
	   int two = 0;
	   int three = 0;
	   int four = 0;
	   int five = 0;
	   int six = 0;
	   int seven = 0;
	   int eight = 0;
	   int nine = 0;
	   int ten = 0;

	   for (int i = 0; str[i] != '\0'; i++) {
	       if ((str[i] == '1') && (str[i + 1] != '0')) {
	           one++;
	       } else if (str[i] == '2') {
	           two++;
	       } else if (str[i] == '3') {
	           three++;
	       } else if (str[i] == '4') {
	           four++;
	       } else if (str[i] == '5') {
	           five++;
	       } else if (str[i] == '6') {
	           six++;
	       } else if (str[i] == '7') {
	           seven++;
	       } else if (str[i] == '8') {
	           eight++;
	       } else if (str[i] == '9') {
	           nine++;
	       } else if ((str[i] == '1') && (str[i+1] == '0')) {
	           ten++;
	       }

	   }

	   int total = one + two + three + four + five + six + seven + eight + nine + ten;

	   int max = 0;


	  int arr[10] = {one, two, three, four, five, six, seven, eight, nine, ten};

	  for (int j = 0; j <= 9; j++) {

	      if (arr[0] < arr[j]) {
      arr[0] = arr[j];
          }

          max = arr[0];
	  }

        int allsame = 0;

	 for  (int p = 0; p <= 10; p++) {
        if (arr[p] == n) {
            allsame = 1;
        }
	 }

	 if (allsame == 1) {
        printf("%d\n", 0);
	 } else {
	 printf("%d\n", (total - max));
	 }



	}
	return 0;
}
