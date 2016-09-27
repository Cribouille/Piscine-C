#!/bin/sh
test=`ldapsearch -LLL -Q | grep 'cn:' | cut -d ' ' -f 3 | grep -i 'bon' | wc -l | bc`
echo $test+1 | bc