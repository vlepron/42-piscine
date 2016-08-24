ldapsearch -Q uid="z*" | grep -i "cn:" | sort -rb | sed 's/\cn: //g'
