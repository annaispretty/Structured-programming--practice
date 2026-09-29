# Exercise 1 - Basic Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.3(c).

**What the program does:** The program prints a fixed message to the screen using only output
statements - no input is collected. It shows how one `printf` call can produce several lines and
how text is positioned with newline and tab escape sequences.

**Concepts used:** `printf()`, escape sequences (`\n`, `\t`), `main()` structure, `return 0`.

**How it works:** Execution begins in "main". A single `printf` statement holds the whole message,
with `\n` marking the end of each line, so one call produces multiple lines of output. The program
then returns 0 to show it finished successfully.

**Example run**
```
Welcome to Structured Programming!
	This line is indented with a tab.
Goodbye.
```

---

## Exercise 2 - Input - Process - Output
**Source:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 2, Exercise 2.4.

**What the program does:** The program asks the user for two integers, works out their sum,
difference, product and quotient, and prints each result on its own line.

**Concepts used:** `int` variables, `scanf()`, arithmetic operators (`+`, `-`, `*`, `/`), `printf()`.

**How it works:** Two variables are declared. A prompt is shown, then `scanf` with `%d` reads each
number into its variable. The arithmetic is done in the `printf` statements (or stored in result
variables first), and every answer is labelled so the output is easy to read. Division by zero is
avoided by checking the second number before dividing.

**Example run**
```
Enter the first integer: 12
Enter the second integer: 4
Sum        = 16
Difference = 8
Product    = 48
Quotient   = 3
```

---

## Exercise 3 - Decision
**Source:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 3, Exercise 3.2.

**What the program does:** The program reads a number from the user and reports whether it is
positive, negative or zero, and also whether it is even or odd.

**Concepts used:** `if`, `else if`, `else`, relational operators, the remainder operator `%`.

**How it works:** After reading the value, the first `if` checks whether it is greater than zero,
the `else if` checks whether it is less than zero, and the final `else` handles zero. A second
decision uses `number % 2 == 0` to choose between the "even" and "odd" messages. Only one branch of
each decision ever runs.

**Example run**
```
Enter an integer: -7
The number is negative.
The number is odd.
```

---

## Exercise 4 - Basic Loop
**Source:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 3, Exercise 3.5.

**What the program does:** The program repeats a simple task a fixed number of times - it prints a
counting sequence from 1 up to a limit chosen by the user.

**Concepts used:** `for` loop (counter-controlled repetition), integer counter, `printf()`.

**How it works:** The loop counter starts at 1. Before each pass the condition `counter <= limit`
is tested; while it is true the body prints the counter. After each iteration the counter is
increased by 1, so the loop eventually ends when the counter passes the limit.

**Example run**
```
How many numbers should I print? 5
1 2 3 4 5
```

---

## Exercise 5 - Loop with Calculation
**Source:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 3, Exercise 3.4.

**What the program does:** The program uses the loop counter inside a calculation - it builds and
prints the multiplication table of a number entered by the user and also accumulates the total of
all the products.

**Concepts used:** `for` loop, arithmetic inside the loop, accumulator variable, formatted `printf()`.

**How it works:** The user supplies the base number. The counter runs from 1 to 12. In each pass the
product `base * counter` is calculated, printed as one row of the table, and added to a running
total that was initialised to 0 before the loop. The total is printed after the loop ends.

**Example run**
```
Enter a number: 3
3 x 1 = 3
3 x 2 = 6
...
3 x 12 = 36
Sum of all products = 234
```

---

## Exercise 6 - Loop with User Input
**Source:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 4, Exercise 4.11.

**What the program does:** The program collects several values from the user during repetition -
it reads a series of marks and then reports how many were entered, their total and their average.

**Concepts used:** loop with `scanf()` inside it, counter, accumulator, integer/floating-point
division, `printf()` with `%.2f`.

**How it works:** The user first states how many values will be entered (or a sentinel value such
as -1 ends the input). Inside the loop `scanf` reads one value per iteration and adds it to the
running total while the counter is increased. After the loop the average is calculated by dividing
the total by the counter, using a cast so the result is a real number. The program guards against
dividing by zero when no values were entered.

**Example run**
```
How many marks will you enter? 4
Mark 1: 70
Mark 2: 65
Mark 3: 80
Mark 4: 55
Total   = 270
Average = 67.50
```

---

## Exercise 7 - Loop with Decision
**Source:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 3, Exercise 3.27.

**What the program does:** The program reads a set of numbers and, while looping, decides for each
one whether it is above or below a limit, keeping separate counters for the two groups. It also
tracks the largest value seen.

**Concepts used:** loop, `if...else` inside the loop, counters, comparison to find a maximum.

**How it works:** Two counters start at 0 and the largest value starts at the first number read.
Each iteration reads a value, then an `if...else` compares it with the pass mark and increases the
matching counter. A second `if` replaces the stored largest value whenever a bigger number appears.
When the loop finishes, both counters and the largest value are printed.

**Example run**
```
Enter 5 marks:
45
72
50
38
91
Passed: 3
Failed: 2
Highest mark: 91
```

---

## Exercise 8 - Interactive Console Program
**Source:** Deitel & Deitel, *C How to Program*, 9th Edition, Chapter 3, Exercise 3.19.

**What the program does:** The program keeps interacting with the user through a menu. The user can
repeatedly choose an operation, and the program only stops when the exit option is selected.

**Concepts used:** sentinel/menu-controlled loop (`while` or `do...while`), `switch` or `if...else if`,
`scanf()`, input validation.

**How it works:** The menu is displayed inside a loop. The user's choice is read and a `switch`
selects the matching action; an invalid choice falls to the default branch, which shows an error
message and the menu appears again. The loop condition tests the choice against the exit option, so
repetition continues until the user chooses to quit, then a closing message is printed.

**Example run**
```
==== MENU ====
1. Add two numbers
2. Check if a number is even
3. Exit
Choice: 1
Enter two numbers: 5 6
Result: 11

==== MENU ====
Choice: 3
Goodbye!
```
https://github.com/annaispretty/Structured-programming--practice.git
