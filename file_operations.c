#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd;
    const char *pathname = "example.txt";
    int flags = O_RDWR | O_CREAT;
    mode_t mode = 0644;
    
    fd = open(pathname, flags, mode);
    if (fd == -1) {
        /* Code to handle the error */
        perror("Error opening file");
        return 1;
    }
    
    /* File operations here */
    
    if (close(fd) == -1) {
        /* Code to handle the error */
        perror("Error closing file");
        return 1;
    }
    
    return 0;
}
