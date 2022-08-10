id -Gn $FT_USER | sed -lE 's/\ /\,/g' | cat -e
