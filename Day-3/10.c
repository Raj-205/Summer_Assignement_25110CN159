 #include <stdio.h>

int main() {
    int start , end ;

    printf("Enter start and end limit: ");
    scanf("%d %d", &start, &end);

    if (start < 2) {
        start = 2;
    }

    for (int i = start; i <= end; i++) {
        int is_prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
