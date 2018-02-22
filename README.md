kill signal 0:
Used the kernal to fill a cpu drive switched accasionaly
kill signal SIGUSR2:
also used the kernal to fill a cpu drive but had less low priority
Clock:
used the kernal to and filled the drive
1ns:
low uses of kernal between many drives
1000ns:
little bit less of the kernal used between many drives
1000000ns:
little bit less of the kernal used between many drives
1000000000ns:
almost no kernal used between many drives
fork:
most use of the kernal used about half of each cpu
math:
low peroirity filled one cpu drive
cmath:
same as the math
new/delete:
filled a peroirity filled one cpu drive
new:
killed raspberry Pi
getcwd:
kernal use and some used memery in one cpu
chdir:
kernal use and some used memery in one cpu
access:
kernal filled one cpu
sync:
slowly filled one cpu with kernal use
chmod:
used all of one cpu and little bit of the others
dup2:
some use and kerenal in one cpu