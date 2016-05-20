#ifndef _MY_PTRACE_UTILS_HEADER_
#define _MY_PTRACE_UTILS_HEADER_

#include <sys/ptrace.h>
#include <sys/user.h>
#include <sys/regs.h>

#define LONG_SIZE sizeof(long)

int ptrace_attach(pid_t pid);
int ptrace_deatch(pid_t pid);
int ptrace_contine(pind_t pid);
int ptrace_getregs(pid_t pid, struct user_regs_struct* regs);
int ptrace_setregs(pid_t pid, struct user_regs_struct* regs);

#endif // _MY_PTRACE_UTILS_HEADER_

