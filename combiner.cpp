#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/wait.h>
#include <cassert>
#include <cstdlib>
using namespace std;

int main()
{

	pid_t child1, child2;
	int pipedes[2], status;
	assert (pipe(pipedes) == 0); 
	child1 = fork();
	if (child1 == 0) {

	close(pipedes[0]); 
	dup2(pipedes[1], STDOUT_FILENO); 
	execl("./mapper", "mapper", (char *) 0);

					}

	child2 = fork();
	if (child2 == 0) {

	close (pipedes[1]); 
	dup2(pipedes[0], STDIN_FILENO); 
	execl("./reducer", "reducer", (char *) 0);
					}

	close (pipedes[0]); 
	close (pipedes[1]);

	waitpid(child2, &status, 0); 

return 0;
}
