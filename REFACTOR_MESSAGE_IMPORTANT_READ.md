Refactor Message
================
The code in main.cpp has been split into respective modules.
This is so that main.cpp is not clouded with code other than
main.

In other words, things that deal with the automation routine
is placed in automation.cpp and the user control code is placed
int usercontrol.cpp.

This enables code to be read and somewhat more importantly _navigated_ more
easily. What results is better debugging and whatnot.

## Addressing myths with code speed and functions.
### i.e. The code will run just as fast or even faster.
When compiling the compile will basically copy and paste
all the references into their respective places.

In other words, the code that is generated is basically the
previous monolithic(everything in one place little to no
compartmentalization) form. The execution will __not__
be hindered by the stack calls to the functions because
when compiled the functions will most likely not be there.

There exists a mechanism called "Inline functions" which
functions work like #includes. This results in a larger
binary executable but faster execution. Note that
the "monolithic" form would basically look like the
code at the stage of compilation where inline functions
are inserted.

### Even faster?
I set the motor definitions as __constants__ since they appear
to have no intention of modificiation during the execution.
It is common c++ fact that compile-time constants(constants
whose values are set during compilation) are fast.

#### Why???
Basically, from my understanding, because C and 
C++ are converted into assembly, the section.data-which
holds constants-doesn't have to worry
about information changing which means faster data access.

_The code's functionality has not been changed at all and nothing with the
Robot's behavior has been changed. What has been changed is only the
formatting of the code. It is like having a pdf, and moving the same content
into website formatting. __The content is the same.__ _
