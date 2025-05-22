#!/bin/bash
FILES_2025=(`ls -1 2025`)

for ((i=0; i < ${#FILES_2025[@]}; i++)); do
    if test -f "2024/${FILES_2025[$i]}";
    then
        git diff --no-index --ignore-all-space "2024/${FILES_2025[$i]}" "2025/${FILES_2025[$i]}" > "diff_2024-2025/${FILES_2025[$i]}.diff"
        DIFF_SIZE=(`wc -c "diff_2024-2025/${FILES_2025[$i]}.diff" | awk '{print $1}'`)
        if test $DIFF_SIZE -eq 0;
        then
            echo "Removing empty diff for ${FILES_2025[$i]}";
            rm "diff_2024-2025/${FILES_2025[$i]}.diff"
        fi
    else
        echo "File was added in 2025";
        git diff --no-index "empty.h" "2025/${FILES_2025[$i]}" > "diff_2024-2025/${FILES_2025[$i]}.diff"
    fi
done
