A 42-cursus project where the goal is to sort given range of unique integers using two stacks (A and B) and only following operations:

- `sa` (swap a) : Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- `sb` (swap b) : Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- `ss` : `sa` and `sb` at the same time.
- `pa` (push a) : Take the first element at the top of b and put it. Do nothing if b is empty.
- `pb` (push b) : Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- `ra` (rotate a) : Shift up all elements of stack a by 1. The first element becomes the last one.
- `rb` (rotate b) : Shift up all elements of stack b by 1. The first element becomes the last one.
- `rr` : `ra` and `rb` at the same time.
- `rra` (reverse rotate a) : Shift down all elements of stack a by 1. The last element becomes the first one.
- `rrb` (reverse rotate b) : Shift down all elements of stack b by 1. The last element becomes the first one.
- `rrr` : `rra` and `rrb` at the same time.

The binary **push_swap** returns a list of operations which if performed on given array of integers makes it sorted.

The binary **checker** performs given commands on given array of integers. And returns message whether the final stack is sorted or not.

## Solution Approach and Algorithm
To solve the project I've been testing many sorting algorithms and pretty much any of them is usable. Those which benefit from additional stack are obviously beneficial here. However the pickle was to figure out which one to use in order to fulfill benchmarks for maximum amout of points.
> 5 numbers - 12 maximum operations\
> 100 numbers - under 700 operations for full score\
> 500 numbers - under 5500 operations for full score
