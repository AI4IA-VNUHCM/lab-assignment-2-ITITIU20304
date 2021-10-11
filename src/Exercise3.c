/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int a = 2;
    const char *new = "";
    while (testcase!=1){
        if(testcase%a==0){
            while(testcase%a==0){
                printf ("%s%d",new,a);
                new = " * ";
                testcase = testcase/a;
            }
        }
        a++;
    }
    return 0;
}

