#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    int fd;
    unsigned char c;

    /* needs error checking */
    fd = open("C:\\Users\\Carlito\\Desktop\\avatarpic.png", O_RDONLY);
    read(fd, &c, sizeof(c));
    close(fd);

    printf("<0x%x>\n", c);
    return 0;
}
