# cwiczeniaB

Task description in English -> Task 2.2. IT Company
Create a class Employee representing an employee of an IT company with the following elements:
• private attributes:
  o surname as the employee's last name,
  o age as the employee's age,
  o experience as the work experience expressed in years,
  o salary as the monthly salary.
• a parameterized constructor allowing the initialization of class fields;
• a parameterless constructor;
• a virtual destructor;
• a virtual method void show(), which will display information about the employee;
• a pure virtual method int calculateSalary(int value);
• a method int ageEmployment(), calculating the age at the time of employment;
• appropriate getters for the fields.
Create a class Developer, inheriting from the Employee class and implementing the method
float calculateBonus(int value), calculating the bonus for the developer according to the following
formula: value+0.2*value*(salary+experience).
Create a class TeamLeader, inheriting from the Employee class and implementing the method
float calculateBonus(int value), calculating the bonus for the team leader according to the following
formula: value*(1+salary+experience). Additionally, the show() method should be overridden,
displaying information about the team leader and the text "I am a Team Leader with X years of
experience," where X should be replaced with the number of years of experience.
Make sure to add appropriate constructors to the Developer and TeamLeader classes.
Create the following functions:
• whoWorkMoreThan5Years, which takes an array of type Employee** as an argument
along with its size and displays employees who have been working for more than 5 years.
• howManyEarnLessThanMeanBonus, which takes an array of type Employee** as an argument
along with its size and counts how many employees received a bonus lower than the mean
of all bonuses.
In the main function, create an array and demonstrate the polymorphic operation of the program
and test the functions.

Task 2.3. Buffer
Create a class Buffer with the following elements:
• private attributes:
  o a pointer representing a dynamic array storing integers,
  o the size of the array,
  o the index of the first available space in the array. We assume that elements are
    added to the array sequentially.
• a parameterless constructor, in which an array of size 10 will be created,
  and the index of the first available cell in the array will be set to 0;
• a parameterized constructor, which will receive the array size as an argument.
  In the constructor, an array should be created, and the value of the first available
  space in the array should be set to 0;
• a virtual destructor, in which the allocated memory will be deleted;
• a virtual method void add(int value), allowing the addition of a number to the
  first available space in the array. It is assumed that there will be free space in the
  array;
• a pure virtual method double calculate();
• a method int getIndex(), which will return the index of the first available space
  in the array;
• a method int getSize(), which will return the size of the array;
• a method int getTab(int i), which will return the i-th element in the array;
• a method int getFirst(), which returns the first available index;
• a method void setFirst(value), which sets the value of the field storing the first
  available index in the array;
• a method void setTab(int pos, int value), which will set the value at the index
  pos to the value specified;
• a method displaying the contents of the array.
Create a class MeanBuffer, inheriting from the Buffer class and overriding the
calculate() method, returning the arithmetic mean of the numbers that have been
inserted into the array.
Create a class MaxBuffer, inheriting from the Buffer class and overriding the calculate()
method, returning the maximum number among the numbers inserted into the array.
Additionally, this class overrides the void add(int value) method. It should work the
same, with the difference that it should check whether there is still space in the array,
and if there is no more space, it should not insert anything into the array and display
the appropriate message on the console.
Make sure to add appropriate constructors to the MeanBuffer and MaxBuffer classes.
In the main function, create an array and demonstrate the polymorphic operation of the program.
