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

_The code's functionality has not been changed at all and nothing with the
Robot's behavior has been changed. What has been changed is only the
formatting of the code. It is like having a pdf, and moving the same content
into website formatting. __The content is the same.__ _
