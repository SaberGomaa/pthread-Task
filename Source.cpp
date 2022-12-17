//#define HAVE_STRUCT_TIMESPEC
//#include <stdio.h>
//#include <stdlib.h>
//#include <pthread.h>
//#include<cmath>
//const int MAX_THREADS = 64;
//int thread_count;
//int sz;
//double* x;
//double* y;
//double result = 0.0;
//void Usage(const char* prog_name);
//void ReadMarks(const char* prompt, double x[], int n);
//void PrintMarks(const char* title, double y[], double m);
//double printGpa(double x[], int n);
//void* ClacGpa(void* rank);
//
//int main(int argc, char* argv[]) {
//	long  thread;
//	pthread_t* thread_handles;
//
//	if (argc != 2) Usage(argv[0]);
//
//	thread_count = atoi(argv[1]);
//
//	if (thread_count <= 0 || thread_count > MAX_THREADS)
//		Usage(argv[0]);
//
//	thread_handles = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
//
//	printf("Enter Marks Number \n");
//	scanf_s("%d",&sz);
//
//	x = (double*)malloc(sz * sizeof(double));
//	y = (double*)malloc(sz * sizeof(double));
//
//
//	ReadMarks("Enter Marks", x, sz);
//	PrintMarks("Marks is", x, sz);
//
//
//	for (thread = 0; thread < thread_count; thread++)
//		pthread_create(&thread_handles[thread], NULL, ClacGpa, (void*)thread);
//
//	for (thread = 0; thread < thread_count; thread++)
//		pthread_join(thread_handles[thread], NULL);
//
//	PrintMarks("Gpa For each Mark", y, sz);
//
//	printf("Final Gpa : %4.1f ",printGpa(y , sz)/sz);
//
//	free(x);
//	free(y);
//
//	return 0;
//}
//
//
//void Usage(const char* prog_name) {
//	fprintf(stderr, "usage: %s <thread_count>\n", prog_name);
//	exit(0);
//}
//
//
//
//void ReadMarks(const char* prompt, double x[], int n) {
//	
//	int i;
//
//	printf("%s\n", prompt);
//	for (i = 0; i < n; i++)
//		scanf_s("%lf", &x[i]);
//}
//
//
//void* ClacGpa(void* rank) {
//	long my_rank = (long)rank;
//	int i;
//
//	int n = (sz + thread_count -1 )/ thread_count;
//	int first = n*my_rank ;
//	int last = first + n;
//
//	if (last >= sz) last = sz;
//
//
//	for (i = first; i < last; i++) {
//		y[i] = 0.0;
//		double p  = x[i] ;
//		double g = 0.0;
//			
//			if (p >= 90 && p <= 100)
//				g += 5.0;
//			else if (p >= 85 && p <= 89)
//				g += 4.5;
//			else if (p >= 80 && p <= 84)
//				g += 4.0;
//			else if (p >= 75 && p <= 79)
//				g += 3.5;
//			else if (p >= 70 && p <= 74)
//				g += 3.0;
//			else if (p >= 65 && p <= 69)
//				g += 2.5;
//			else if (p >= 60 && p <= 64)
//				g += 2.0;
//			else if (p >= 55 && p <= 59)
//				g += 1.5;
//			else if (p >= 50 && p <= 54)
//				g += 1.0;
//			else if (p < 50)
//				g += 0.0;
//			y[i] += g;
//			
//	}
//
//	return NULL;
//}
//
//double printGpa(double x[], int n) {
//	for (int i = 0; i < n; i++) {
//		result += x[i];
//	}
//	return result;
//}
//
//void PrintMarks(const char* title, double y[], double m) {
//	int   i;
//
//	printf("%s\n", title);
//	for (i = 0; i < m; i++)
//		printf("%4.1f ", y[i]);
//	printf("\n");
//}