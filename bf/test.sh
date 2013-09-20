#!/bin/sh
echo ======== "$1" ========
for i in *.bf; do
	printf '%s: ' "$i"
	./"$1" "`head -1 "$i"`" < "$i"
	echo
done
