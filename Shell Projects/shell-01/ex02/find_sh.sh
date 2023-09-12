#!/bin/bash
find . -name '*.sh' -printf '%f\n' | sed -e 's/\.sh//g'
