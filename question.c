#include <stdio.h>
int main() {
    int x = 5;
    printf("%d\n", x++ + ++x);
    return 0;
}


--------------------------------------------------------------------------------------------

#include <stdio.h>
int main() {
    int a = 10, b = 20, c;
    c = a > b ? a++ : ++b;
    printf("%d %d %d\n", a, b, c);
    return 0;
}



-------------------------------------------------------------------------------


#include <stdio.h>
int main() {
    int x = 5;
    if (x++ > 5)
        printf("Hello ");
    else if (++x > 6)
        printf("Hi ");
    else
        printf("Bye ");
    printf("%d\n", x);
    return 0;
}




--------------------------------------------------------------------------------------



#include <stdio.h>
int main() {
    int x = 0;
    if (x = 5)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}




-------------------------------------------------------------------------------------

#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i < 1);
    return 0;
}







-------------------------------------------------------------------




#include <stdio.h>
int main() {
    int x = 1;
    switch (x) {
        case 1: printf("A");
        case 2: printf("B");
        default: printf("C");
    }
    return 0;
}

---------------------------------------------------------------------------------------



#include <stdio.h>
int main() {
    int x = 10, y = 20;
    if (x = y)
        printf("Equal\n");
    else
        printf("Not Equal\n");
    return 0;
}





--------------------------------------------------------------------


#include <stdio.h>
int main() {
    int n = 0;
    if (n >= 0)
        if (n > 5)
            printf("Big\n");
        else
            printf("Small\n");
    else
        printf("Negative or Zero\n");
    return 0;
}




-----------------------------------------------------------------------------------



#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        if (i == 3)
            break;
        if (i == 2)
            continue;
        printf("%d ", i);
    }
    return 0;
}
