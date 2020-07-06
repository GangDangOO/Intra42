cat /etc/passwd \
	| grep -v \# \
	| sed 'n; d' \
	| cut -f 1 -d ':' \
	| rev \
	| sort -r \
	| awk -v S=$FT_LINE1 -v E=$FT_LINE2 'NR >= $S && NR <= E' \
	| tr '\n' ',' \
	| rev | cut -c 2- | rev \
	| sed 's/$/./'
