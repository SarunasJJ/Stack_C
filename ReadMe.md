# stack.h

## RUNNING
- Run `go.bat` file to compile and run the program.
- The terminal will print out `"No errors found!"` if no errors were encountered during tests
- and `"Errors found!"` if there were errors during the tests.

## FUNCTIONS
- `stackCreate()` function takes ***int*** type *size* and returns pointer to the **bottom** of the stack.
- `stackDone()` function takes ***adress of the pointer to the stack bottom element*** and destroys the stack and it's information or returns **FALSE** if unable to do so.
- `stackIsEmpty()` function takes ***pointer to the stack bottom element*** and returns **TRUE** if stack is empty or **FALSE** otherwise.
- `stackIsFull()` function takes ***pointer to the stack bottom element*** and returns **TRUE** if stack is full or **FALSE** otherwise.
- `stackPush()` function takes ***int*** type *number* and ***adress of the pointer to the stack bottom element***and it pushes the number into the stack and returns **TRUE** if able to do so. If unable to do so, it returns **FALSE**.
- `stackPop()` function takes ***adress of the pointer to the stack bottom element*** and it returns the **top** element of the stack aswell as removes it from the stack. It returns **FALSE** if unable to do so.
- `stackBottom()` function takes ***pointer to the bottom of the stack*** and returns the value of the **bottom** element of the stack. It returns **FALSE** if unable to do so.
- `stackTop()` function takes ***pointer to the bottom of the stack*** and returns the value of the **top** element of the stack. It returns **FALSE** if unable to do so.
- `stackCount()` function takes ***pointer to the bottom of the stack*** and returns count of the elements in the stack.
- `stackMakeEmpty()` function takes ***adress of the pointer to the stack bottom element*** and it empties the stack's elements. It returns **FALSE** if unable to do so.
- `stackClone()` function takes ***pointer to the bottom of the stack***, clones the stack and returns *Stack type pointer* to the bottom of the new stack.
- `stackSize()` function takes ***pointer to the bottom of the stack*** and returns the size of the stack.