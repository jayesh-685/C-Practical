#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter month number:");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("Month %d corresponds to January.", n);
			break;
		case 2:
			printf("Month %d corresponds to February.", n);
			break;	
		case 3:
			printf("Month %d corresponds to March.", n);
			break;
		case 4:
			printf("Month %d corresponds to April.", n);
			break;
		case 5:
			printf("Month %d corresponds to May.", n);
			break;
		case 6:
			printf("Month %d corresponds to June.", n);
			break;
		case 7:
			printf("Month %d corresponds to July.", n);
			break;
		case 8:
			printf("Month %d corresponds to August.", n);
			break;
		case 9:
			printf("Month %d corresponds to September.", n);
			break;
		case 10:
			printf("Month %d corresponds to October.", n);
			break;
		case 11:
			printf("Month %d corresponds to November.", n);
			break;
		case 12:
			printf("Month %d corresponds to December.", n);
			break;
		default:
			printf("There are only 12 months in a year.");
		
	}
		
	
    return 0;
}

