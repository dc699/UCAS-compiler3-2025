#!/bin/bash

dir="../test/samples_lex_and_syntax"
command="./compiler"

# 遍历目录
for file in "$dir"/*
do  
    if [ -f "$file" ]
    then
        echo "Test on file: $file"

        output=$(eval "$command \"$file\"")
        exit_code=$?
        
        # 打印输出
        echo "Output:"
        echo "$output"

        # 判断结果
        if [ $exit_code -ne 0 ] && [[ $file == *"false"* ]]
        then
            echo "Pass"
        elif [ $exit_code -eq 0 ] && [[ $file == *"true"* ]]
        then
            echo "Pass"
        else
            echo "Fail"
        fi
        echo -e "\n"
    fi
done