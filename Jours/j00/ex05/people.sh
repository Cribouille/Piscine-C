#!bin/sh
ldapsearch -Q -LLL "uid=z*" | grep "cn:" | cut -d ":" -f 2 | sort -f -b -r | cut -c2-