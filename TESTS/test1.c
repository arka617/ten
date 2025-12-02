#include <stdio.h>
#include <assert.h>

int sum(int a, int b); 

int main() {
    
    assert(sum(2, 3) == 5);

    
    assert(sum(-5, 10) == 5);

    
    assert(sum(0, 0) == 0);

    
    assert(sum(100, 200) == 300);

    printf("All test cases passed!\n");
    return 0;
}
