//#include <stdlib.h>
//#include <stdio.h>
//#pragma warning (disable: 4996)
//
//void main() {
//	int sum = 0;
//	int number;
//	int count = 0;
//	double average;
//	FILE* fPtr = fopen("numbers.txt", "r");
//
//	while (fscanf(fPtr, "%d", &number) != EOF) {
//		sum += number;
//		count++;
//	}
//
//	fclose(fPtr);
//	average = (double)sum / count;
//	printf("Sum\t= %d\n", sum);
//	printf("Average\t= %.2f\n", average);
//
//	FILE* fSave = fopen("results.txt", "w");
//	fprintf(fSave, "Sum\t= %d\n", sum);
//	fprintf(fSave, "Average\t= %.2f", average);
//	fclose(fSave);
//
//	printf("Process completed!\n");
//	system("pause");
//}