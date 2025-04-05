**Stone Swapping**
<br>
[ Memory: 16 MB, CPU: 1 sec ]

To pass the time, Bessie and Elsie have recently started playing a new game. The rules of the game are as follows: Elsie takes a bunch of stones and arranges them into an N by N (1 <= N <= 10) grid. Bessie then memorizes the grid and closes her eyes while Elsie proceeds to rearrange the stones. Bessie then has to guess which of the following ways Elsie has rearranged the stones:

#1: The arrangement is rotated 90 degrees clockwise.

#2: The arrangement is rotated 180 degrees clockwise.

#3: The arrangement is rotated 270 degrees clockwise.

#4: The arrangement is reflected horizontally (see the sample input).

#5: The arrangement is reflected horizontally and then one of actions #1 to #3 is performed.

#6: No change.

#7: None of the above.

Help Bessie determine how Elsie has rearranged the stones.

INPUT FORMAT

The first line contains a single integer N. The next N lines each contain a string of N characters each that are either @ or -, representing the original arrangement of the stones. The final N lines each contain a string of N characters each that are either @ or -, representing the rearrangement of the stones.

OUTPUT FORMAT

A single line containing an integer from 1 to 7 representing the method used to rearrange the stones, as described above. If multiple methods could have been used, output the method with the smallest number, as listed above.

SAMPLE INPUT

    4
    --@@
    @@--
    @@@-
    @@-@
    @@--
    --@@
    -@@@
    @-@@
<br>
SAMPLE OUTPUT

    4 
The arrangement has been reflected horizontally.

MODE: normal<br>
Language: cpp<br>
