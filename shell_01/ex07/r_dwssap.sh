cat /etc/passwd | grep ^# -v | sed -n "n;p" | sed -e "s/:\(.*\)$//g" | rev | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p | sed -e "s/$/\, /g" | tr -d "\n" | sed -e "s/, *$/\./g" | tr -d "\n" 
