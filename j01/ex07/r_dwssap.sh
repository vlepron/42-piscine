cat /etc/passwd |grep -E -v '^#'| sed -n 'n;p' | cut -d ":" -f 1 | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed 's/^/ /' | tr '\n' ',' | sed 's/,$/./' | cut -c 2- | tr -d '\n'
