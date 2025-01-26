# Assignment_BTech2026_2201920130181
# GLBITM ASSIGNMENT (2201920130181)
<h3>26-01-2025 problem-1</h3> <br>
<h4>Problem Statement :</h4> <br>
You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:<br>
get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.
<br>
<h4>Coding platform used : </h4> <br>
HackerRank
<h4>Approach and solution explanation: </h4> <br>
first of all i create a private data members because it's a good practice to make a private data members then to access that data memebers i make public method getter and setter and as in question demand that you have to create another <br>method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this . so for that i make a to_string() method and append all the private data member variable <br>separate by comma in to stringstream object ss that we make and lastly return that object from to_string() method that we make<br>
