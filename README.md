# Assignment_BTech2026_2201920130181
# GLBITM ASSIGNMENT (2201920130181)
<h3>problem-1</h3> <br>
<h4>Problem Statement :</h4>
You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:<br>
get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.
<br>
<h4>Coding platform used : </h4> 
HackerRank
<h4>Approach and solution explanation: </h4>
first of all i create a private data members because it's a good practice to make a private data members then to access that data memebers i make public method getter and setter and as in question demand that you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this . so for that i make a to_string() method and append all the private data member variable separate by comma in to stringstream object ss that we make and lastly we convert that accumulated stream into string by str() method of stringstream object and then return string from to_string() method that we make<br>
<br>
<br>
<h3>problem-2</h3> <br>
<h4>Problem Statement :</h4>
Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the  exams given during this semester.
<br>
Create a class named  with the following specifications:
<br>
An instance variable named  to hold a student's  exam scores.
A void input() function that reads  integers and saves them to .
An int calculateTotalScore() function that returns the sum of the student's scores.
<br>
<h4>Coding platform used : </h4> 
HackerRank
<h4>Approach and solution explanation: </h4>
The Student class stores a student's exam scores in a vector. It has two key methods: input(), which reads 5 exam scores from the user and stores them in the vector, and calculateTotalScore(), which calculates and returns the sum of the scores. In the main function, the number of students is read, followed by the creation of an array of Student objects. Each student's scores are input, and Kristen's score (the first student's total) is computed. The program then compares each subsequent student's total score to Kristen's, counting how many scored higher. Finally, the result is printed, showing how many students have a higher total score than Kristen.<br>
<br>
<br>
<h3>problem-3</h3> <br>
<h4>Problem Statement :</h4>
Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height .
The default constructor of the class should initialize l,b and h to 0 .<br>
The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  and  to length, breadth and height.
The copy constructor BoxBox ) should set  and  to 's  and , respectively.<br>
Apart from the above, the class should have  functions:<br>
int getLength() - Return box's length<br>
int getBreadth() - Return box's breadth<br>
int getHeight() - Return box's height<br>
long long CalculateVolume() - Return the volume of the box
<br>
<h4>Coding platform used : </h4> 
HackerRank
<h4>Approach and solution explanation: </h4>
I created a Box class with private data members for length, breadth, and height, using a default, parameterized, and copy constructor. Getter methods provide access to these dimensions. The CalculateVolume() method calculates the volume, and I overloaded the "<" operator to compare Box objects based on length, breadth, and height. Additionally, I overloaded the "<<" operator to print the box dimensions. This approach encapsulates data and extends functionality with operator overloading for comparisons and output.<br>
<br>
<br>
<h3>problem-4</h3> <br>
<h4>Problem Statement :</h4>
One of the important topics of Object Oriented Programming is Inheritance. Inheritance allows us to define a class in terms of another class, which allows us in the reusability of the code.Check out the code below:
<br>
class Triangle{<br>
    public:<br>
        void triangle(){<br>
            cout<<"I am a triangle\n";<br>
        }<br>
};<br>
The class Triangle has a function called triangle(). Now we create a class derived from the base class Triangle called Isosceles.<br>
class Isosceles : public Triangle{<br>
    public:<br>
        void isosceles(){<br>
            cout<<"I am an isosceles triangle\n";<br>
        }<br>
};<br>
Now we can create a derived class object and use it to access the functions of the base class.
<br>
<h4>Coding platform used : </h4> 
HackerRank
<h4>Approach and solution explanation: </h4>
To solve this problem, we use inheritance where the Triangle class is the base class with a triangle() method. The Isosceles class, derived from Triangle, adds its own methods: isosceles() to print "I am an isosceles triangle" and description() to print details about isosceles triangles. By using public inheritance, the Isosceles class inherits the triangle() method from Triangle. In the main() function, we create an Isosceles object, call isosceles(), description(), and triangle() to print the respective messages. This demonstrates code reuse and extension using inheritance.<br>
<br>
<br>
<h3>problem-5</h3> <br>
<h4>Problem Statement :</h4>
In this challenge, you are required to compute the area of a rectangle using classes.
<br>
Create two classes:
<br>
Rectangle
<br>
The Rectangle class should have two data fields-width and height of int types. The class should have display() method, to print the width and height of the rectangle separated by space.
<br>
RectangleArea
<br>
The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class. The class should have read_input() method, to read the values of width and height of the rectangle. The RectangleArea class should also overload the display() method to print the area  of the rectangle.
<br>
<h4>Coding platform used : </h4> 
HackerRank
<h4>Approach and solution explanation: </h4>
We create two classes to model the rectangle and its area. The base class, Rectangle, contains the attributes width and height and a method display() to print these dimensions. The derived class, RectangleArea, inherits from Rectangle and adds a method read_input() to capture user input for the dimensions. It also overrides the display() method to print the area of the rectangle, calculated as the product of width and height. This design leverages inheritance for code reuse and method overriding for customized behavior, illustrating the use of object-oriented programming principles.<br>
<br>
<br>
<h3>problem-6</h3> <br>
<h4>Problem Statement :</h4>
Classes define new types in C++. Types in C++ not only interact by means of constructions and assignments but also via operators. For example:
<br>
int a=2, b=1, c;<br>
c = b + a;<br>
The result of variable c will be 3.
Similarly, classes can also perform operations using operator overloading. Operators are overloaded by means of operator functions, which are regular functions with special names. Their name begins with the operator keyword followed by the operator sign that is overloaded. The syntax is:
<br>
type operator sign (parameters) { /*... body ...*/ }
You are given a main() function which takes a set of inputs to create two matrices and prints the result of their addition. You need to write the class Matrix which has a member a of type vector<vector<int> >. You also need to write a member function to overload the operator +. The function's job will be to add two objects of Matrix type and return the resultant Matrix.
<br>
<h4>Coding platform used : </h4> 
HackerRank
<h4>Approach and solution explanation: </h4>
The approach used in this solution involves defining a Matrix class with a vector<vector<int>> to store the matrix elements. Operator overloading is utilized to implement the + operator, which adds two matrices element-wise and returns the result. The main function reads the number of test cases, followed by the dimensions of the matrices. It then initializes two matrices, takes their input, and computes their sum using the overloaded + operator. Finally, the resulting matrix is printed row-wise. This approach ensures modularity, reusability, and clean handling of matrix addition in an object-oriented manner.<br>
<br>
<br>
<h3>problem-7</h3> <br>
<h4>Problem Statement :</h4>
A student signed up for  workshops and wants to attend the maximum number of workshops where no two workshops overlap. You must do the following:
<br>
Implement  structures:
<br>
struct Workshop having the following members:
<br>
The workshop's start time.
The workshop's duration.
The workshop's end time.
struct Available_Workshops having the following members:
<br>
An integer,  (the number of workshops the student signed up for).<br>
An array of type Workshop array having size .<br>
Implement  functions:<br>
<br>
Available_Workshops* initialize (int start_time[], int duration[], int n)<br>
Creates an Available_Workshops object and initializes its elements using the elements in the  and  parameters (both are of size ). Here,  and  are the respective start time and duration for the  workshop. This function must return a pointer to an Available_Workshops object.
<br>
int CalculateMaxWorkshops(Available_Workshops* ptr)<br>
Returns the maximum number of workshops the student can attend—without overlap. The next workshop cannot be attended until the previous workshop ends.
<br>
<h4>Coding platform used : </h4> 
HackerRank
<h4>Approach and solution explanation: </h4>
The approach used to solve the problem follows a greedy algorithm to maximize the number of non-overlapping workshops. First, we define a Workshop structure to store the start time, duration, and end time of each workshop. Then, we create an Available_Workshops structure to manage an array of Workshop objects. The initialize function dynamically allocates memory for workshops and populates them based on the input. To determine the maximum number of non-overlapping workshops, the CalculateMaxWorkshops function sorts the workshops by their end times and iterates through them, selecting only those that do not overlap with previously selected workshops. This ensures an optimal selection of workshops using a greedy scheduling approach, leading to an efficient solution.<br>
<br>
<br>
<h3>problem-8</h3> <br>
<h4>Problem Statement :</h4>
Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.
<br>
<h4>Coding platform used : </h4> 
w3resource
<h4>Approach and solution explanation: </h4>
my approach follows an object-oriented programming (OOP) paradigm by defining a Student class with private member variables to store student details and public methods for functionality. The constructor initializes the student's attributes, and the calculateGrade method determines the grade based on marks using conditional statements. The displayInformation method neatly outputs student details. In the main function, user input is taken for name, class, roll number, and marks, which are then used to instantiate a Student object. Finally, the student's details and computed grade are displayed, making the solution structured, reusable, and user-interactive.<br>
<br>
<br>
<h3>problem-9</h3> <br>
<h4>Problem Statement :</h4>
Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
<br>
<h4>Coding platform used : </h4> 
w3resource
<h4>Approach and solution explanation: </h4>
The approach to solving this problem involves designing a Date class with private members for day, month, and year, along with getter and setter functions to manipulate these values. A constructor initializes the date values, and a validation function (isValidDate()) checks whether the given date is correct based on month-day constraints, including leap year considerations for February. In the main() function, the user inputs a date, which is then validated and displayed accordingly. The solution systematically ensures correctness by verifying month validity, day limits per month, and special leap year rules.<br>
<br>
<br>
<h3>problem-10</h3> <br>
<h4>Problem Statement :</h4>
Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter. Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.
<br>
<h4>Coding platform used : </h4> 
w3resource
<h4>Approach and solution explanation: </h4>
The program follows an object-oriented approach using a base class Shape with pure virtual functions for area and perimeter calculations. Derived classes (Circle, Rectangle, and Triangle) implement these functions using appropriate mathematical formulas, including Heron's formula for triangles. The main() function instantiates these classes and displays their computed values, ensuring modularity and extensibility.<br>
<br>
<br>
