#include <stdio.h>


int minBusesNeeded(int s1, int d1, int s2, int d2, int s3, int d3) {

    int maxReturnTime = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);


    int timeline[maxReturnTime + 1];
    for (int i = 0; i < maxReturnTime + 1; i++) {
        timeline[i] = 0;
    }


    for (int i = s1; i < d1; i++) {
        timeline[i] += 1;
    }
    for (int i = s2; i < d2; i++) {
        timeline[i] += 1;
    }
    for (int i = s3; i < d3; i++) {
        timeline[i] += 1;
    }


    int maxBusesNeeded = 0;
    for (int i = 0; i < maxReturnTime + 1; i++) {
        if (timeline[i] > maxBusesNeeded) {
            maxBusesNeeded = timeline[i];
        }
    }

    return maxBusesNeeded;
}

int main() {

    int s1, d1, s2, d2, s3, d3;
    printf("此6個正整數間以空格隔開: ");
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);


    int minBuses = minBusesNeeded(s1, d1, s2, d2, s3, d3);


    printf(" %d", minBuses);

    return 0;
}

