id -Gn $FT_USER | sed -lE 's/\ /\,/g' | tr -d "\n" | cat -e
