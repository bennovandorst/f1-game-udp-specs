#!/bin/bash
FILES_2024=(`ls -1 2024`)

for ((i=0; i < ${#FILES_2024[@]}; i++)); do
    if test -f "2023/${FILES_2024[$i]}";
    then
        git diff --no-index --ignore-all-space "2023/${FILES_2024[$i]}" "2024/${FILES_2024[$i]}" > "diff_2023-2024/${FILES_2024[$i]}.diff"
        DIFF_SIZE=(`wc -c "diff_2023-2024/${FILES_2024[$i]}.diff" | awk '{print $1}'`)
        if test $DIFF_SIZE -eq 0; 
        then 
            echo "Removing empty diff for ${FILES_2024[$i]}";
            rm "diff_2023-2024/${FILES_2024[$i]}.diff"
        fi
    else
        echo "File was added in 2024";
        git diff --no-index "empty.h" "2024/${FILES_2024[$i]}" > "diff_2023-2024/${FILES_2024[$i]}.diff"
    fi
done