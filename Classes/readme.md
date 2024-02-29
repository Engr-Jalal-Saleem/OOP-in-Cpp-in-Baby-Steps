# YouTube Channel Data Management System

This C++ program allows users to manage data for a YouTube channel, including channel name, owner name, number of subscribers, and published video titles. The program enables users to input channel information and store it in a file for future reference.

## How it Works

1. **YouTube_Channel Class**: Defines a class `YouTube_Channel` with member variables to store channel data, including name, owner name, subscribers count, and a list of published video titles. This class encapsulates data related to a YouTube channel and provides a blueprint for creating instances of YouTube channels.
2. **File Handling**: The program utilizes file handling in C++ to write data to a file using file streams. It opens a file in append mode to ensure existing data is preserved and new data is added to the end of the file.
3. **Main Function**: In the `main` function, users are prompted to input channel information, including name, owner name, subscribers count, and published video titles. The data is then stored in an instance of the `YouTube_Channel` class and written to a file using the `write_YouTube_Channel` function.

## Concepts Explained

### 1. File Handling

File handling is a crucial aspect of many programming tasks, especially when dealing with input/output operations. In this program, file handling is used to write channel data to a file named "YouTube_Channel.txt". The `ofstream` class from the C++ standard library is employed to create an output file stream, and the `<<` operator is used to write data to the file.

### 2. Classes and Objects

Classes and objects are fundamental concepts in object-oriented programming (OOP). A class is a blueprint for creating objects, while an object is an instance of a class. In this program, the `YouTube_Channel` class represents a YouTube channel, encapsulating its data (name, owner name, subscribers count, published video titles) and behavior. Objects of the `YouTube_Channel` class are created in the `main` function to store channel data.

### 3. Lists

The program utilizes the `list` container from the C++ Standard Template Library (STL) to store and manage a dynamic list of published video titles. The `PublishedVideoTitles` member variable of the `YouTube_Channel` class is declared as a `list<string>`, allowing for the storage of multiple video titles. The `push_back` method is used to add video titles to the list, ensuring flexibility and efficiency in managing video data.

## Further Reading

- [File Input/Output in C++](https://www.geeksforgeeks.org/file-handling-c-classes/): Learn more about file handling operations in C++ and how to perform input/output operations with files.
- [Classes and Objects in C++](https://www.geeksforgeeks.org/classes-and-objects-in-cpp/): Explore the concepts of classes and objects in C++, including class declaration, object instantiation, and member functions.
- [C++ Standard Template Library (STL)](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/): Dive deeper into the C++ STL, which provides a rich set of data structures and algorithms for efficient programming.

## Connect with Me

- [LinkedIn Profile](www.linkedin.com/in/engr-jalal-saleem)
- [Instagram](https://www.instagram.com/jalalbinsaleem/)
- [Facebook](https://www.facebook.com/jalalsaleem786)
- [GitHub](https://github.com/Engr-Jalal-Saleem)
- [NPM Account](https://www.npmjs.com/~engr_jalal_saleem)
- [Twitter](https://twitter.com/JSaleem786)
- [Fiverr](https://www.fiverr.com/jalalsaleem786)
