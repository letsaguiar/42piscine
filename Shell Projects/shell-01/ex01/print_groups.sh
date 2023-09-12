#!/bin/bash
echo -n `id -nG $FT_USER` | sed -e 's/ /,/g'
