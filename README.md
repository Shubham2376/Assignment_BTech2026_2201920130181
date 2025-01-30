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
