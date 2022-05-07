# my_rqt

This class demonstrates the use of the QT widget framework to display the log messages of a simple ROS2-like Node logging system.

Rubric items

1. A variety of control structures are used in the project: switch (on an enum class), for, if
2. The project code is clearly organized into functions: see project
3. The project reads data from a file and process the data, or the program writes data to a file: reads in a searchable text file
4. The project accepts user input and processes the input: the program processes a search term
5. The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks:
Both QT and ROS2 (Node, Logger, etc.) classes are written using OO principles, including an abstract class Subscriber.
6. All class data members are explicitly specified as public, protected, or private: all classes are written this way
7. All class members that are set to argument values are initialized through member initialization lists: see Node and mainwindow for examples
8. All class member functions document their effects, either through function names, comments, or formal documentation. Member functions
do not change program state in undocumented ways: see source code
9. Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user.
State is accessed via member functions: for instance, _logger is a private member of Node
10. Inheritance hierarchies are logical. Composition is used instead of inheritance when appropriate.
Abstract classes are composed of pure virtual functions. Override functions are specified: mainwindow inherits from both QMainWindow
and the abstract class Subscriber.
11. One member function in an inherited class overrides a virtual base class member function: see 10
12. 

Install qt
```
sudo apt-get install build-essential libgl1-mesa-dev
```

Clone
```
git clone https://github.com/christophomos/my_rqt.git
```

Build
```
cd my_rqt
mkdir build
cmake ..
make
```

Run
```
./my_rqt
```
