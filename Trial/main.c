#include <stdio.h>
#include <stdbool.h>

int main(void) {
	// your code goes here
	int testCases, noOfCars, carsAtMaxSpeed;
	scanf("%d", &testCases);
	while(testCases--)
    {
        scanf("%d", &noOfCars);

        int maxSpeed[noOfCars];
        carsAtMaxSpeed = 1;

        for(int i=0; i < noOfCars; i++)
        {
            scanf("%d", &maxSpeed[i]);
            if(i >= 1 && (maxSpeed[i] <= maxSpeed[i-1]))
                carsAtMaxSpeed++;
            if(maxSpeed[i] > maxSpeed[i-1])
                    maxSpeed[i] = maxSpeed[i-1];
        }
        printf("%d\n", carsAtMaxSpeed);

    }
	return 0;
}


