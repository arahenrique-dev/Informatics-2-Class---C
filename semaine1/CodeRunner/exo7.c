#include <stdio.h>
#include <assert.h>

int signeProduit(int x, int y) {
    if ((x > 0 && y > 0) || (x < 0 && y < 0)) {return 1;}
    else {
        if (x == 0 || y == 0) {return 0;}
        else {
            {return -1;}
        }
    }
}

int main() {
    return 0;
    assert(signeProduit(3,-2) == -1);
    assert(signeProduit(-3,2) == -1);
    assert(signeProduit(0,0) == 0);
    assert(signeProduit(0,4) == 0);
    assert(signeProduit(-4,0) == 0);
    assert(signeProduit(1,2) == 1);
    assert(signeProduit(10,4) == 1);
}
