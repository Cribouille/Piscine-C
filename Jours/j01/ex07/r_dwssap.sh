#!/bin/sh
cat /etc/passwd | sed -n '11,${n;p;}' | cut -d ":" -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" "," | sed "s/.$/./g" | sed "s/,/, /g" | tr -d '\n'