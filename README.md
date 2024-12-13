Sorting Algorithms and Big O Notation

Welcome to the Sorting Algorithms and Big O Notation project! This project dives into the implementation of different sorting algorithms and provides insights into their time complexity under various scenarios. The goal is to strengthen your understanding of algorithmic efficiency and to explore the practical implementation of these algorithms in C.

Objectives

Understand and implement various sorting algorithms.
Analyze and compare the time complexities (Big O notation) of different sorting algorithms in best, average, and worst-case scenarios.
Practice working with arrays and pointers in C.
Gain insights into algorithm optimization.
Project Structure
The project contains a series of exercises, each focused on implementing a specific sorting algorithm or analyzing its behavior. Below is a description of each exercise.

0. Bubble Sort
File(s):

0-bubble_sort.c
0-main.c
0-O
Description:

Implement the Bubble Sort algorithm to sort an array of integers in ascending order.
Print the array each time two elements are swapped during the sorting process.
Write the Big O notation of the Bubble Sort algorithm in the file 0-O:
Best case
Average case
Worst case

1. Selection Sort
File(s):

1-selection_sort.c
1-main.c
1-O
Description:
Implement the Selection Sort algorithm to sort an array of integers.
Write the Big O notation of the algorithm in the file 1-O.

2. Insertion Sort
File(s):

2-insertion_sort.c
2-main.c
2-O
Description:
Implement the Insertion Sort algorithm to sort an array of integers.
Write the Big O notation of the algorithm in the file 2-O.

3. Merge Sort
File(s):

3-merge_sort.c
3-main.c
3-O
Description:
Implement the Merge Sort algorithm to sort an array of integers.
Write the Big O notation of the algorithm in the file 3-O.

4. Quick Sort
File(s):

4-quick_sort.c
4-main.c
4-O
Description:
Implement the Quick Sort algorithm to sort an array of integers.
Write the Big O notation of the algorithm in the file 4-O.

Requirements

Code is written in C and adheres to the Betty style guide.
Use the provided print_array function to display the array during sorting.
Avoid global variables.
All code files should include appropriate header files, and prototypes must be declared in sort.h.

Compilation

To compile any exercise, use the following command:

gcc -Wall -Wextra -Werror -pedantic <exercise_file>.c print_array.c -o <output_file>
Example for Bubble Sort:

gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
./bubble

This project was created by Ludwig Vandenberghe, as part of the curriculum at Holberton.

Happy Sorting!

