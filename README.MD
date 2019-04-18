# CSC 415 - Project 2 - File copy

## Student Name : Andrew St Germain

## Student ID   : 917964741

## Build Instructions
make fc in terminal

## Run Instructions
./fc
and follow command prompt
can use file1, file2, and file3
Realized it doesn't work on larger files

## strace/dtruss output
execve("./fc", ["./fc"], [/* 47 vars */]) = 0
brk(NULL)                               = 0x55e0e0c65000
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory)
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=86620, ...}) = 0
mmap(NULL, 86620, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f297cbff000
close(3)                                = 0
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\340\22\2\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0755, st_size=1960656, ...}) = 0
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f297cbfd000
mmap(NULL, 4061792, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f297c60e000
mprotect(0x7f297c7e4000, 2097152, PROT_NONE) = 0
mmap(0x7f297c9e4000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1d6000) = 0x7f297c9e4000
mmap(0x7f297c9ea000, 14944, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f297c9ea000
close(3)                                = 0
arch_prctl(ARCH_SET_FS, 0x7f297cbfe500) = 0
mprotect(0x7f297c9e4000, 16384, PROT_READ) = 0
mprotect(0x55e0e01b9000, 4096, PROT_READ) = 0
mprotect(0x7f297cc15000, 4096, PROT_READ) = 0
munmap(0x7f297cbff000, 86620)           = 0
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 1), ...}) = 0
brk(NULL)                               = 0x55e0e0c65000
brk(0x55e0e0c86000)                     = 0x55e0e0c86000
write(1, "Welcome to the File Copy Program"..., 56Welcome to the File Copy Program by Andrew St Germain!
) = 56
write(1, "Enter the name of the file to co"..., 42Enter the name of the file to copy from:
) = 42
fstat(0, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 1), ...}) = 0
read(0, 0x55e0e0c65670, 1024)           = ? ERESTARTSYS (To be restarted if SA_RESTART is set)
--- SIGWINCH {si_signo=SIGWINCH, si_code=SI_KERNEL} ---
read(0, 0x55e0e0c65670, 1024)           = ? ERESTARTSYS (To be restarted if SA_RESTART is set)
--- SIGWINCH {si_signo=SIGWINCH, si_code=SI_KERNEL} ---
read(0, ^[[B^[[B^[[B^[[B^[[B^[[B^[[B^[[B
"\33[B\33[B\33[B\33[B\33[B\33[B\33[B\33[B\n", 1024) = 25
openat(AT_FDCWD, "\33[B\33[B\33[B\33[B\33[B\33[B\33[B\33[B", O_RDONLY) = -1 ENOENT (No such file or directory)
write(1, "File cannot be opened or is empt"..., 35File cannot be opened or is empty
) = 35
lseek(0, -1, SEEK_CUR)                  = -1 ESPIPE (Illegal seek)
exit_group(-12)                         = ?
+++ exited with 244 +++

