#include "app/app.h"
#include "device/device.h"
#include "config/config.h"

#include <stdio.h>

void print_app()
{
    printf("Hello from app\n" );
}


int main()
{
    printf( "Hello world\n" );
    print_app();
    print_device();

    return 0;
}
