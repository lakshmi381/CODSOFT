# CODSOFT

Participate in a comprehensive 4-week virtual internship experience.

# TASK1: NUMBER GUESSING GAME
Certainly! The provided code is a C++ program that implements a basic number guessing game. The game operates as follows:

First, the program seeds the random number generator using the current time, ensuring different random numbers for each execution. It then generates a random number between 1 and 100.

The user is welcomed to the game, and a loop begins. Inside the loop, the user is prompted to enter their guess for the random number. The program compares the user's guess with the generated random number. If the guess is too high, it informs the user to try again with a lower number, and vice versa for a low guess.

The loop continues until the user's guess matches the random number. The program keeps track of the number of attempts made by incrementing the "attempts" counter. Once the user successfully guesses the correct number, the loop ends, and the program displays a congratulatory message along with the number of attempts it took to guess correctly.

This code demonstrates basic C++ concepts such as random number generation, user input, conditional statements, loops, and output. It offers an interactive and engaging experience where users attempt to guess the randomly generated number within a limited number of attempts.


# TASK2: SIMPLE CALCULATOR

User input:

Prompt the user to enter two numbers and an operation.
Read the input and store them in number1, number2, and operation.
Perform the operation:

Declare a variable result to store the result.
Use a switch statement to perform the operation based on the value of operation.
Add, subtract, multiply, or divide number1 and number2 based on the chosen operation.
Store the result in result.
Display the result:

Output the result using cout if the operation is valid.
If the operation is division and the second number is zero, display an error message.
End the program:

Return 0 to indicate successful program execution.



# Task3: Student Grading System:

Define a struct GradeSystem to store student information.
Prompt the user to enter student names and scores, and store them in a vector of GradeSystem instances.
Display the results by iterating over the vector and calculating the average, highest, and lowest scores for each student.
Terminate the program.


