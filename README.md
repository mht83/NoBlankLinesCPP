# NoBlankLinesCPP

This C++ program efficiently removes all empty lines from a given text file. It reads an input file, buffers every 10 non-empty lines, and then writes the buffered content to an output file. This approach ensures space and memory efficiency during the file processing.

## Features

- **Buffered Writing**: Buffers every 10 non-empty lines before writing to the output file to manage memory usage effectively.
- **File Handling**: Opens both input and output files simultaneously to streamline the reading and writing process.
- **Error Handling**: Includes error checks for file operations, exiting the program if a file cannot be opened.

## How to Use

1. Place the text file you want to clean up in the same directory as the program and name it `data.txt`.
2. Compile the program using a C++ compiler.
3. Run the compiled program:
4. The program will create an output.txt file in the same directory with all empty lines removed from data.txt.

## Contributing
Contributions to CppStringJoiner are welcome. Please feel free to fork the repository, make improvements, and submit pull requests.

## Contact
If you have any questions, suggestions, or contributions, please open an issue in the repository.

## Author
- mht83
