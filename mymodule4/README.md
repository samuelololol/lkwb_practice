# sysfs

```
$ ls /sys/module/mymodule4/parameters
total 0
-r--r--r-- 1 root root 4096 Jan 10 14:52 param1
-rw-r--r-- 1 root root 4096 Jan 10 14:52 param4w

$ cat /sys/module/mymodule4/parameters/param1
10
$ cat /sys/module/mymodule4/parameters/param4w
4
```

```
//param4w
$ cat /sys/module/mymodule4/parameters/param4w
4
$ echo 1 > /sys/module/mymodule4/parameters/param4w
$ cat /sys/module/mymodule4/parameters/param4w
1

//param1
$ cat /sys/module/mymodule4/parameters/param1
10
$ echo 1 > /sys/module/mymodule4/parameters/param1
bash: param1: Permission denied
```
