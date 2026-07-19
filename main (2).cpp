#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	char chr;

	cout << "Each question carries 2 marks. Total 10 questions." << endl;
	cout << "If you answer 3 times wrong you need to try again." << endl;
	cout << "Answer by selecting: A, B, C, D (Capital or small letters are accepted)" << endl;
	cout << endl;

	//ARRAY
	string Exp [200] = {
		"Virtual functions enable runtime polymorphism by allowing a base class pointer or reference to call derived class methods.",

		"The Diamond Problem occurs because of multiple inheritance, where a class inherits the same base class through different paths.",

		"Deque stands for Double Ended Queue, allowing insertion and deletion from both the front and back.",

		"The mutable keyword allows specific class member variables to be modified even inside const member functions.",

		"std::move converts an object into an rvalue reference, enabling move semantics instead of copying.",

		"unique_ptr is a smart pointer introduced in C++11 that provides exclusive ownership of an object.",

		"SFINAE means 'Substitution Failure Is Not An Error' and is used in template metaprogramming.",

		"A vtable stores addresses of virtual functions to support runtime polymorphism.",

		"A constexpr function can produce compile-time constant values when given constant arguments.",

		"RAII (Resource Acquisition Is Initialization) automatically manages resources such as memory and files using object lifetime.",

		"The class keyword is used to define a class in C++.",

		"Function overloading allows multiple functions to have the same name with different parameter lists.",

		"The -> operator accesses members of an object through a pointer.",

		"Dynamically allocated memory is stored in the heap.",

		"The final keyword prevents a class from being inherited or a virtual function from being overridden.",

		"A destructor is automatically called when an object is destroyed.",

		"The default access specifier of a class is private.",

		"The <vector> header provides the STL vector container.",

		"The try keyword begins a block that may throw exceptions.",

		"A set stores only unique elements in sorted order.",

		"Polymorphism means one interface or name can represent many different forms.",

		"The << operator sends output to an output stream such as cout.",

		"The const keyword makes a variable or object read-only.",

		"A null pointer does not point to any valid memory location.",

		"A char data type normally occupies one byte of memory.",

		"A do-while loop always executes its body at least once.",

		"Encapsulation hides data by combining variables and functions into a single class.",

		"The this pointer refers to the current object.",

		"Templates enable generic programming by allowing code to work with different data types.",

		"The main() function is the starting point of every C++ program.",

		"The <memory> header contains smart pointers such as unique_ptr and shared_ptr.",

		"The new operator dynamically allocates memory on the heap.",

		"The delete operator releases memory allocated with new.",

		"Inheritance creates a new class from an existing class.",

		"Inheritance promotes code reuse by allowing derived classes to use base class members.",

		"The constexpr keyword defines compile-time constant expressions.",

		"A vector is a dynamic array that automatically resizes as elements are added or removed.",

		"Constructors are not inherited because each class initializes its own objects.",

		"Operator overloading allows operators to work differently for user-defined types.",

		"Namespaces prevent name conflicts between identifiers in different libraries or programs.",

		"The const keyword is used to declare variables whose values cannot be changed after initialization.",

		"A for loop is best when the number of iterations is known in advance.",

		"The dot (.) operator is used to access members of an object directly.",

		"The char data type stores a single character such as 'A' or 'z'.",

		"Both size() and length() return the number of characters in a string.",

		"The <string> header provides the std::string class for handling text.",

		"The public access specifier makes class members accessible from anywhere in the program.",

		"The & operator returns the memory address of a variable.",

		"The * operator dereferences a pointer to access the value stored at its address.",

		"A do-while loop checks its condition after executing the loop body.",

		"The break statement immediately terminates the current loop or switch statement.",

		"The continue statement skips the remaining code of the current iteration and starts the next one.",

		"The main() function is the first function executed in every C++ program.",

		"The modulus (%) operator returns the remainder after division.",

		"The new operator allocates memory dynamically on the heap.",

		"The delete operator releases memory previously allocated using new.",

		"The template keyword allows writing generic functions and classes.",

		"A map stores data as unique key-value pairs.",

		"A stack follows the LIFO (Last In, First Out) principle.",

		"A queue follows the FIFO (First In, First Out) principle.",

		"The final keyword prevents a class from being inherited or a virtual function from being overridden.",

		"The virtual keyword enables runtime polymorphism.",

		"A constructor initializes an object automatically when it is created.",

		"A destructor automatically cleans up resources when an object is destroyed.",

		"A static member belongs to the class itself rather than individual objects.",

		"The scope resolution operator (::) accesses members of a namespace or class.",

		"The <vector> header contains the vector container.",

		"The this pointer points to the current object inside a class member function.",

		"The bool data type stores only two values: true or false.",

		"The && operator performs a logical AND operation.",

		"The || operator performs a logical OR operation.",

		"The ! operator reverses a Boolean value using logical NOT.",

		"The try block contains code that may throw an exception.",

		"The catch block handles exceptions thrown by a try block.",

		"The throw keyword generates an exception.",

		"The <fstream> header provides classes for file input and output.",

		"ifstream is used to read data from files.",

		"ofstream is used to write data to files.",

		"fstream can both read from and write to files.",

		"The << operator inserts data into an output stream such as cout.",

		"The >> operator extracts input from an input stream such as cin.",

		"The getline() function reads an entire line of text, including spaces.",

		"The struct keyword defines a structure, which groups related data members together.",

		"The public access specifier allows members to be accessed from anywhere in the program.",

		"The private access specifier restricts access to members so they can only be used inside the class.",

		"The protected access specifier allows access within the class and its derived classes.",

		"Encapsulation combines data and functions into a single unit while protecting the data.",

		"Abstraction hides unnecessary implementation details and shows only essential features.",

		"Inheritance allows a new class to acquire the properties and behaviors of an existing class.",

		"Polymorphism allows the same interface to perform different actions depending on the object.",

		"A friend function can access private and protected members of a class without being a member.",

		"The friend keyword declares a function or class as a friend.",

		"The inline keyword suggests replacing a function call with the function's code to reduce overhead.",

		"A const member function promises not to modify the object's data members.",

		"typedef creates an alternative name (alias) for an existing data type.",

		"The using keyword in C++11 can also create type aliases in a cleaner way than typedef.",

		"The == operator compares two values to determine if they are equal.",

		"The != operator checks whether two values are different.",

		"The ++ operator increases a variable's value by one.",

		"The -- operator decreases a variable's value by one.",

		"The return statement ends a function and optionally returns a value.",

		"The rand() function generates pseudo-random numbers.",

		"The srand() function initializes the random number generator using a seed value.",

		"The <cstdlib> header contains functions such as rand() and srand().",

		"The <ctime> header provides the time() function used for random number seeding.",

		"The & symbol is used to declare references and obtain variable addresses.",

		"The * symbol is used to declare pointers and dereference pointer variables.",

		"A double pointer stores the address of another pointer.",

		"A void pointer can point to objects of any data type.",

		"nullptr is the modern C++ keyword representing a null pointer.",

		"The enum keyword defines an enumeration, which is a collection of named constants.",

		"A while loop is ideal when the number of iterations depends on a condition.",

		"A switch statement selects one of many possible code blocks based on an expression.",

		"The break statement prevents execution from falling through to the next switch case.",

		"The default case executes when no other switch case matches.",

		"The continue statement skips the remaining statements of the current loop iteration.",

		"The break statement immediately exits the current loop.",

		"The goto statement transfers program control directly to a labeled statement.",

		"The <cmath> header contains mathematical functions such as sqrt() and pow().",

		"The sqrt() function returns the square root of a number.",

		"The pow() function raises a number to a specified power.",

		"The <algorithm> header provides useful algorithms such as sort(), find(), and reverse().",

		"The sort() function arranges elements in ascending order by default.",

		"A vector stores elements in contiguous memory and automatically resizes when needed.",

		"A deque allows efficient insertion and deletion at both the front and back.",

		"A set stores unique elements in sorted order automatically.",

		"A multiset stores sorted elements and allows duplicate values.",

		"A map stores data as unique key-value pairs sorted by key.",

		"A multimap stores key-value pairs and allows duplicate keys.",

		"A deque provides fast insertion and deletion at both ends of the container.",

		"The size() function returns the current number of elements in a vector.",

		"The pop_back() function removes the last element from a vector.",

		"The push_back() function adds a new element to the end of a vector.",

		"The clear() function removes all elements from a container.",

		"The front() function returns the first element of a vector or deque.",

		"The back() function returns the last element of a vector or deque.",

		"The push() function inserts an element onto the top of a stack.",

		"The pop() function removes the top element from a stack.",

		"The top() function returns the top element of a stack without removing it.",

		"The push() function inserts an element at the back of a queue.",

		"The pop() function removes the front element from a queue.",

		"The front() function returns the first element of a queue.",

		"The back() function returns the last element of a queue.",

		"A lambda expression begins with [] to capture variables from the surrounding scope.",

		"The auto keyword automatically deduces the data type of a variable from its initializer.",

		"The delete keyword can disable functions such as copy constructors or assignment operators.",

		"The override keyword ensures that a virtual function correctly overrides a base class function.",

		"The final keyword prevents further overriding of a virtual function or inheritance of a class.",

		"The using keyword allows a derived class to inherit constructors from its base class.",

		"unique_ptr provides exclusive ownership, so only one pointer owns the object at a time.",

		"shared_ptr allows multiple pointers to share ownership of the same object.",

		"weak_ptr observes an object managed by shared_ptr without owning it.",

		"static_cast performs compile-time type conversions between compatible types.",

		"dynamic_cast safely converts pointers or references in polymorphic class hierarchies.",

		"const_cast adds or removes the const qualifier from a variable or pointer.",

		"reinterpret_cast performs low-level conversions between unrelated pointer types.",

		"The namespace keyword groups related identifiers and avoids naming conflicts.",

		"The std namespace contains the C++ Standard Library components.",

		"'using namespace std;' allows you to use standard library names without writing std:: every time.",

		"The scope resolution operator (::) accesses members of a namespace or class.",

		"The class keyword is used to define a class in C++.",

		"The struct keyword is used to define a structure, whose members are public by default.",

		"A constructor is automatically called when an object is created to initialize it.",

		"A destructor is automatically called when an object is destroyed to release resources.",

		"A default constructor is a constructor that takes no parameters.",

		"A copy constructor creates a new object by copying an existing object.",

		"The constexpr keyword declares expressions or functions that can be evaluated at compile time.",

		"The static keyword makes a data member or function belong to the class instead of individual objects.",

		"The virtual keyword allows a function to be overridden, enabling runtime polymorphism.",

		"The this pointer refers to the current object inside a member function.",

		"The [] operator is overloaded to access elements like an array in user-defined classes.",

		"The () operator can be overloaded so an object behaves like a function.",

		"The scope resolution operator (::) cannot be overloaded in C++.",

		"A pure virtual function is declared by assigning = 0, making the class abstract.",

		"An abstract class contains at least one pure virtual function and cannot be instantiated.",

		"Public inheritance preserves the public and protected members of the base class in the derived class.",

		"Virtual inheritance solves the Diamond Problem by ensuring only one copy of the shared base class exists.",

		"The virtual keyword is used to declare virtual inheritance.",

		"The swap() function exchanges the values of two variables or objects.",

		"The find() algorithm searches for an element within a container.",

		"The reverse() algorithm reverses the order of elements in a range.",

		"The count() algorithm counts how many times a value appears in a range.",

		"The begin() function returns an iterator pointing to the first element of a container.",

		"The end() function returns an iterator pointing just past the last element of a container.",

		"The empty() function checks whether a container contains any elements.",

		"The erase() function removes a specific element or range of elements from a container.",

		"The const keyword creates variables or objects whose values cannot be modified.",

		"The constexpr keyword creates constants that can be evaluated during compilation.",

		"The #include directive includes the contents of a header file into a program.",

		"The #define directive creates macros or symbolic constants during preprocessing.",

		"The & operator performs a bitwise AND operation on binary values.",

		"The | operator performs a bitwise OR operation on binary values.",

		"The ^ operator performs a bitwise XOR operation, returning 1 when bits differ.",

		"The ~ operator performs a bitwise NOT operation by inverting all bits.",

		"The << operator shifts bits to the left, effectively multiplying by powers of two in many cases.",

		"The >> operator shifts bits to the right, effectively dividing by powers of two in many cases.",

		"The abs() function returns the absolute (non-negative) value of an integer.",

		"The <cstdlib> header provides functions such as abs(), rand(), and srand().",

		"The return statement immediately exits a function and optionally returns a value.",

		"Objects created by simply declaring them, such as 'Student s;', are allocated on the stack.",
	};
	string Ans [200] = {
		"B) Achieve runtime polymorphism",
		"B) Multiple inheritance",
		"A) Double Ended Queue",
		"B) Variables inside a class",
		"C) Converts an object into an rvalue reference",
		"B) unique_ptr",
		"B) Substitution Failure Is Not An Error",
		"B) Virtual function calling mechanism",
		"A) Return compile-time constant when possible",
		"A) Resource management",
		"B) class",
		"B) Function overloading",
		"C) ->",
		"B) Heap",
		"B) final",
		"B) Destructor",
		"C) Private",
		"B) vector",
		"A) try",
		"C) Set",
		"A) One name, many forms",
		"A) <<",
		"B) const",
		"A) Null pointer",
		"A) 1 byte",
		"C) do-while",
		"A) Encapsulation",
		"C) this",
		"A) Generic programming",
		"B) main()",
		"A) memory",
		"B) new",
		"A) delete",
		"A) Creating new class from existing class",
		"A) Inheritance",
		"A) constexpr",
		"A) Vector",
		"A) Constructor",
		"A) Operator overloading",
		"A) Avoid name conflicts",
		"B) const",
		"C) for",
		"A) .",
		"B) char",
		"C) Both A and B",
		"B) <string>",
		"C) public",
		"B) &",
		"A) *",
		"C) do-while",
		"B) break",
		"C) continue",
		"C) main()",
		"B) %",
		"C) new",
		"C) delete",
		"B) template",
		"C) map",
		"B) stack",
		"B) queue",
		"B) final",
		"B) virtual",
		"B) Constructor",
		"B) Destructor",
		"B) static",
		"C) ::",
		"B) <vector>",
		"C) this",
		"A) bool",
		"B) &&",
		"C) ||",
		"B) !",
		"A) try",
		"B) catch",
		"B) throw",
		"A) <fstream>",
		"B) ifstream",
		"B) ofstream",
		"C) fstream",
		"B) <<",
		"B) >>",
		"A) getline()",
		"B) struct",
		"C) public",
		"A) private",
		"B) protected",
		"B) Encapsulation",
		"B) Abstraction",
		"B) Inheritance",
		"B) Polymorphism",
		"B) Friend function",
		"B) friend",
		"A) inline",
		"C) const",
		"B) typedef",
		"B) using",
		"B) ==",
		"B) !=",
		"B) ++",
		"A) --",
		"C) return",
		"B) rand()",
		"C) srand()",
		"A) <cstdlib>",
		"A) <ctime>",
		"B) &",
		"B) *",
		"C) Double pointer",
		"C) void pointer",
		"B) nullptr",
		"A) enum",
		"B) while",
		"C) switch",
		"B) break",
		"B) default",
		"B) continue",
		"B) break",
		"B) goto",
		"A) <cmath>",
		"B) sqrt()",
		"B) >>",
		"A) getline()",
		"B) struct",
		"C) public",
		"A) private",
		"B) protected",
		"B) Encapsulation",
		"B) Abstraction",
		"B) Inheritance",
		"B) Polymorphism",
		"B) Friend function",
		"B) friend",
		"A) inline",
		"C) const",
		"B) typedef",
		"B) using",
		"B) ==",
		"B) !=",
		"B) ++",
		"A) --",
		"C) return",
		"B) rand()",
		"C) srand()",
		"A) <cstdlib>",
		"A) <ctime>",
		"B) &",
		"B) *",
		"C) Double pointer",
		"C) void pointer",
		"B) nullptr",
		"A) enum",
		"B) while",
		"C) switch",
		"B) break",
		"B) default",
		"B) continue",
		"B) break",
		"B) goto",
		"A) <cmath>",
		"B) sqrt()",
		"A) class",
		"C) struct",
		"B) Constructor",
		"B) Destructor",
		"C) Default Constructor",
		"A) Copy Constructor",
		"B) constexpr",
		"B) static",
		"B) virtual",
		"C) this",
		"B) []",
		"A) ()",
		"B) ::",
		"C) = 0",
		"C) Abstract Class",
		"C) Public Inheritance",
		"B) Virtual Inheritance",
		"A) virtual",
		"C) swap()",
		"B) find()",
		"B) reverse()",
		"B) count()",
		"A) begin()",
		"C) end()",
		"C) empty()",
		"A) erase()",
		"B) const",
		"B) constexpr",
		"A) #include",
		"A) #define",
		"B) &",
		"B) |",
		"A) ^",
		"B) ~",
		"A) <<",
		"B) >>",
		"A) abs()",
		"A) <cstdlib>",
		"C) return",
		"D) Simply declare the object",
	};
	string que [200] = {
		" What is the main purpose of a virtual function in C++?\nA) Increase speed\nB) Achieve runtime polymorphism\nC) Create variables\nD) Allocate memory",

		" Diamond Problem occurs because of which concept in C++?\nA) Encapsulation\nB) Multiple inheritance\nC) Templates\nD) Operator overloading",

		" What is the full form of deque in STL?\nA) Double Ended Queue\nB) Dynamic End Queue\nC) Data End Queue\nD) Direct Element Queue",

		" Mutable keyword in C++ is used with:\nA) Functions\nB) Variables inside a class\nC) Loops\nD) Constructors only",

		" What does std::move actually do?\nA) Copies an object\nB) Deletes an object\nC) Converts an object into an rvalue reference\nD) Moves data physically in memory",

		" Which smart pointer was introduced in C++11?\nA) auto_ptr\nB) unique_ptr\nC) raw_ptr\nD) safe_ptr",

		" SFINAE stands for:\nA) Simple Function Inheritance And Execution\nB) Substitution Failure Is Not An Error\nC) Standard Function Interface Not Available Everywhere\nD) System Failure Is Not Allowed Everywhere",

		" vtable in C++ is used for:\nA) Memory allocation\nB) Virtual function calling mechanism\nC) Loop execution\nD) File handling",

		" constexpr function requirement is:\nA) Return compile-time constant when possible\nB) Only contain loops\nC) Cannot return values\nD) Must be private",

		" RAII principle is related to:\nA) Resource management\nB) Inheritance\nC) Templates\nD) Exception names",

		" Which keyword is used to create a class in C++?\nA) object\nB) class\nC) structure\nD) define",

		" Same function name with different parameters is called:\nA) Inheritance\nB) Function overloading\nC) Encapsulation\nD) Abstraction",

		" Which operator accesses members through a pointer?\nA) .\nB) ::\nC) ->\nD) *",

		" Dynamically allocated memory is stored in:\nA) Stack\nB) Heap\nC) Register\nD) Cache",

		" Which keyword prevents inheritance?\nA) static\nB) final\nC) private\nD) stop",

		" Function automatically called when object is destroyed:\nA) Constructor\nB) Destructor\nC) Main function\nD) Virtual function",

		" Default access modifier of a class in C++ is:\nA) Public\nB) Protected\nC) Private\nD) Global",

		" Header file required for vector:\nA) iostream\nB) vector\nC) string\nD) memory",

		" Keyword used for exception handling:\nA) try\nB) error\nC) catchonly\nD) exception",

		" STL container that stores unique elements:\nA) Vector\nB) List\nC) Set\nD) Array",

		" Polymorphism means:\nA) One name, many forms\nB) One class only\nC) Removing objects\nD) Creating variables",

		" Output stream operator is:\nA) <<\nB) >>\nC) +\nD) =",

		" Keyword used for constant variable:\nA) fixed\nB) const\nC) constant\nD) immutable",

		" Pointer that points to nothing is called:\nA) Null pointer\nB) Smart pointer\nC) This pointer\nD) Reference pointer",

		" Size of char data type is normally:\nA) 1 byte\nB) 2 bytes\nC) 4 bytes\nD) 8 bytes",

		" Loop that executes at least one time:\nA) for\nB) while\nC) do-while\nD) infinite loop",

		" Hiding data from outside access is called:\nA) Encapsulation\nB) Inheritance\nC) Polymorphism\nD) Compilation",

		" Keyword referring to current object:\nA) current\nB) self\nC) this\nD) object",

		" Templates are used for:\nA) Generic programming\nB) File handling\nC) Memory deletion\nD) Debugging",

		" Function where C++ program starts execution:\nA) start()\nB) main()\nC) run()\nD) execute()",

		" Header file containing smart pointers:\nA) memory\nB) pointer\nC) smart\nD) stdptr",

		" Operator used for dynamic memory allocation:\nA) create\nB) new\nC) malloc\nD) alloc",

		" Operator used to release dynamic memory:\nA) delete\nB) remove\nC) free\nD) clear",

		" Inheritance means:\nA) Creating new class from existing class\nB) Deleting class\nC) Creating variables\nD) Running code",

		" Feature that supports code reuse:\nA) Inheritance\nB) Comments\nC) Operators\nD) Variables",

		" Keyword used for constant expression:\nA) constexpr\nB) constant\nC) fixed\nD) static",

		" STL container like a dynamic array:\nA) Vector\nB) Map\nC) Stack\nD) Queue",

		" Which function cannot be inherited?\nA) Constructor\nB) Normal function\nC) Virtual function\nD) Public function",

		" Same operator working differently is called:\nA) Operator overloading\nB) Encapsulation\nC) Compilation\nD) Namespace",

		" Namespace in C++ is used to:\nA) Avoid name conflicts\nB) Increase memory\nC) Create objects\nD) Delete variables",

		" Which keyword is used to define a constant variable?\nA) final\nB) const\nC) static\nD) fixed",

		" Which loop is most suitable when the number of iterations is known?\nA) while\nB) do-while\nC) for\nD) switch",

		" Which operator is used to access members of an object?\nA) .\nB) ->\nC) ::\nD) *",

		" Which data type stores a single character?\nA) string\nB) char\nC) int\nD) bool",

		" Which function is used to get the length of a string?\nA) size()\nB) length()\nC) Both A and B\nD) count()",

		" Which header file is required for string?\nA) <vector>\nB) <string>\nC) <array>\nD) <map>",

		" Which keyword is used to inherit a class publicly?\nA) extends\nB) inherits\nC) public\nD) protected",

		" Which operator returns the address of a variable?\nA) *\nB) &\nC) %\nD) ->",

		" Which operator is used to dereference a pointer?\nA) *\nB) &\nC) .\nD) ::",

		" Which loop checks the condition after executing the body?\nA) for\nB) while\nC) do-while\nD) switch",

		" Which keyword exits a loop immediately?\nA) continue\nB) break\nC) stop\nD) return",

		" Which keyword skips the current iteration?\nA) break\nB) skip\nC) continue\nD) exit",

		" Which function is the entry point of a C++ program?\nA) start()\nB) begin()\nC) main()\nD) init()",

		" Which operator is used for modulus?\nA) /\nB) %\nC) *\nD) +",

		" Which keyword creates an object dynamically?\nA) malloc\nB) alloc\nC) new\nD) create",

		" Which keyword frees memory allocated with new?\nA) free\nB) clear\nC) delete\nD) remove",

		" Which keyword is used to define a template?\nA) generic\nB) template\nC) typename\nD) class",

		" Which STL container stores elements in key-value pairs?\nA) vector\nB) list\nC) map\nD) stack",

		" Which STL container follows LIFO?\nA) queue\nB) stack\nC) deque\nD) vector",

		" Which STL container follows FIFO?\nA) stack\nB) queue\nC) vector\nD) set",

		" Which keyword prevents a function from being overridden?\nA) static\nB) final\nC) const\nD) virtual",

		" Which keyword is used for runtime polymorphism?\nA) inline\nB) virtual\nC) static\nD) friend",

		" Which function is called automatically when an object is created?\nA) Destructor\nB) Constructor\nC) Virtual function\nD) Friend function",

		" Which function is called automatically when an object is destroyed?\nA) Constructor\nB) Destructor\nC) Main\nD) Operator",

		" Which keyword makes a member accessible without creating an object?\nA) public\nB) static\nC) virtual\nD) const",

		" Which operator is used for scope resolution?\nA) .\nB) ->\nC) ::\nD) :",

		" Which header file is required for vector?\nA) <map>\nB) <vector>\nC) <list>\nD) <queue>",

		" Which keyword refers to the current object?\nA) self\nB) object\nC) this\nD) current",

		" Which data type stores true or false?\nA) bool\nB) int\nC) char\nD) string",

		" Which operator is used for logical AND?\nA) &\nB) &&\nC) ||\nD) !",

		" Which operator is used for logical OR?\nA) &&\nB) |\nC) ||\nD) !",

		" Which operator is used for logical NOT?\nA) ~\nB) !\nC) !=\nD) ^",

		" Which keyword is used to handle exceptions?\nA) try\nB) check\nC) test\nD) catchonly",

		" Which block catches an exception?\nA) throw\nB) catch\nC) finally\nD) error",

		" Which keyword throws an exception?\nA) catch\nB) throw\nC) try\nD) raise",

		" Which header file is required for file handling?\nA) <fstream>\nB) <string>\nC) <vector>\nD) <iostream>",

		" Which class is used to read from a file?\nA) ofstream\nB) ifstream\nC) fstream\nD) file",

		" Which class is used to write to a file?\nA) ifstream\nB) ofstream\nC) inputstream\nD) ostream",

		" Which class can both read and write files?\nA) ifstream\nB) ofstream\nC) fstream\nD) filestream",

		" Which operator is used to insert data into an output stream?\nA) >>\nB) <<\nC) ==\nD) =",

		" Which operator extracts input from cin?\nA) <<\nB) >>\nC) ==\nD) =",

		" Which function is used to read an entire line of text?\nA) getline()\nB) scanf()\nC) gets()\nD) read()",

		" Which keyword defines a structure in C++?\nA) class\nB) struct\nC) object\nD) record",

		" Which access specifier makes class members accessible everywhere?\nA) private\nB) protected\nC) public\nD) internal",

		" Which access specifier allows access only inside the class?\nA) private\nB) public\nC) protected\nD) friend",

		" Which access specifier allows access in derived classes?\nA) static\nB) protected\nC) private\nD) global",

		" Which concept combines data and functions into one unit?\nA) Inheritance\nB) Encapsulation\nC) Polymorphism\nD) Abstraction",

		" Which OOP concept hides implementation details?\nA) Encapsulation\nB) Abstraction\nC) Inheritance\nD) Overloading",

		" Which OOP concept allows one class to acquire properties of another?\nA) Encapsulation\nB) Inheritance\nC) Polymorphism\nD) Abstraction",

		" Which OOP concept allows one interface with many implementations?\nA) Inheritance\nB) Polymorphism\nC) Encapsulation\nD) Aggregation",

		" Which function can access private members without being a class member?\nA) Static function\nB) Friend function\nC) Virtual function\nD) Inline function",

		" Which keyword declares a friend function?\nA) public\nB) friend\nC) static\nD) inline",

		" Which keyword allows a function to be expanded inline?\nA) inline\nB) static\nC) virtual\nD) const",

		" Which keyword is used to define a constant member function?\nA) final\nB) static\nC) const\nD) mutable",

		" Which keyword is used to create an alias for a data type?\nA) alias\nB) typedef\nC) define\nD) usingtype",

		" Which C++11 keyword can also create a type alias?\nA) alias\nB) using\nC) typedef\nD) define",

		" Which operator compares two values for equality?\nA) =\nB) ==\nC) !=\nD) >=",

		" which operator checks if two values are not equal?\nA) ==\nB) !=\nC) <>\nD) =",

		" Which operator increments a variable by one?\nA) --\nB) ++\nC) +=\nD) +",

		" Which operator decrements a variable by one?\nA) --\nB) ++\nC) -=\nD) -",

		" Which keyword is used to exit a function and return a value?\nA) stop\nB) break\nC) return\nD) exit",

		" Which function is commonly used to generate random numbers?\nA) random()\nB) rand()\nC) srand()\nD) randomize()",

		" Which function initializes the random number generator?\nA) rand()\nB) random()\nC) srand()\nD) seed()",

		" Which header file contains rand() and srand()?\nA) <cstdlib>\nB) <ctime>\nC) <random>\nD) <cmath>",

		" Which header file contains time()?\nA) <ctime>\nB) <cstdlib>\nC) <time>\nD) <chrono>",

		" Which keyword creates a reference variable?\nA) *\nB) &\nC) ref\nD) reference",

		" Which symbol is used to declare a pointer?\nA) &\nB) *\nC) #\nD) @",

		" Which pointer stores the address of another pointer?\nA) Smart pointer\nB) Void pointer\nC) Double pointer\nD) Null pointer",

		" Which pointer can point to any data type?\nA) int pointer\nB) char pointer\nC) void pointer\nD) float pointer",

		" Which value represents a null pointer in modern C++?\nA) NULL\nB) nullptr\nC) zero\nD) empty",

		" Which keyword is used to define an enumeration?\nA) enum\nB) enumerate\nC) enumclass\nD) list",

		" Which loop is best when the condition depends on user input?\nA) for\nB) while\nC) switch\nD) goto",

		" Which statement is used for multiple-choice selection?\nA) if\nB) else\nC) switch\nD) loop",

		" Which keyword is required inside switch to prevent fall-through?\nA) continue\nB) break\nC) stop\nD) exit",

		" Which statement is executed when no switch case matches?\nA) else\nB) default\nC) none\nD) catch",

		" Which keyword skips the rest of the current loop iteration?\nA) break\nB) continue\nC) return\nD) exit",

		" Which keyword exits the current loop immediately?\nA) continue\nB) break\nC) stop\nD) goto",

		" Which keyword transfers control to a labeled statement?\nA) jump\nB) goto\nC) continue\nD) break",

		" Which header file is required for mathematical functions like sqrt()?\nA) <cmath>\nB) <math>\nC) <cstdlib>\nD) <algorithm>",

		" Which function returns the square root of a number?\nA) square()\nB) sqrt()\nC) root()\nD) pow()",

		" Which function raises a number to a given power?\nA) sqrt()\nB) pow()\nC) power()\nD) exp()",

		" Which header file is required for std::sort()?\nA) <algorithm>\nB) <vector>\nC) <array>\nD) <utility>",

		" Which STL algorithm sorts elements in ascending order by default?\nA) reverse()\nB) sort()\nC) arrange()\nD) order()",

		" Which STL container stores elements in contiguous memory?\nA) list\nB) vector\nC) map\nD) set",

		" Which STL container allows fast insertion at both front and back?\nA) vector\nB) deque\nC) map\nD) set",

		" Which STL container stores unique keys in sorted order?\nA) vector\nB) queue\nC) set\nD) stack",

		" Which STL container allows duplicate elements in sorted order?\nA) multiset\nB) set\nC) vector\nD) queue",

		" Which STL container stores key-value pairs with unique keys?\nA) map\nB) vector\nC) deque\nD) stack",

		" Which STL container allows duplicate keys?\nA) map\nB) multimap\nC) set\nD) vector",

		" Which STL container provides fast insertion and deletion at both ends?\nA) queue\nB) deque\nC) map\nD) array",

		" Which function returns the number of elements in a vector?\nA) count()\nB) size()\nC) length()\nD) capacity()",

		" Which function removes the last element of a vector?\nA) erase()\nB) pop_back()\nC) clear()\nD) remove()",

		" Which function adds an element at the end of a vector?\nA) insert()\nB) push_back()\nC) add()\nD) append()",

		" Which function removes all elements from a vector?\nA) erase()\nB) remove()\nC) clear()\nD) pop_back()",

		" Which function returns the first element of a vector?\nA) first()\nB) front()\nC) begin()\nD) top()",

		" Which function returns the last element of a vector?\nA) end()\nB) back()\nC) last()\nD) rear()",

		" Which stack function inserts an element?\nA) insert()\nB) push()\nC) add()\nD) enqueue()",

		" Which stack function removes the top element?\nA) pop()\nB) delete()\nC) remove()\nD) erase()",

		" Which stack function returns the top element?\nA) front()\nB) top()\nC) back()\nD) peektop()",

		" Which queue function inserts an element?\nA) push()\nB) enqueue()\nC) insert()\nD) add()",

		" Which queue function removes the front element?\nA) pop()\nB) delete()\nC) remove()\nD) erase()",

		" Which queue function returns the front element?\nA) top()\nB) front()\nC) first()\nD) begin()",

		" Which queue function returns the last element?\nA) rear()\nB) back()\nC) end()\nD) last()",

		" Which keyword is used to define a lambda expression?\nA) lambda\nB) []\nC) =>\nD) func",

		" Which C++11 feature automatically deduces a variable's type?\nA) auto\nB) var\nC) dynamic\nD) infer",

		" Which keyword prevents copying of a class object?\nA) delete\nB) final\nC) private\nD) static",

		" Which keyword specifies that a function overrides a virtual function?\nA) override\nB) virtual\nC) final\nD) replace",

		" Which keyword prevents further overriding of a virtual function?\nA) const\nB) final\nC) stop\nD) override",

		" Which keyword is used to inherit constructors from a base class?\nA) using\nB) inherit\nC) extends\nD) constructor",

		" Which smart pointer allows only one owner of an object?\nA) shared_ptr\nB) weak_ptr\nC) unique_ptr\nD) auto_ptr",

		" Which smart pointer allows multiple owners of the same object?\nA) unique_ptr\nB) weak_ptr\nC) shared_ptr\nD) raw_ptr",

		" Which smart pointer does not own the object?\nA) shared_ptr\nB) unique_ptr\nC) weak_ptr\nD) auto_ptr",

		" Which C++ cast performs compile-time type conversion?\nA) static_cast\nB) dynamic_cast\nC) reinterpret_cast\nD) const_cast",

		" Which cast is mainly used with polymorphic classes?\nA) static_cast\nB) dynamic_cast\nC) reinterpret_cast\nD) const_cast",

		" Which cast removes the const qualifier?\nA) static_cast\nB) const_cast\nC) dynamic_cast\nD) reinterpret_cast",

		" Which cast performs low-level reinterpretation of bits?\nA) dynamic_cast\nB) reinterpret_cast\nC) const_cast\nD) static_cast",

		" Which keyword is used to declare a namespace?\nA) package\nB) namespace\nC) module\nD) scope",

		" Which namespace contains the standard C++ library?\nA) global\nB) std\nC) cpp\nD) system",

		" Which directive allows using names from the std namespace without std::?\nA) using namespace std;\nB) include std;\nC) namespace std;\nD) using std;",

		" Which symbol is used to access members of a namespace?\nA) .\nB) ->\nC) ::\nD) :",

		" Which keyword is used to define a class in C++?\nA) class\nB) struct\nC) object\nD) define",

		" Which keyword is used to define a structure?\nA) object\nB) class\nC) struct\nD) record",

		" Which function is automatically called when an object is created?\nA) Destructor\nB) Constructor\nC) Friend Function\nD) Virtual Function",

		" Which function is automatically called when an object is destroyed?\nA) Constructor\nB) Destructor\nC) Main Function\nD) Static Function",

		" Which constructor takes no parameters?\nA) Copy Constructor\nB) Parameterized Constructor\nC) Default Constructor\nD) Move Constructor",

		" Which constructor creates an object using another object?\nA) Copy Constructor\nB) Default Constructor\nC) Destructor\nD) Friend Constructor",

		" Which keyword is used to define a constant expression?\nA) const\nB) constexpr\nC) static\nD) final",

		" Which keyword makes a member shared by all objects?\nA) const\nB) static\nC) virtual\nD) friend",

		" Which keyword allows a function to be overridden?\nA) static\nB) virtual\nC) inline\nD) mutable",

		" Which keyword refers to the current object inside a class?\nA) self\nB) object\nC) this\nD) current",

		" Which operator is overloaded to access array elements?\nA) ()\nB) []\nC) {}\nD) <>",

		" Which operator is overloaded for function call?\nA) ()\nB) []\nC) {}\nD) *",

		" Which operator cannot be overloaded?\nA) +\nB) ::\nC) ==\nD) []",

		" Which keyword is used to define a pure virtual function?\nA) virtual\nB) abstract\nC) = 0\nD) final",

		" A class containing at least one pure virtual function is called:\nA) Friend Class\nB) Static Class\nC) Abstract Class\nD) Nested Class",

		" Which inheritance type allows access to protected members in derived classes?\nA) Private Inheritance\nB) Protected Inheritance\nC) Public Inheritance\nD) Virtual Inheritance",

		" Which inheritance type is used to solve the Diamond Problem?\nA) Multiple Inheritance\nB) Virtual Inheritance\nC) Hybrid Inheritance\nD) Hierarchical Inheritance",

		" Which keyword is used for virtual inheritance?\nA) virtual\nB) inherit\nC) extends\nD) final",

		" Which function is used to swap two values?\nA) replace()\nB) exchange()\nC) swap()\nD) change()",

		" Which STL algorithm searches for an element?\nA) search()\nB) find()\nC) locate()\nD) match()",

		" Which STL algorithm reverses a sequence?\nA) invert()\nB) reverse()\nC) rotate()\nD) flip()",

		" Which STL algorithm counts matching elements?\nA) size()\nB) count()\nC) total()\nD) length()",

		" Which STL iterator points to the first element?\nA) begin()\nB) first()\nC) front()\nD) start()",

		" Which STL iterator points past the last element?\nA) finish()\nB) last()\nC) end()\nD) rear()",

		" Which function checks whether a container is empty?\nA) size()\nB) clear()\nC) empty()\nD) erase()",

		" Which function removes a specific element from a vector?\nA) erase()\nB) clear()\nC) pop_back()\nD) remove_back()",

		" Which keyword is used to declare a constant object?\nA) final\nB) const\nC) static\nD) constexpr",

		" Which keyword is used to define compile-time constants?\nA) const\nB) constexpr\nC) define\nD) static",

		" Which preprocessor directive includes a header file?\nA) #include\nB) #define\nC) #ifdef\nD) #endif",

		" Which preprocessor directive defines a macro?\nA) #define\nB) #include\nC) #pragma\nD) #error",

		" Which operator is used for bitwise AND?\nA) &&\nB) &\nC) |\nD) ^",

		" Which operator is used for bitwise OR?\nA) ||\nB) |\nC) &\nD) ^",

		" Which operator is used for bitwise XOR?\nA) ^\nB) &\nC) |\nD) ~",

		" Which operator is used for bitwise NOT?\nA) !\nB) ~\nC) ^\nD) &",

		" Which operator shifts bits to the left?\nA) <<\nB) >>\nC) <\nD) <<<",

		" Which operator shifts bits to the right?\nA) <<\nB) >>\nC) >\nD) >>>",

		" Which function returns the absolute value of an integer?\nA) abs()\nB) sqrt()\nC) pow()\nD) fabs()",

		" Which header file contains the abs() function?\nA) <cstdlib>\nB) <iostream>\nC) <vector>\nD) <fstream>",

		" Which keyword is used to terminate the current function immediately?\nA) break\nB) continue\nC) return\nD) exit",

		" Which keyword is used to create an object on the stack?\nA) new\nB) class\nC) Constructor Call\nD) Simply declare the object",

	};
	char lans [200] = {
		'B','B','A','B','C','B','B','B','A','A',
		'B','B','C','B','B','B','C','B','A','C',
		'A','A','B','A','A','C','A','C','A','B',
		'A','B','A','A','A','A','A','A','A','A',
		'B','C','A','B','C','B','C','B','A','C',
		'B','C','C','B','C','C','B','C','B','B',
		'B','B','B','B','C','C','B','C','A','B',
		'C','B','A','B','B','A','B','B','C','B',
		'B','A','B','C','A','B','B','B','B','B',
		'B','B','A','C','B','B','B','B','B','A',
		'A','B','C','A','A','B','B','C','C','B',
		'A','B','C','B','B','B','B','B','A','B',
		'B','B','A','B','B','B','B','B','C','A',
		'B','B','B','B','C','B','B','B','B','B',
		'B','A','B','B','A','A','B','B','B','B',
		'B','B','A','A','B','B','C','A','B','B',
		'B','B','A','B','B','B','C','B','A','B',
		'C','B','A','C','B','B','C','B','C','A',
		'B','B','B','A','A','B','B','A','B','B',
		'A','B','A','B','C','A','A','C','D'
	};
	char sans [200] = {
		'b','b','a','b','c','b','b','b','a','a',
		'b','b','c','b','b','b','c','b','a','c',
		'a','a','b','a','a','c','a','c','a','b',
		'a','b','a','a','a','a','a','a','a','a',
		'b','c','a','b','c','b','c','b','a','c',
		'b','c','c','b','c','c','b','c','b','b',
		'b','b','b','b','c','c','b','c','a','b',
		'c','b','a','b','b','a','b','b','c','b',
		'b','a','b','c','a','b','b','b','b','b',
		'b','b','a','c','b','b','b','b','b','a',
		'a','b','c','a','a','b','b','c','c','b',
		'a','b','c','b','b','b','b','b','a','b',
		'b','b','a','b','b','b','b','b','c','a',
		'b','b','b','b','c','b','b','b','b','b',
		'b','a','b','b','a','a','b','b','b','b',
		'b','b','a','a','b','b','c','a','b','b',
		'b','b','a','b','b','b','c','b','a','b',
		'c','b','a','c','b','b','c','b','c','a',
		'b','b','b','a','a','b','b','a','b','b',
		'a','b','a','b','c','a','a','c','d'
	};

	int size = 200;

	// number of questions to ask this round
	int tq = 10;

	// plain int flags instead of bool, set manually with a loop
	int used [200];
	for (int k = 0; k < 200; k++)
	{
		used[k] = 0;
	}

	int life = 0;
	int wc = 0;
	int score = 0;

	// seed random number generator (basic C-style cast, no static_cast)
	srand((unsigned)time(0));

	// main quiz loop
	for (int q = 1; q <= tq; q++)
	{
		int i;
		do
		{
			i = rand() % size;
		} while (used[i] == 1);
		used[i] = 1;

		cout << "Question " << q << " of " << tq << ":" << endl;
		cout << que[i] << endl;
		cout << "Your Answer: ";
		cin >> chr;

		if (chr == lans[i] || chr == sans[i])
		{
			cout << "You're Right ";
			score = score + 2;
		}
		else
		{
			cout << "Wrong Answer " << endl;
			cout << "Right Answer is " << Ans[i] << endl;
			cout << "Explanation: " << Exp [i] <<  endl;
			wc = wc + 1;
			if (wc >= 3)
			{
				cout << endl;
				cout << "You Answered 3 Times Wrong. Your Final Score Before Stopping: " << score << endl;
				break;
			}
		}
		cout << endl;
	}

	cout << " Quiz Finished! " << endl;
	cout << "Your Score " << score << " Out of " << tq * 2 << endl;

	return 0;
}