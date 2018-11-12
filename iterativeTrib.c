#include <stdio.h>
#include <stdlib.h>

int main() {
    
// takes the values of trib 1, 2, 3, and n while making sure they are >= 0
    int trib0 = -1;
    while (trib0 < 0) {
        printf("Enter tribonacci(0): \n");
        scanf("%d", &trib0);
    }


/////////////////////////////////////////////

    

    int trib1 = -1;

     while (trib1 < 0) {
         printf("Enter tribonacci(1): \n");
        scanf("%d", &trib1);
    }


/////////////////////////////////////////////


    int trib2 = -1;

    while (trib2 < 0) {
        printf("Enter tribonacci(2): \n");
        scanf("%d", &trib2);
    }


//////////////////////////////////////////


    int n = -1;

     while (n < 0) {
        printf("Enter n: \n");
        scanf("%d", &n);
    }


//////////////////////////////////////////////

    int tribN;
    //nTerm accounts for the first 3 terms already set by user
    int nTerm = n - 2;
    int i;
    //in case user wants to find term 0, 1, or 2, n must be greater than 2
    if (n > 2) {
        for (i = 0; i < nTerm; i++) {
            // adds the 3 terms

            tribN = trib0 + trib1 + trib2;
            trib0 = trib1;
            trib1 = trib2;
            trib2 = tribN;
        }
    }
    else if (n == 2) {
        tribN = trib2;

    }
    else if (n == 1) {
        tribN = trib1;

    }
    else if (n == 0) {
        tribN = trib0;

    }
    // prints results
    printf("Tribonnacci(%d) = %d \n", n, tribN);

    return 0;

}