<h1>C - File I/O</h1>

<h2>File I/O involves such operations as open, close, read, write and append. These all operate by modifying files within the shell giving file descriptors as an indicator of the operation's succesfulness.

## 0. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/file_io/0-read_textfile.c">Tread lightly, she is near</a>

A function that reads a text file and prints is to the `POSIX` standard output. The prototype of this function was `ssize_t read_textfile(const char *filename, size_t letters);` where `filename` is the name of the file and `letters` is the number of letters the function should read and print. The function should return the actual number of letters it could read and print. If the file cannot be opened or read, or if`filename` is `NULL` or if `write` fails and does not write the expected amount of bytes; hence all return `0`.

## 1. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/file_io/1-create_file.c">Under the snow</a>

A function that creates a file. The prototype for this function is `int create_file(const char *filename, char *text_content);` where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file. The function should return `1` on success, else `-1` on failure, whereby failure is if the file cannot be created, cannot be written or if `write` fails. Additionally, if `filename` is NULL, then return `-1` and if `text_content` is NULL, then create an empty file. 

## 2. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/file_io/2-append_text_to_file.c">Speak gently, she can hear</a>

A function that appends text at the end of a file. The prototype of this function is `int append_text_to_file(const char *filename, char *text_content);` where `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file. The function should return `1` on success and `-1` on failure. If the file does not exist, the function should not create the file. Additionally, if `filename` is `NULL`, return `-1` and if `text_content` is `NULL`, the function does not add anything.

## 3. <a href="https://github.com/hewsontrinh526/holbertonschool-low_level_programming/blob/master/file_io/3-cp.c">cp</a>

A program that copies the content of a file to another file. This program essentially mimics the copy file function within the C library; the usage of the program would be `cp file_from file_to`. If the number of arguments is not correct, then exit with code `97`. If `file_to` already exits, then truncate it. If `file_from` does not exit or it can't be read, then exit with code `98`. If the file cannot be created or if `write` to `file_to` fails, exit with code `99`. If the file descriptor cannot be closed, then exit with code `100`. 