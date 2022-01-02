# Calculator

Calculator consists of a set of different functions. It will consist of:

- A main() function where you will keep asking the user what function she wants to use until she chooses “Exit”. The
  user should be presented with the following screen:

      Type your option:

         1: Average

         2: Calculate π to the nth iteration of the Gregory-Leibniz series. The user inputs how much precision it wants.

         3: Square root

         4: Exit

- Three functions that are called from the main function:
    - An average function that receives 3 floating point numbers and returns the average of those 3 numbers.
    - A pi function that returns a number with PI to precision n (which will be the number of components of the sum).
    - A square_root function that receives an integer and returns the square root. If there is no integer solution it
      returns -1.
    - After the user chooses the option the main function should ask for the appropriate values and pass them to the
      functions.
    - The main function should also print the results.


Note: this was one of the exercises for "ELEC0007: Programming 1" (in C) course.