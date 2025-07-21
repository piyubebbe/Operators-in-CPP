Aim: To study and implement different types of operators in C++

a. Determine if a number is positive, negative, or zero. 
b. calculate average marks and assign grades. 
c. Identify the coordinate quadrant of a point.

Apparatus: GNU g++ compiler and Any code editor

Program 1: Check if a Number is Positive, Negative, or Zero program is an example of illustrates the application of relational operators (>, <, ==) with conditional statements (if, else if, else) To determine whether an input integer is: Positive , Negative and Zero The program takes the user for a number input and evaluates the condition utilizing simple comparisons. Depending on the result of the evaluation, an appropriate output is shown indicating either a positive, negative, or zero result.

Program 2: Determine Coordinate Quadrant In this program, the user will enter X and Y coordinates and the program will determine in which quadrant the point lies on the Cartesian plane. The program will also ascertain whether the user enters a point that is on the X-axis, Y-axis or the origin (0,0).

The program will evaluate the following conditions: First Quadrant: n > 0 and m > 0 Second Quadrant: n < 0 and m > 0 Third Quadrant: n < 0 and m < 0 Fourth Quadrant: n > 0 and m < 0

In this program, the user will apply: Relational operators: to compare the values of n and m. Logical operators: specifically AND (&&) to combine conditions for quadrant determination, and OR (||) to test conditions for points that lie on an axis. Conditional statements: to classify each unique situation I used nested if, else if statements.

This explains how to do evaluation with multiple conditions in which both comparison and logical operators are used together to complete groupings of comparisons to come to a decision. We also include special circumstances where the point goes directly to an axis or the origin; both of these points are not in any quadrant specific.

Program 3: Calculate Average Marks and Display Grade For this program, the user will input marks for different subjects. Then the program will calculate the average marks and find the resulting grade given average marks.

Grade Conditions: O Grade, if the average greater than 95 and equal to or less than 100 A Grade if the average is between 81 and 95 B Grade if the average is between 65 and 80 C Grade if the average is between 51 and 64 Fail if the average is equal to 50 or less If the average is less than 0 or greater than 100 the program will catch this invalid input.

This program uses: Arithmetic Operators - to average Relational Operators - to compare the average to a grade. Logical Operators (&&, ||) - to evaluate combined conditions (eg between). Conditional Statements - to return the grade. This enables learners to practice arithmetic calculations, data validation and combining multiple conditions in order to create meaningful output with different scenarios.

Conclusion: Each of these programs demonstrates practical applications of operators in C++: Program 1: Shows how to classify numbers using relational operators. Program 2: Applies relational and logical operators to determine the position of a point . Program 3: Uses a combination of arithmetic, relational, and logical operators to calculate averages and assign grades
