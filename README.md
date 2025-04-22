Array Operations Program
This C program provides a menu-driven interface to perform various operations on an integer array, including insertion, updating, deletion, sorting, searching, and displaying elements. The program uses a fixed-size array with a maximum capacity defined by MAX_SIZE (default: 100).
Features

Insert: Add elements to the array (up to the maximum size).
Update: Modify elements either by replacing a specific value or updating a value at a given index.
Delete: Remove all occurrences of a specified element from the array.
Sort: Sort the array in ascending or descending order using bubble sort.
Search: Find the index of a value or retrieve the value at a specific index.
Display: Show all elements in the array.
Exit: Terminate the program.

Prerequisites

A C compiler (e.g., GCC) installed on your system.
Basic knowledge of C programming and command-line interface.

How to Run

Clone the Repository:
git clone <repository-url>
cd <repository-directory>


Compile the Program:
gcc -o array_ops main.c


Run the Program:
./array_ops


Follow the Menu:

Choose an option (1-7) from the menu to perform the desired operation.
Follow the prompts to input data as required.



Example Usage
Enter the number you want to operate
1. Insert
2. Update_Value
3. Delete
4. Sort
5. Search
6. Display
7. Exit
Choice: 1
Enter the size of the array (max 100): 3
Enter 3 elements:
10
20
30
Choice: 6
Array elements: 10 20 30
Choice: 4
1. Ascending
2. Descending
Enter your choice: 1
Array sorted!
Choice: 6
Array elements: 10 20 30
Choice: 7
Exiting...

File Structure

main.c: The main C source file containing the program logic.

Notes

The array size is limited to MAX_SIZE (100 by default). Attempts to insert more elements will be capped at this limit.
The program checks for invalid inputs (e.g., out-of-bounds indices) and provides appropriate error messages.
The sorting algorithm used is bubble sort, which is simple but not optimal for large arrays.
The program runs in an infinite loop until the user selects the "Exit" option (7).

Contributing
Contributions are welcome! Feel free to submit a pull request or open an issue for bug reports or feature suggestions.
License
This project is licensed under the MIT License. See the LICENSE file for details.
