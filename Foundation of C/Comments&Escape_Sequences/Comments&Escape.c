#include <stdio.h>
int main() {
// This is a comment
// It will be ignored by the complier
/*
Anything
Between
These
Lines
Will
Be
A
Multiline
Comment
*/

/*
Escape sequences
=
characters consisting of a backslash \
Not a forward slash /
*/

/*
\n = newline | Creating a new line for the next text
\t = tab | Creates space between characters
\"Text\" | Create quote, samething with single quotes ''
*/

    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"I like pizza\" - Aristotle");
    return 0;
}