#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv) {
	char **env = { NULL };
	if (execve("/usr/bin/tcpdump", argv, env) == -1) {
		perror("tcpdump_net_raw: exec:");
		return 1;
	}
}
