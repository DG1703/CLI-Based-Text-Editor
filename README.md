# Project Overview
CLI-Based-Text-Editor (Notepad Lite) is a **command-line based text editor** developed in **C++**.It allows users to create, view, modify, and search plain text files using simple CLI commands.This project is part of the **Foundation Track – C/C++ Programming** by **console.success** and focuses on file handling, string manipulation, and modular program design.

# Features
- Open or create a plain text file
- View file contents line by line
- Append text to an existing file
- Clear all content of a file
- Search for a keyword and display its line number
- Fully command-line driven interface
- Automatic file creation during write operations

# File Handling Details
- **File Type:** Plain text file (`.txt`)
- **Storage Method:** Sequential storage
- **Structure:** Line-based, no fixed-size records
- **Header:** No header section maintained  
- Each line represents one line of user-entered text

# Supported Commands
- view <filename> -> Displays all lines from the file
- append <filename> -> Adds new text at the end of the file
- search <filename> <word> -> Searches a word and prints line number
- delete <filename> -> Clears all content of the file
- exit -> Exits the text editor

# How to Compile
g++ main.cpp TextEditor.cpp CommandParser.cpp FileUtils.cpp -o texteditor

# Developer
Divya Garg
```bash
g++ main.cpp TextEditor.cpp CommandParser.cpp FileUtils.cpp -o texteditor
