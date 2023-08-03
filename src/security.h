#ifndef SECURITY_H
#define SECURITY_H

#include <errno.h>

// Used to represent the result of a seccomp rule.
#define SECURITY_SCMP_FAIL SCMP_ACT_ERRNO(EPERM)

// Setup capabilities for the calling process
int security_set_caps(void);

// Setup seccomp for the calling process
int security_set_seccomp(void);

#endif
