
# Quadratic and Cubic Equation Solver System

![pexels-nothing-ahead-3729557](https://user-images.githubusercontent.com/89633522/188799961-ed2d18f8-cc85-4c63-aa96-1cb69f113b1e.jpg)

This program enable user to **solve quadratic equation and cubic equation by using fixed point iteration approach**. 


## Target

- find the root of the quadratic equation using the fixed-point iteration approach.
- find the root of the cubic equation using the fixed-point iteration approach.

## Formula

Fixed point iteration formula is
*𝑥𝑘+1 = 𝐹(𝑥𝑘), (1)*

where 𝑘 = 0, 1, 2,3, . .. is the kth iteration. 

Think about k as the counter variable in a whileloop, do-while loop, for-loop and 𝐹( )is some function depending on 𝑥𝑘, the previous 
iterate.

Refer to this [document](https://drive.google.com/file/d/1DEnqKORgA1ojWFFbamk_PD-mTZjmxONi/view?usp=sharing) for more explanation.

## Task

1. Write a program with a menu that gives the option to the user to either choose to solve a 
quadratic equation or a cubic equation. 

2. You should use functions to solve this. 
- CubicEqn()
- createQuadEqn(), 
- fixedPointQuad()
- fixedPointCube()

The explanation of the functions are as 
follows:

#### createQuadEqn()

- This function will create a random quadratic equation. It will show the respective quadratic equation to the user.

#### createCubicEqn()
- All the requirements for this function is the same as the createQuadEqn(). The only difference is that this function creates a cubic equation instead of a quadratic equation. 

- For the discriminant of a cubic equation, you may refer to https://brilliant.org/wiki/cubic-discriminant/. Take the case where you only have real roots.

#### fixedPointQuad()
- This is the main function to find the root of the quadratic equation using the fixed-point iteration approach.

## Addition task

1. Prompt the user with some background before computing the root. 

2.  Users can input the number of iterations of the fixed-point iteration, and the initial value.

3.  **fixedPointCube()**: All requirements are the same for this function. The difference is now that this function is a separate function that is used to solve the cubic equation.

Finally, do test your program for the right answers! check the roots obtained by your program with a calculator or an online site that can 
calculate roots for both quadratic and cubic equations. 

**Good Luck!**


## Contributing

Contributions are always welcome!

See `contributing.md` for ways to get started.

Please adhere to this project's `code of conduct`.


## Feedback

If you have any feedback, please reach out to us at nurunnajwa21@gmail.com

