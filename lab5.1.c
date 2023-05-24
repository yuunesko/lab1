#include <stdio.h>
int main() {
    const int hard_disk = 7;
    int cost[7];
    int memory[7];
    int threshold;
    printf("Enter inf for each disk:\n  ");
    for(int i = 0; i < hard_disk; i++) {
        printf("disk %d:\n", i + 1);
        printf("memory size(in gigabytes): ");
        scanf("%d" , &memory[i]);
        printf("cost(in hrn): ");
        scanf("%d" , &cost[i]);
    }
    printf("Enter cost threshold (in hrn): ");
    scanf("%d" , &threshold);
      for (int i = 0; i < hard_disk; i++) {
        if (cost[i] > threshold) {
            printf("%d gygabytes \n", memory[i]);
        }
     }
    return 0;
}