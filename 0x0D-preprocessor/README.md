# preprocessor
0. object like Macro
Create a header file that defines a macro named size as an abbreviation for the token 1024.

1. Pi :
Create a header file that defines a macro named PI as an abbreviation for the token 3.14

2. File name :
write a program that prints the name of the file it was compiled from, followed by a new line.

3. Function-like macro
write a functionlike macro ABS(x)

# Structures : 
A structure is a user defined data type available in C that allows to combine data items of different kinds.

# structure of declaration : 
- you can define a structure in the global scope of your program (outside of all your functions, just like the functions prototypes).
- You can declare elements of your structure in its scope.
example 
"""
struct User {
    char *name;
    char *email;
    int age;
};
int main(void){
    struct User user;
    return (0)
}
"""
# structures : 
- you can access the elements of your structure by using the "." symbol
"""
struct User
{
    char *name; 
    char *email;
    int age;
};
int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    return (0);
}
"""

Example - stepp 0
''''
# include <stdio.h>
struct User
{
    char *name;
    char *email;
    int age;
};
int main(void)
{
    struct User user;

    user.name = "Foo Bar";
    user.email = "foo@hbtn.io";
    user.age = 98;
    return (0);
}
'''

# Pointers to structures : 
To access elements of a pointer to a structure, you have to dereference the pointer and then access to the data using the "." symbol
but : there is a simple way to do that just by using the "->" symbol.

this symbol is equivalent to dereferencing + using "."

"""
struct User
{
    char *name;
    char *email;
    int age;
};
int main(void)
{
    struct User user;
    struct User *ptr;

    ptr = &user;
    /**
    Dereferencing the pointer before access the data with the . symbole
    */
}
"""

Exercice : 
"""
€include <stdio>
struct User
{
    char *name;
    char *email;
    int age;
}
struct User *new_user(char *name, char *email, int age)
{
    struct User *user;
    /**/

    return (0)
}

"""