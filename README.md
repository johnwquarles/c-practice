# c-practice
Practice coding done while reading through "The C Programming Language, 2nd Edition" by Ritchie &amp; Kernighan

To compile a `.c` file in Darwin: `gcc {c program}.c`.

Address any compiler errors/warnings, then, to run, enter:

`./{compiled}.out`

Question I had regarding the compiler pushing me to declare `main`'s return type as `int`: why?

Because `main` returns a value indicating the successful (or not) execution of the program, which is (typically, I suppose?) 0 or 1.
(http://stackoverflow.com/questions/204476/what-should-main-return-in-c-and-c)
