# C11 Simple Shell 
This repository is for the Holberton School Cohort 11 Simple Shell Live Coding. 

Original work was done 4/17/20 live with a Slack thread for live audience participation.

## Environment
All work was done in a trusty/64 Ubuntu 14.04 LTS vagrant virtual mahine. 

## Complilation
To compile, run `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`. 

## Usage
Please note: currenly only commands with the full path can be run. 

### Interactive mode
To start the shell, compile the `.c` files with the instructions above and run `./hsh`. Once running, you will see the prompt and you can input your command.

```
$ ./hsh
(> ''>) shellyeah$ /bin/ls
README.md
(> ''>) shellyeah$ 
```

### Non-Interactive mode
Compile the `.c` files with the `Usage` instructions above and use the shell in the following manner, piping commands in. 

```
$ echo "/bin/ls" | ./hsh
README.md
$ 
```

## Authors
Kristen Loyd - kristen.loyd@holbertonschool.com
