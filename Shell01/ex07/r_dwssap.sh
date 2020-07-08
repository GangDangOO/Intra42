cat /etc/passwd \
	| grep -v \# \
	| sed 'n; d' \
	| cut -f 1 -d ':' \
	| rev \
	| sort -r \
	| awk -v S=$FT_LINE1 -v E=$FT_LINE2 'NR >= S && NR <= E' \
	| tr '\n' ' ' \
	| sed 's+ +, +g' \
	| rev | cut -c 3- | rev \
	| sed 's/$/./' \
	| tr -d '\n'
