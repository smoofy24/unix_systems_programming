#include <errno.h>
#include <unistd.h>
#include <stdio.h>


int main(void)
{
//    int error;
    int fildes;
    if (close(fildes) == -1)
    {
//       error = errno;
        printf("%d\n", errno);
        perror("Pepa mele mamu");
    }
}
