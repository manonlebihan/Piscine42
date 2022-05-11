#!/bin/bash

#!/bin/bash
cat /etc/passwd | sed -n "n;p" | grep -v "^#" | cut -d':' -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed -z 's/\n/, /g' | sed 's/, *$/./'
