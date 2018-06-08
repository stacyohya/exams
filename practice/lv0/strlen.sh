#!/bin/sh
# zsh strlen.sh
string=(echo $FT_LINE)

if [ "$string" ]; then
	echo -n $FT_LINE | wc -m 
fi



#!/bin/sh
# zsh strlen.sh
echo -n $FT_LINE | wc -m | cut -c 8-
#wc lines, words, bytes