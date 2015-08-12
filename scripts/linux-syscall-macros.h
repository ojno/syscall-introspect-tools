#ifndef __NUM_sys_read
#define __NUM_sys_read 0
#endif
#ifndef __NUM_sys_write
#define __NUM_sys_write 1
#endif
#ifndef __NUM_sys_open
#define __NUM_sys_open 2
#endif
#ifndef __NUM_sys_close
#define __NUM_sys_close 3
#endif
#ifndef __NUM_sys_newstat
#define __NUM_sys_newstat 4
#endif
#ifndef __NUM_sys_newfstat
#define __NUM_sys_newfstat 5
#endif
#ifndef __NUM_sys_newlstat
#define __NUM_sys_newlstat 6
#endif
#ifndef __NUM_sys_poll
#define __NUM_sys_poll 7
#endif
#ifndef __NUM_sys_lseek
#define __NUM_sys_lseek 8
#endif
#ifndef __NUM_sys_mmap
#define __NUM_sys_mmap 9
#endif
#ifndef __NUM_sys_mprotect
#define __NUM_sys_mprotect 10
#endif
#ifndef __NUM_sys_munmap
#define __NUM_sys_munmap 11
#endif
#ifndef __NUM_sys_brk
#define __NUM_sys_brk 12
#endif
#ifndef __NUM_sys_rt_sigaction
#define __NUM_sys_rt_sigaction 13
#endif
#ifndef __NUM_sys_rt_sigprocmask
#define __NUM_sys_rt_sigprocmask 14
#endif
#ifndef __NUM_stub_rt_sigreturn
#define __NUM_stub_rt_sigreturn 15
#endif
#ifndef __NUM_sys_ioctl
#define __NUM_sys_ioctl 16
#endif
#ifndef __NUM_sys_pread64
#define __NUM_sys_pread64 17
#endif
#ifndef __NUM_sys_pwrite64
#define __NUM_sys_pwrite64 18
#endif
#ifndef __NUM_sys_readv
#define __NUM_sys_readv 19
#endif
#ifndef __NUM_sys_writev
#define __NUM_sys_writev 20
#endif
#ifndef __NUM_sys_access
#define __NUM_sys_access 21
#endif
#ifndef __NUM_sys_pipe
#define __NUM_sys_pipe 22
#endif
#ifndef __NUM_sys_select
#define __NUM_sys_select 23
#endif
#ifndef __NUM_sys_sched_yield
#define __NUM_sys_sched_yield 24
#endif
#ifndef __NUM_sys_mremap
#define __NUM_sys_mremap 25
#endif
#ifndef __NUM_sys_msync
#define __NUM_sys_msync 26
#endif
#ifndef __NUM_sys_mincore
#define __NUM_sys_mincore 27
#endif
#ifndef __NUM_sys_madvise
#define __NUM_sys_madvise 28
#endif
#ifndef __NUM_sys_shmget
#define __NUM_sys_shmget 29
#endif
#ifndef __NUM_sys_shmat
#define __NUM_sys_shmat 30
#endif
#ifndef __NUM_sys_shmctl
#define __NUM_sys_shmctl 31
#endif
#ifndef __NUM_sys_dup
#define __NUM_sys_dup 32
#endif
#ifndef __NUM_sys_dup2
#define __NUM_sys_dup2 33
#endif
#ifndef __NUM_sys_pause
#define __NUM_sys_pause 34
#endif
#ifndef __NUM_sys_nanosleep
#define __NUM_sys_nanosleep 35
#endif
#ifndef __NUM_sys_getitimer
#define __NUM_sys_getitimer 36
#endif
#ifndef __NUM_sys_alarm
#define __NUM_sys_alarm 37
#endif
#ifndef __NUM_sys_setitimer
#define __NUM_sys_setitimer 38
#endif
#ifndef __NUM_sys_getpid
#define __NUM_sys_getpid 39
#endif
#ifndef __NUM_sys_sendfile64
#define __NUM_sys_sendfile64 40
#endif
#ifndef __NUM_sys_socket
#define __NUM_sys_socket 41
#endif
#ifndef __NUM_sys_connect
#define __NUM_sys_connect 42
#endif
#ifndef __NUM_sys_accept
#define __NUM_sys_accept 43
#endif
#ifndef __NUM_sys_sendto
#define __NUM_sys_sendto 44
#endif
#ifndef __NUM_sys_recvfrom
#define __NUM_sys_recvfrom 45
#endif
#ifndef __NUM_sys_sendmsg
#define __NUM_sys_sendmsg 46
#endif
#ifndef __NUM_sys_recvmsg
#define __NUM_sys_recvmsg 47
#endif
#ifndef __NUM_sys_shutdown
#define __NUM_sys_shutdown 48
#endif
#ifndef __NUM_sys_bind
#define __NUM_sys_bind 49
#endif
#ifndef __NUM_sys_listen
#define __NUM_sys_listen 50
#endif
#ifndef __NUM_sys_getsockname
#define __NUM_sys_getsockname 51
#endif
#ifndef __NUM_sys_getpeername
#define __NUM_sys_getpeername 52
#endif
#ifndef __NUM_sys_socketpair
#define __NUM_sys_socketpair 53
#endif
#ifndef __NUM_sys_setsockopt
#define __NUM_sys_setsockopt 54
#endif
#ifndef __NUM_sys_getsockopt
#define __NUM_sys_getsockopt 55
#endif
#ifndef __NUM_stub_clone
#define __NUM_stub_clone 56
#endif
#ifndef __NUM_stub_fork
#define __NUM_stub_fork 57
#endif
#ifndef __NUM_stub_vfork
#define __NUM_stub_vfork 58
#endif
#ifndef __NUM_stub_execve
#define __NUM_stub_execve 59
#endif
#ifndef __NUM_sys_exit
#define __NUM_sys_exit 60
#endif
#ifndef __NUM_sys_wait4
#define __NUM_sys_wait4 61
#endif
#ifndef __NUM_sys_kill
#define __NUM_sys_kill 62
#endif
#ifndef __NUM_sys_newuname
#define __NUM_sys_newuname 63
#endif
#ifndef __NUM_sys_semget
#define __NUM_sys_semget 64
#endif
#ifndef __NUM_sys_semop
#define __NUM_sys_semop 65
#endif
#ifndef __NUM_sys_semctl
#define __NUM_sys_semctl 66
#endif
#ifndef __NUM_sys_shmdt
#define __NUM_sys_shmdt 67
#endif
#ifndef __NUM_sys_msgget
#define __NUM_sys_msgget 68
#endif
#ifndef __NUM_sys_msgsnd
#define __NUM_sys_msgsnd 69
#endif
#ifndef __NUM_sys_msgrcv
#define __NUM_sys_msgrcv 70
#endif
#ifndef __NUM_sys_msgctl
#define __NUM_sys_msgctl 71
#endif
#ifndef __NUM_sys_fcntl
#define __NUM_sys_fcntl 72
#endif
#ifndef __NUM_sys_flock
#define __NUM_sys_flock 73
#endif
#ifndef __NUM_sys_fsync
#define __NUM_sys_fsync 74
#endif
#ifndef __NUM_sys_fdatasync
#define __NUM_sys_fdatasync 75
#endif
#ifndef __NUM_sys_truncate
#define __NUM_sys_truncate 76
#endif
#ifndef __NUM_sys_ftruncate
#define __NUM_sys_ftruncate 77
#endif
#ifndef __NUM_sys_getdents
#define __NUM_sys_getdents 78
#endif
#ifndef __NUM_sys_getcwd
#define __NUM_sys_getcwd 79
#endif
#ifndef __NUM_sys_chdir
#define __NUM_sys_chdir 80
#endif
#ifndef __NUM_sys_fchdir
#define __NUM_sys_fchdir 81
#endif
#ifndef __NUM_sys_rename
#define __NUM_sys_rename 82
#endif
#ifndef __NUM_sys_mkdir
#define __NUM_sys_mkdir 83
#endif
#ifndef __NUM_sys_rmdir
#define __NUM_sys_rmdir 84
#endif
#ifndef __NUM_sys_creat
#define __NUM_sys_creat 85
#endif
#ifndef __NUM_sys_link
#define __NUM_sys_link 86
#endif
#ifndef __NUM_sys_unlink
#define __NUM_sys_unlink 87
#endif
#ifndef __NUM_sys_symlink
#define __NUM_sys_symlink 88
#endif
#ifndef __NUM_sys_readlink
#define __NUM_sys_readlink 89
#endif
#ifndef __NUM_sys_chmod
#define __NUM_sys_chmod 90
#endif
#ifndef __NUM_sys_fchmod
#define __NUM_sys_fchmod 91
#endif
#ifndef __NUM_sys_chown
#define __NUM_sys_chown 92
#endif
#ifndef __NUM_sys_fchown
#define __NUM_sys_fchown 93
#endif
#ifndef __NUM_sys_lchown
#define __NUM_sys_lchown 94
#endif
#ifndef __NUM_sys_umask
#define __NUM_sys_umask 95
#endif
#ifndef __NUM_sys_gettimeofday
#define __NUM_sys_gettimeofday 96
#endif
#ifndef __NUM_sys_getrlimit
#define __NUM_sys_getrlimit 97
#endif
#ifndef __NUM_sys_getrusage
#define __NUM_sys_getrusage 98
#endif
#ifndef __NUM_sys_sysinfo
#define __NUM_sys_sysinfo 99
#endif
#ifndef __NUM_sys_times
#define __NUM_sys_times 100
#endif
#ifndef __NUM_sys_ptrace
#define __NUM_sys_ptrace 101
#endif
#ifndef __NUM_sys_getuid
#define __NUM_sys_getuid 102
#endif
#ifndef __NUM_sys_syslog
#define __NUM_sys_syslog 103
#endif
#ifndef __NUM_sys_getgid
#define __NUM_sys_getgid 104
#endif
#ifndef __NUM_sys_setuid
#define __NUM_sys_setuid 105
#endif
#ifndef __NUM_sys_setgid
#define __NUM_sys_setgid 106
#endif
#ifndef __NUM_sys_geteuid
#define __NUM_sys_geteuid 107
#endif
#ifndef __NUM_sys_getegid
#define __NUM_sys_getegid 108
#endif
#ifndef __NUM_sys_setpgid
#define __NUM_sys_setpgid 109
#endif
#ifndef __NUM_sys_getppid
#define __NUM_sys_getppid 110
#endif
#ifndef __NUM_sys_getpgrp
#define __NUM_sys_getpgrp 111
#endif
#ifndef __NUM_sys_setsid
#define __NUM_sys_setsid 112
#endif
#ifndef __NUM_sys_setreuid
#define __NUM_sys_setreuid 113
#endif
#ifndef __NUM_sys_setregid
#define __NUM_sys_setregid 114
#endif
#ifndef __NUM_sys_getgroups
#define __NUM_sys_getgroups 115
#endif
#ifndef __NUM_sys_setgroups
#define __NUM_sys_setgroups 116
#endif
#ifndef __NUM_sys_setresuid
#define __NUM_sys_setresuid 117
#endif
#ifndef __NUM_sys_getresuid
#define __NUM_sys_getresuid 118
#endif
#ifndef __NUM_sys_setresgid
#define __NUM_sys_setresgid 119
#endif
#ifndef __NUM_sys_getresgid
#define __NUM_sys_getresgid 120
#endif
#ifndef __NUM_sys_getpgid
#define __NUM_sys_getpgid 121
#endif
#ifndef __NUM_sys_setfsuid
#define __NUM_sys_setfsuid 122
#endif
#ifndef __NUM_sys_setfsgid
#define __NUM_sys_setfsgid 123
#endif
#ifndef __NUM_sys_getsid
#define __NUM_sys_getsid 124
#endif
#ifndef __NUM_sys_capget
#define __NUM_sys_capget 125
#endif
#ifndef __NUM_sys_capset
#define __NUM_sys_capset 126
#endif
#ifndef __NUM_sys_rt_sigpending
#define __NUM_sys_rt_sigpending 127
#endif
#ifndef __NUM_sys_rt_sigtimedwait
#define __NUM_sys_rt_sigtimedwait 128
#endif
#ifndef __NUM_sys_rt_sigqueueinfo
#define __NUM_sys_rt_sigqueueinfo 129
#endif
#ifndef __NUM_sys_rt_sigsuspend
#define __NUM_sys_rt_sigsuspend 130
#endif
#ifndef __NUM_sys_sigaltstack
#define __NUM_sys_sigaltstack 131
#endif
#ifndef __NUM_sys_utime
#define __NUM_sys_utime 132
#endif
#ifndef __NUM_sys_mknod
#define __NUM_sys_mknod 133
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 134
#endif
#ifndef __NUM_sys_personality
#define __NUM_sys_personality 135
#endif
#ifndef __NUM_sys_ustat
#define __NUM_sys_ustat 136
#endif
#ifndef __NUM_sys_statfs
#define __NUM_sys_statfs 137
#endif
#ifndef __NUM_sys_fstatfs
#define __NUM_sys_fstatfs 138
#endif
#ifndef __NUM_sys_sysfs
#define __NUM_sys_sysfs 139
#endif
#ifndef __NUM_sys_getpriority
#define __NUM_sys_getpriority 140
#endif
#ifndef __NUM_sys_setpriority
#define __NUM_sys_setpriority 141
#endif
#ifndef __NUM_sys_sched_setparam
#define __NUM_sys_sched_setparam 142
#endif
#ifndef __NUM_sys_sched_getparam
#define __NUM_sys_sched_getparam 143
#endif
#ifndef __NUM_sys_sched_setscheduler
#define __NUM_sys_sched_setscheduler 144
#endif
#ifndef __NUM_sys_sched_getscheduler
#define __NUM_sys_sched_getscheduler 145
#endif
#ifndef __NUM_sys_sched_get_priority_max
#define __NUM_sys_sched_get_priority_max 146
#endif
#ifndef __NUM_sys_sched_get_priority_min
#define __NUM_sys_sched_get_priority_min 147
#endif
#ifndef __NUM_sys_sched_rr_get_interval
#define __NUM_sys_sched_rr_get_interval 148
#endif
#ifndef __NUM_sys_mlock
#define __NUM_sys_mlock 149
#endif
#ifndef __NUM_sys_munlock
#define __NUM_sys_munlock 150
#endif
#ifndef __NUM_sys_mlockall
#define __NUM_sys_mlockall 151
#endif
#ifndef __NUM_sys_munlockall
#define __NUM_sys_munlockall 152
#endif
#ifndef __NUM_sys_vhangup
#define __NUM_sys_vhangup 153
#endif
#ifndef __NUM_sys_modify_ldt
#define __NUM_sys_modify_ldt 154
#endif
#ifndef __NUM_sys_pivot_root
#define __NUM_sys_pivot_root 155
#endif
#ifndef __NUM_sys_sysctl
#define __NUM_sys_sysctl 156
#endif
#ifndef __NUM_sys_prctl
#define __NUM_sys_prctl 157
#endif
#ifndef __NUM_sys_arch_prctl
#define __NUM_sys_arch_prctl 158
#endif
#ifndef __NUM_sys_adjtimex
#define __NUM_sys_adjtimex 159
#endif
#ifndef __NUM_sys_setrlimit
#define __NUM_sys_setrlimit 160
#endif
#ifndef __NUM_sys_chroot
#define __NUM_sys_chroot 161
#endif
#ifndef __NUM_sys_sync
#define __NUM_sys_sync 162
#endif
#ifndef __NUM_sys_acct
#define __NUM_sys_acct 163
#endif
#ifndef __NUM_sys_settimeofday
#define __NUM_sys_settimeofday 164
#endif
#ifndef __NUM_sys_mount
#define __NUM_sys_mount 165
#endif
#ifndef __NUM_sys_umount
#define __NUM_sys_umount 166
#endif
#ifndef __NUM_sys_swapon
#define __NUM_sys_swapon 167
#endif
#ifndef __NUM_sys_swapoff
#define __NUM_sys_swapoff 168
#endif
#ifndef __NUM_sys_reboot
#define __NUM_sys_reboot 169
#endif
#ifndef __NUM_sys_sethostname
#define __NUM_sys_sethostname 170
#endif
#ifndef __NUM_sys_setdomainname
#define __NUM_sys_setdomainname 171
#endif
#ifndef __NUM_stub_iopl
#define __NUM_stub_iopl 172
#endif
#ifndef __NUM_sys_ioperm
#define __NUM_sys_ioperm 173
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 174
#endif
#ifndef __NUM_sys_init_module
#define __NUM_sys_init_module 175
#endif
#ifndef __NUM_sys_delete_module
#define __NUM_sys_delete_module 176
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 177
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 178
#endif
#ifndef __NUM_sys_quotactl
#define __NUM_sys_quotactl 179
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 180
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 181
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 182
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 183
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 184
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 185
#endif
#ifndef __NUM_sys_gettid
#define __NUM_sys_gettid 186
#endif
#ifndef __NUM_sys_readahead
#define __NUM_sys_readahead 187
#endif
#ifndef __NUM_sys_setxattr
#define __NUM_sys_setxattr 188
#endif
#ifndef __NUM_sys_lsetxattr
#define __NUM_sys_lsetxattr 189
#endif
#ifndef __NUM_sys_fsetxattr
#define __NUM_sys_fsetxattr 190
#endif
#ifndef __NUM_sys_getxattr
#define __NUM_sys_getxattr 191
#endif
#ifndef __NUM_sys_lgetxattr
#define __NUM_sys_lgetxattr 192
#endif
#ifndef __NUM_sys_fgetxattr
#define __NUM_sys_fgetxattr 193
#endif
#ifndef __NUM_sys_listxattr
#define __NUM_sys_listxattr 194
#endif
#ifndef __NUM_sys_llistxattr
#define __NUM_sys_llistxattr 195
#endif
#ifndef __NUM_sys_flistxattr
#define __NUM_sys_flistxattr 196
#endif
#ifndef __NUM_sys_removexattr
#define __NUM_sys_removexattr 197
#endif
#ifndef __NUM_sys_lremovexattr
#define __NUM_sys_lremovexattr 198
#endif
#ifndef __NUM_sys_fremovexattr
#define __NUM_sys_fremovexattr 199
#endif
#ifndef __NUM_sys_tkill
#define __NUM_sys_tkill 200
#endif
#ifndef __NUM_sys_time
#define __NUM_sys_time 201
#endif
#ifndef __NUM_sys_futex
#define __NUM_sys_futex 202
#endif
#ifndef __NUM_sys_sched_setaffinity
#define __NUM_sys_sched_setaffinity 203
#endif
#ifndef __NUM_sys_sched_getaffinity
#define __NUM_sys_sched_getaffinity 204
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 205
#endif
#ifndef __NUM_sys_io_setup
#define __NUM_sys_io_setup 206
#endif
#ifndef __NUM_sys_io_destroy
#define __NUM_sys_io_destroy 207
#endif
#ifndef __NUM_sys_io_getevents
#define __NUM_sys_io_getevents 208
#endif
#ifndef __NUM_sys_io_submit
#define __NUM_sys_io_submit 209
#endif
#ifndef __NUM_sys_io_cancel
#define __NUM_sys_io_cancel 210
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 211
#endif
#ifndef __NUM_sys_lookup_dcookie
#define __NUM_sys_lookup_dcookie 212
#endif
#ifndef __NUM_sys_epoll_create
#define __NUM_sys_epoll_create 213
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 214
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 215
#endif
#ifndef __NUM_sys_remap_file_pages
#define __NUM_sys_remap_file_pages 216
#endif
#ifndef __NUM_sys_getdents64
#define __NUM_sys_getdents64 217
#endif
#ifndef __NUM_sys_set_tid_address
#define __NUM_sys_set_tid_address 218
#endif
#ifndef __NUM_sys_restart_syscall
#define __NUM_sys_restart_syscall 219
#endif
#ifndef __NUM_sys_semtimedop
#define __NUM_sys_semtimedop 220
#endif
#ifndef __NUM_sys_fadvise64
#define __NUM_sys_fadvise64 221
#endif
#ifndef __NUM_sys_timer_create
#define __NUM_sys_timer_create 222
#endif
#ifndef __NUM_sys_timer_settime
#define __NUM_sys_timer_settime 223
#endif
#ifndef __NUM_sys_timer_gettime
#define __NUM_sys_timer_gettime 224
#endif
#ifndef __NUM_sys_timer_getoverrun
#define __NUM_sys_timer_getoverrun 225
#endif
#ifndef __NUM_sys_timer_delete
#define __NUM_sys_timer_delete 226
#endif
#ifndef __NUM_sys_clock_settime
#define __NUM_sys_clock_settime 227
#endif
#ifndef __NUM_sys_clock_gettime
#define __NUM_sys_clock_gettime 228
#endif
#ifndef __NUM_sys_clock_getres
#define __NUM_sys_clock_getres 229
#endif
#ifndef __NUM_sys_clock_nanosleep
#define __NUM_sys_clock_nanosleep 230
#endif
#ifndef __NUM_sys_exit_group
#define __NUM_sys_exit_group 231
#endif
#ifndef __NUM_sys_epoll_wait
#define __NUM_sys_epoll_wait 232
#endif
#ifndef __NUM_sys_epoll_ctl
#define __NUM_sys_epoll_ctl 233
#endif
#ifndef __NUM_sys_tgkill
#define __NUM_sys_tgkill 234
#endif
#ifndef __NUM_sys_utimes
#define __NUM_sys_utimes 235
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 236
#endif
#ifndef __NUM_sys_mbind
#define __NUM_sys_mbind 237
#endif
#ifndef __NUM_sys_set_mempolicy
#define __NUM_sys_set_mempolicy 238
#endif
#ifndef __NUM_sys_get_mempolicy
#define __NUM_sys_get_mempolicy 239
#endif
#ifndef __NUM_sys_mq_open
#define __NUM_sys_mq_open 240
#endif
#ifndef __NUM_sys_mq_unlink
#define __NUM_sys_mq_unlink 241
#endif
#ifndef __NUM_sys_mq_timedsend
#define __NUM_sys_mq_timedsend 242
#endif
#ifndef __NUM_sys_mq_timedreceive
#define __NUM_sys_mq_timedreceive 243
#endif
#ifndef __NUM_sys_mq_notify
#define __NUM_sys_mq_notify 244
#endif
#ifndef __NUM_sys_mq_getsetattr
#define __NUM_sys_mq_getsetattr 245
#endif
#ifndef __NUM_sys_kexec_load
#define __NUM_sys_kexec_load 246
#endif
#ifndef __NUM_sys_waitid
#define __NUM_sys_waitid 247
#endif
#ifndef __NUM_sys_add_key
#define __NUM_sys_add_key 248
#endif
#ifndef __NUM_sys_request_key
#define __NUM_sys_request_key 249
#endif
#ifndef __NUM_sys_keyctl
#define __NUM_sys_keyctl 250
#endif
#ifndef __NUM_sys_ioprio_set
#define __NUM_sys_ioprio_set 251
#endif
#ifndef __NUM_sys_ioprio_get
#define __NUM_sys_ioprio_get 252
#endif
#ifndef __NUM_sys_inotify_init
#define __NUM_sys_inotify_init 253
#endif
#ifndef __NUM_sys_inotify_add_watch
#define __NUM_sys_inotify_add_watch 254
#endif
#ifndef __NUM_sys_inotify_rm_watch
#define __NUM_sys_inotify_rm_watch 255
#endif
#ifndef __NUM_sys_migrate_pages
#define __NUM_sys_migrate_pages 256
#endif
#ifndef __NUM_sys_openat
#define __NUM_sys_openat 257
#endif
#ifndef __NUM_sys_mkdirat
#define __NUM_sys_mkdirat 258
#endif
#ifndef __NUM_sys_mknodat
#define __NUM_sys_mknodat 259
#endif
#ifndef __NUM_sys_fchownat
#define __NUM_sys_fchownat 260
#endif
#ifndef __NUM_sys_futimesat
#define __NUM_sys_futimesat 261
#endif
#ifndef __NUM_sys_newfstatat
#define __NUM_sys_newfstatat 262
#endif
#ifndef __NUM_sys_unlinkat
#define __NUM_sys_unlinkat 263
#endif
#ifndef __NUM_sys_renameat
#define __NUM_sys_renameat 264
#endif
#ifndef __NUM_sys_linkat
#define __NUM_sys_linkat 265
#endif
#ifndef __NUM_sys_symlinkat
#define __NUM_sys_symlinkat 266
#endif
#ifndef __NUM_sys_readlinkat
#define __NUM_sys_readlinkat 267
#endif
#ifndef __NUM_sys_fchmodat
#define __NUM_sys_fchmodat 268
#endif
#ifndef __NUM_sys_faccessat
#define __NUM_sys_faccessat 269
#endif
#ifndef __NUM_sys_pselect6
#define __NUM_sys_pselect6 270
#endif
#ifndef __NUM_sys_ppoll
#define __NUM_sys_ppoll 271
#endif
#ifndef __NUM_sys_unshare
#define __NUM_sys_unshare 272
#endif
#ifndef __NUM_sys_set_robust_list
#define __NUM_sys_set_robust_list 273
#endif
#ifndef __NUM_sys_get_robust_list
#define __NUM_sys_get_robust_list 274
#endif
#ifndef __NUM_sys_splice
#define __NUM_sys_splice 275
#endif
#ifndef __NUM_sys_tee
#define __NUM_sys_tee 276
#endif
#ifndef __NUM_sys_sync_file_range
#define __NUM_sys_sync_file_range 277
#endif
#ifndef __NUM_sys_vmsplice
#define __NUM_sys_vmsplice 278
#endif
#ifndef __NUM_sys_move_pages
#define __NUM_sys_move_pages 279
#endif
#ifndef __NUM_sys_utimensat
#define __NUM_sys_utimensat 280
#endif
#ifndef __NUM_sys_epoll_pwait
#define __NUM_sys_epoll_pwait 281
#endif
#ifndef __NUM_sys_signalfd
#define __NUM_sys_signalfd 282
#endif
#ifndef __NUM_sys_timerfd_create
#define __NUM_sys_timerfd_create 283
#endif
#ifndef __NUM_sys_eventfd
#define __NUM_sys_eventfd 284
#endif
#ifndef __NUM_sys_fallocate
#define __NUM_sys_fallocate 285
#endif
#ifndef __NUM_sys_timerfd_settime
#define __NUM_sys_timerfd_settime 286
#endif
#ifndef __NUM_sys_timerfd_gettime
#define __NUM_sys_timerfd_gettime 287
#endif
#ifndef __NUM_sys_accept4
#define __NUM_sys_accept4 288
#endif
#ifndef __NUM_sys_signalfd4
#define __NUM_sys_signalfd4 289
#endif
#ifndef __NUM_sys_eventfd2
#define __NUM_sys_eventfd2 290
#endif
#ifndef __NUM_sys_epoll_create1
#define __NUM_sys_epoll_create1 291
#endif
#ifndef __NUM_sys_dup3
#define __NUM_sys_dup3 292
#endif
#ifndef __NUM_sys_pipe2
#define __NUM_sys_pipe2 293
#endif
#ifndef __NUM_sys_inotify_init1
#define __NUM_sys_inotify_init1 294
#endif
#ifndef __NUM_sys_preadv
#define __NUM_sys_preadv 295
#endif
#ifndef __NUM_sys_pwritev
#define __NUM_sys_pwritev 296
#endif
#ifndef __NUM_sys_rt_tgsigqueueinfo
#define __NUM_sys_rt_tgsigqueueinfo 297
#endif
#ifndef __NUM_sys_perf_event_open
#define __NUM_sys_perf_event_open 298
#endif
#ifndef __NUM_sys_recvmmsg
#define __NUM_sys_recvmmsg 299
#endif
#ifndef __NUM_sys_fanotify_init
#define __NUM_sys_fanotify_init 300
#endif
#ifndef __NUM_sys_fanotify_mark
#define __NUM_sys_fanotify_mark 301
#endif
#ifndef __NUM_sys_prlimit64
#define __NUM_sys_prlimit64 302
#endif
#ifndef __NUM_sys_name_to_handle_at
#define __NUM_sys_name_to_handle_at 303
#endif
#ifndef __NUM_sys_open_by_handle_at
#define __NUM_sys_open_by_handle_at 304
#endif
#ifndef __NUM_sys_clock_adjtime
#define __NUM_sys_clock_adjtime 305
#endif
#ifndef __NUM_sys_syncfs
#define __NUM_sys_syncfs 306
#endif
#ifndef __NUM_sys_sendmmsg
#define __NUM_sys_sendmmsg 307
#endif
#ifndef __NUM_sys_setns
#define __NUM_sys_setns 308
#endif
#ifndef __NUM_sys_getcpu
#define __NUM_sys_getcpu 309
#endif
#ifndef __NUM_sys_process_vm_readv
#define __NUM_sys_process_vm_readv 310
#endif
#ifndef __NUM_sys_process_vm_writev
#define __NUM_sys_process_vm_writev 311
#endif
#ifndef __NUM_sys_kcmp
#define __NUM_sys_kcmp 312
#endif
#ifndef __NUM_sys_finit_module
#define __NUM_sys_finit_module 313
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 314
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 315
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 316
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 317
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 318
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 319
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 320
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 321
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 322
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 323
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 324
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 325
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 326
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 327
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 328
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 329
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 330
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 331
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 332
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 333
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 334
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 335
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 336
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 337
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 338
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 339
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 340
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 341
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 342
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 343
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 344
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 345
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 346
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 347
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 348
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 349
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 350
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 351
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 352
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 353
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 354
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 355
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 356
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 357
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 358
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 359
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 360
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 361
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 362
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 363
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 364
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 365
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 366
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 367
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 368
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 369
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 370
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 371
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 372
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 373
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 374
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 375
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 376
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 377
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 378
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 379
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 380
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 381
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 382
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 383
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 384
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 385
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 386
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 387
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 388
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 389
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 390
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 391
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 392
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 393
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 394
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 395
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 396
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 397
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 398
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 399
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 400
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 401
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 402
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 403
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 404
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 405
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 406
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 407
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 408
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 409
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 410
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 411
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 412
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 413
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 414
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 415
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 416
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 417
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 418
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 419
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 420
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 421
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 422
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 423
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 424
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 425
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 426
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 427
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 428
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 429
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 430
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 431
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 432
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 433
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 434
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 435
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 436
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 437
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 438
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 439
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 440
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 441
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 442
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 443
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 444
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 445
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 446
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 447
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 448
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 449
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 450
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 451
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 452
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 453
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 454
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 455
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 456
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 457
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 458
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 459
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 460
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 461
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 462
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 463
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 464
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 465
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 466
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 467
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 468
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 469
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 470
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 471
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 472
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 473
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 474
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 475
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 476
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 477
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 478
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 479
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 480
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 481
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 482
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 483
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 484
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 485
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 486
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 487
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 488
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 489
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 490
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 491
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 492
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 493
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 494
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 495
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 496
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 497
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 498
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 499
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 500
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 501
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 502
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 503
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 504
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 505
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 506
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 507
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 508
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 509
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 510
#endif
#ifndef __NUM_compat_sys_ipc
#define __NUM_compat_sys_ipc 511
#endif
#ifndef __NUM_sys32_rt_sigaction
#define __NUM_sys32_rt_sigaction 512
#endif
#ifndef __NUM_stub_x32_rt_sigreturn
#define __NUM_stub_x32_rt_sigreturn 513
#endif
#ifndef __NUM_compat_sys_ioctl
#define __NUM_compat_sys_ioctl 514
#endif
#ifndef __NUM_compat_sys_readv
#define __NUM_compat_sys_readv 515
#endif
#ifndef __NUM_compat_sys_writev
#define __NUM_compat_sys_writev 516
#endif
#ifndef __NUM_compat_sys_recvfrom
#define __NUM_compat_sys_recvfrom 517
#endif
#ifndef __NUM_compat_sys_sendmsg
#define __NUM_compat_sys_sendmsg 518
#endif
#ifndef __NUM_compat_sys_recvmsg
#define __NUM_compat_sys_recvmsg 519
#endif
#ifndef __NUM_stub_x32_execve
#define __NUM_stub_x32_execve 520
#endif
#ifndef __NUM_compat_sys_ptrace
#define __NUM_compat_sys_ptrace 521
#endif
#ifndef __NUM_sys32_rt_sigpending
#define __NUM_sys32_rt_sigpending 522
#endif
#ifndef __NUM_compat_sys_rt_sigtimedwait
#define __NUM_compat_sys_rt_sigtimedwait 523
#endif
#ifndef __NUM_sys32_rt_sigqueueinfo
#define __NUM_sys32_rt_sigqueueinfo 524
#endif
#ifndef __NUM_compat_sys_sigaltstack
#define __NUM_compat_sys_sigaltstack 525
#endif
#ifndef __NUM_compat_sys_timer_create
#define __NUM_compat_sys_timer_create 526
#endif
#ifndef __NUM_compat_sys_mq_notify
#define __NUM_compat_sys_mq_notify 527
#endif
#ifndef __NUM_compat_sys_kexec_load
#define __NUM_compat_sys_kexec_load 528
#endif
#ifndef __NUM_compat_sys_waitid
#define __NUM_compat_sys_waitid 529
#endif
#ifndef __NUM_compat_sys_set_robust_list
#define __NUM_compat_sys_set_robust_list 530
#endif
#ifndef __NUM_compat_sys_get_robust_list
#define __NUM_compat_sys_get_robust_list 531
#endif
#ifndef __NUM_compat_sys_vmsplice
#define __NUM_compat_sys_vmsplice 532
#endif
#ifndef __NUM_compat_sys_move_pages
#define __NUM_compat_sys_move_pages 533
#endif
#ifndef __NUM_compat_sys_preadv64
#define __NUM_compat_sys_preadv64 534
#endif
#ifndef __NUM_compat_sys_pwritev64
#define __NUM_compat_sys_pwritev64 535
#endif
#ifndef __NUM_compat_sys_rt_tgsigqueueinfo
#define __NUM_compat_sys_rt_tgsigqueueinfo 536
#endif
#ifndef __NUM_compat_sys_recvmmsg
#define __NUM_compat_sys_recvmmsg 537
#endif
#ifndef __NUM_compat_sys_sendmmsg
#define __NUM_compat_sys_sendmmsg 538
#endif
#ifndef __NUM_compat_sys_process_vm_readv
#define __NUM_compat_sys_process_vm_readv 539
#endif
#ifndef __NUM_compat_sys_process_vm_writev
#define __NUM_compat_sys_process_vm_writev 540
#endif
#ifndef __NUM_compat_sys_setsockopt
#define __NUM_compat_sys_setsockopt 541
#endif
#ifndef __NUM_compat_sys_getsockopt
#define __NUM_compat_sys_getsockopt 542
#endif
#ifndef __NUM_VDSO32_PRELINK
#define __NUM_VDSO32_PRELINK 543
#endif
SYSCALL(sys_read)
SYSCALL(sys_write)
SYSCALL(sys_open)
SYSCALL(sys_close)
SYSCALL(sys_newstat)
SYSCALL(sys_newfstat)
SYSCALL(sys_newlstat)
SYSCALL(sys_poll)
SYSCALL(sys_lseek)
SYSCALL(sys_mmap)
SYSCALL(sys_mprotect)
SYSCALL(sys_munmap)
SYSCALL(sys_brk)
SYSCALL(sys_rt_sigaction)
SYSCALL(sys_rt_sigprocmask)
SYSCALL(stub_rt_sigreturn)
SYSCALL(sys_ioctl)
SYSCALL(sys_pread64)
SYSCALL(sys_pwrite64)
SYSCALL(sys_readv)
SYSCALL(sys_writev)
SYSCALL(sys_access)
SYSCALL(sys_pipe)
SYSCALL(sys_select)
SYSCALL(sys_sched_yield)
SYSCALL(sys_mremap)
SYSCALL(sys_msync)
SYSCALL(sys_mincore)
SYSCALL(sys_madvise)
SYSCALL(sys_shmget)
SYSCALL(sys_shmat)
SYSCALL(sys_shmctl)
SYSCALL(sys_dup)
SYSCALL(sys_dup2)
SYSCALL(sys_pause)
SYSCALL(sys_nanosleep)
SYSCALL(sys_getitimer)
SYSCALL(sys_alarm)
SYSCALL(sys_setitimer)
SYSCALL(sys_getpid)
SYSCALL(sys_sendfile64)
SYSCALL(sys_socket)
SYSCALL(sys_connect)
SYSCALL(sys_accept)
SYSCALL(sys_sendto)
SYSCALL(sys_recvfrom)
SYSCALL(sys_sendmsg)
SYSCALL(sys_recvmsg)
SYSCALL(sys_shutdown)
SYSCALL(sys_bind)
SYSCALL(sys_listen)
SYSCALL(sys_getsockname)
SYSCALL(sys_getpeername)
SYSCALL(sys_socketpair)
SYSCALL(sys_setsockopt)
SYSCALL(sys_getsockopt)
SYSCALL(stub_clone)
SYSCALL(stub_fork)
SYSCALL(stub_vfork)
SYSCALL(stub_execve)
SYSCALL(sys_exit)
SYSCALL(sys_wait4)
SYSCALL(sys_kill)
SYSCALL(sys_newuname)
SYSCALL(sys_semget)
SYSCALL(sys_semop)
SYSCALL(sys_semctl)
SYSCALL(sys_shmdt)
SYSCALL(sys_msgget)
SYSCALL(sys_msgsnd)
SYSCALL(sys_msgrcv)
SYSCALL(sys_msgctl)
SYSCALL(sys_fcntl)
SYSCALL(sys_flock)
SYSCALL(sys_fsync)
SYSCALL(sys_fdatasync)
SYSCALL(sys_truncate)
SYSCALL(sys_ftruncate)
SYSCALL(sys_getdents)
SYSCALL(sys_getcwd)
SYSCALL(sys_chdir)
SYSCALL(sys_fchdir)
SYSCALL(sys_rename)
SYSCALL(sys_mkdir)
SYSCALL(sys_rmdir)
SYSCALL(sys_creat)
SYSCALL(sys_link)
SYSCALL(sys_unlink)
SYSCALL(sys_symlink)
SYSCALL(sys_readlink)
SYSCALL(sys_chmod)
SYSCALL(sys_fchmod)
SYSCALL(sys_chown)
SYSCALL(sys_fchown)
SYSCALL(sys_lchown)
SYSCALL(sys_umask)
SYSCALL(sys_gettimeofday)
SYSCALL(sys_getrlimit)
SYSCALL(sys_getrusage)
SYSCALL(sys_sysinfo)
SYSCALL(sys_times)
SYSCALL(sys_ptrace)
SYSCALL(sys_getuid)
SYSCALL(sys_syslog)
SYSCALL(sys_getgid)
SYSCALL(sys_setuid)
SYSCALL(sys_setgid)
SYSCALL(sys_geteuid)
SYSCALL(sys_getegid)
SYSCALL(sys_setpgid)
SYSCALL(sys_getppid)
SYSCALL(sys_getpgrp)
SYSCALL(sys_setsid)
SYSCALL(sys_setreuid)
SYSCALL(sys_setregid)
SYSCALL(sys_getgroups)
SYSCALL(sys_setgroups)
SYSCALL(sys_setresuid)
SYSCALL(sys_getresuid)
SYSCALL(sys_setresgid)
SYSCALL(sys_getresgid)
SYSCALL(sys_getpgid)
SYSCALL(sys_setfsuid)
SYSCALL(sys_setfsgid)
SYSCALL(sys_getsid)
SYSCALL(sys_capget)
SYSCALL(sys_capset)
SYSCALL(sys_rt_sigpending)
SYSCALL(sys_rt_sigtimedwait)
SYSCALL(sys_rt_sigqueueinfo)
SYSCALL(sys_rt_sigsuspend)
SYSCALL(sys_sigaltstack)
SYSCALL(sys_utime)
SYSCALL(sys_mknod)
SYSCALL(compat_sys_ipc)
SYSCALL(sys_personality)
SYSCALL(sys_ustat)
SYSCALL(sys_statfs)
SYSCALL(sys_fstatfs)
SYSCALL(sys_sysfs)
SYSCALL(sys_getpriority)
SYSCALL(sys_setpriority)
SYSCALL(sys_sched_setparam)
SYSCALL(sys_sched_getparam)
SYSCALL(sys_sched_setscheduler)
SYSCALL(sys_sched_getscheduler)
SYSCALL(sys_sched_get_priority_max)
SYSCALL(sys_sched_get_priority_min)
SYSCALL(sys_sched_rr_get_interval)
SYSCALL(sys_mlock)
SYSCALL(sys_munlock)
SYSCALL(sys_mlockall)
SYSCALL(sys_munlockall)
SYSCALL(sys_vhangup)
SYSCALL(sys_modify_ldt)
SYSCALL(sys_pivot_root)
SYSCALL(sys_sysctl)
SYSCALL(sys_prctl)
SYSCALL(sys_arch_prctl)
SYSCALL(sys_adjtimex)
SYSCALL(sys_setrlimit)
SYSCALL(sys_chroot)
SYSCALL(sys_sync)
SYSCALL(sys_acct)
SYSCALL(sys_settimeofday)
SYSCALL(sys_mount)
SYSCALL(sys_umount)
SYSCALL(sys_swapon)
SYSCALL(sys_swapoff)
SYSCALL(sys_reboot)
SYSCALL(sys_sethostname)
SYSCALL(sys_setdomainname)
SYSCALL(stub_iopl)
SYSCALL(sys_ioperm)
SYSCALL(compat_sys_ipc)
SYSCALL(sys_init_module)
SYSCALL(sys_delete_module)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(sys_quotactl)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(sys_gettid)
SYSCALL(sys_readahead)
SYSCALL(sys_setxattr)
SYSCALL(sys_lsetxattr)
SYSCALL(sys_fsetxattr)
SYSCALL(sys_getxattr)
SYSCALL(sys_lgetxattr)
SYSCALL(sys_fgetxattr)
SYSCALL(sys_listxattr)
SYSCALL(sys_llistxattr)
SYSCALL(sys_flistxattr)
SYSCALL(sys_removexattr)
SYSCALL(sys_lremovexattr)
SYSCALL(sys_fremovexattr)
SYSCALL(sys_tkill)
SYSCALL(sys_time)
SYSCALL(sys_futex)
SYSCALL(sys_sched_setaffinity)
SYSCALL(sys_sched_getaffinity)
SYSCALL(compat_sys_ipc)
SYSCALL(sys_io_setup)
SYSCALL(sys_io_destroy)
SYSCALL(sys_io_getevents)
SYSCALL(sys_io_submit)
SYSCALL(sys_io_cancel)
SYSCALL(compat_sys_ipc)
SYSCALL(sys_lookup_dcookie)
SYSCALL(sys_epoll_create)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(sys_remap_file_pages)
SYSCALL(sys_getdents64)
SYSCALL(sys_set_tid_address)
SYSCALL(sys_restart_syscall)
SYSCALL(sys_semtimedop)
SYSCALL(sys_fadvise64)
SYSCALL(sys_timer_create)
SYSCALL(sys_timer_settime)
SYSCALL(sys_timer_gettime)
SYSCALL(sys_timer_getoverrun)
SYSCALL(sys_timer_delete)
SYSCALL(sys_clock_settime)
SYSCALL(sys_clock_gettime)
SYSCALL(sys_clock_getres)
SYSCALL(sys_clock_nanosleep)
SYSCALL(sys_exit_group)
SYSCALL(sys_epoll_wait)
SYSCALL(sys_epoll_ctl)
SYSCALL(sys_tgkill)
SYSCALL(sys_utimes)
SYSCALL(compat_sys_ipc)
SYSCALL(sys_mbind)
SYSCALL(sys_set_mempolicy)
SYSCALL(sys_get_mempolicy)
SYSCALL(sys_mq_open)
SYSCALL(sys_mq_unlink)
SYSCALL(sys_mq_timedsend)
SYSCALL(sys_mq_timedreceive)
SYSCALL(sys_mq_notify)
SYSCALL(sys_mq_getsetattr)
SYSCALL(sys_kexec_load)
SYSCALL(sys_waitid)
SYSCALL(sys_add_key)
SYSCALL(sys_request_key)
SYSCALL(sys_keyctl)
SYSCALL(sys_ioprio_set)
SYSCALL(sys_ioprio_get)
SYSCALL(sys_inotify_init)
SYSCALL(sys_inotify_add_watch)
SYSCALL(sys_inotify_rm_watch)
SYSCALL(sys_migrate_pages)
SYSCALL(sys_openat)
SYSCALL(sys_mkdirat)
SYSCALL(sys_mknodat)
SYSCALL(sys_fchownat)
SYSCALL(sys_futimesat)
SYSCALL(sys_newfstatat)
SYSCALL(sys_unlinkat)
SYSCALL(sys_renameat)
SYSCALL(sys_linkat)
SYSCALL(sys_symlinkat)
SYSCALL(sys_readlinkat)
SYSCALL(sys_fchmodat)
SYSCALL(sys_faccessat)
SYSCALL(sys_pselect6)
SYSCALL(sys_ppoll)
SYSCALL(sys_unshare)
SYSCALL(sys_set_robust_list)
SYSCALL(sys_get_robust_list)
SYSCALL(sys_splice)
SYSCALL(sys_tee)
SYSCALL(sys_sync_file_range)
SYSCALL(sys_vmsplice)
SYSCALL(sys_move_pages)
SYSCALL(sys_utimensat)
SYSCALL(sys_epoll_pwait)
SYSCALL(sys_signalfd)
SYSCALL(sys_timerfd_create)
SYSCALL(sys_eventfd)
SYSCALL(sys_fallocate)
SYSCALL(sys_timerfd_settime)
SYSCALL(sys_timerfd_gettime)
SYSCALL(sys_accept4)
SYSCALL(sys_signalfd4)
SYSCALL(sys_eventfd2)
SYSCALL(sys_epoll_create1)
SYSCALL(sys_dup3)
SYSCALL(sys_pipe2)
SYSCALL(sys_inotify_init1)
SYSCALL(sys_preadv)
SYSCALL(sys_pwritev)
SYSCALL(sys_rt_tgsigqueueinfo)
SYSCALL(sys_perf_event_open)
SYSCALL(sys_recvmmsg)
SYSCALL(sys_fanotify_init)
SYSCALL(sys_fanotify_mark)
SYSCALL(sys_prlimit64)
SYSCALL(sys_name_to_handle_at)
SYSCALL(sys_open_by_handle_at)
SYSCALL(sys_clock_adjtime)
SYSCALL(sys_syncfs)
SYSCALL(sys_sendmmsg)
SYSCALL(sys_setns)
SYSCALL(sys_getcpu)
SYSCALL(sys_process_vm_readv)
SYSCALL(sys_process_vm_writev)
SYSCALL(sys_kcmp)
SYSCALL(sys_finit_module)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(compat_sys_ipc)
SYSCALL(sys32_rt_sigaction)
SYSCALL(stub_x32_rt_sigreturn)
SYSCALL(compat_sys_ioctl)
SYSCALL(compat_sys_readv)
SYSCALL(compat_sys_writev)
SYSCALL(compat_sys_recvfrom)
SYSCALL(compat_sys_sendmsg)
SYSCALL(compat_sys_recvmsg)
SYSCALL(stub_x32_execve)
SYSCALL(compat_sys_ptrace)
SYSCALL(sys32_rt_sigpending)
SYSCALL(compat_sys_rt_sigtimedwait)
SYSCALL(sys32_rt_sigqueueinfo)
SYSCALL(compat_sys_sigaltstack)
SYSCALL(compat_sys_timer_create)
SYSCALL(compat_sys_mq_notify)
SYSCALL(compat_sys_kexec_load)
SYSCALL(compat_sys_waitid)
SYSCALL(compat_sys_set_robust_list)
SYSCALL(compat_sys_get_robust_list)
SYSCALL(compat_sys_vmsplice)
SYSCALL(compat_sys_move_pages)
SYSCALL(compat_sys_preadv64)
SYSCALL(compat_sys_pwritev64)
SYSCALL(compat_sys_rt_tgsigqueueinfo)
SYSCALL(compat_sys_recvmmsg)
SYSCALL(compat_sys_sendmmsg)
SYSCALL(compat_sys_process_vm_readv)
SYSCALL(compat_sys_process_vm_writev)
SYSCALL(compat_sys_setsockopt)
SYSCALL(compat_sys_getsockopt)
