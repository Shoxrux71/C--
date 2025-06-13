#include <stdio.h>

int main(void) {
    double r, s, area;
    r = 6.2;
    s = 100.0;
    area = 3.1415926 * r * r;

    printf("%5.1f より", s);

    if (area > s)
        printf("大きい\n");  // katta
    else
        printf("少さい\n");  // kichik

    return 0;
}
		    
		     
			   
