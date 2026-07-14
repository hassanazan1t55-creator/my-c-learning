# Day 23: File Handling (Write, Read, Append)

Today I learned how to interact with external text files in C using file pointers to perform write, read, and append operations.

## What I Learnt:
* **Writing to Files (`w` mode):** Used `fopen()` with write mode to create a new file or overwrite existing content using `fprintf()`.
* **Reading Files (`r` mode):** Opened files in read mode and used `fgets()` inside a loop to display content on the terminal line by line.
* **Appending Content (`a` mode):** Appended new data to the end of an existing file without modifying or clearing previous data.
* **Safe File Management:** Applied NULL checks on file pointers and ensured `fclose()` is called to save changes and release file handles.

## Files in this Folder:
1. `create_and_write_file.c` -> Program creating a text file and writing initial data into it using `fprintf()`.
2. `read_file.c` -> Program reading text lines from an existing file and printing them on the screen.
3. `append_file.c` -> Program adding new lines to the end of an existing file without deleting past records.
