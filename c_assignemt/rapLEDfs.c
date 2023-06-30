#include <stdio.h>
#include <unistd.h>
int main(){
FILE *sysfs_handle = NULL;
        sysfs_handle = fopen("/sys/class/gpio/export", "w");
        if (sysfs_handle != NULL){
                fwrite("4", sizeof(char), 2, sysfs_handle);
                printf("\nGPIO 4 opened for EXPORT\n");
                fclose(sysfs_handle);
        }
        else
        {
 printf(".....................................");

        }
        sysfs_handle = fopen("/sys/class/gpio/gpio4/direction", "w" );
        if (sysfs_handle != NULL){

                fwrite("out", sizeof(char), 4, sysfs_handle);

                fclose(sysfs_handle);
        }
        else
        {
                printf(".........................");
        }
sysfs_handle = fopen("/sys/class/gpio/gpio4/value", "w");
        if (sysfs_handle != NULL){
                fwrite("out", sizeof(char), 4, sysfs_handle);

                fclose(sysfs_handle);
        }
        else
        {
                 printf("...................");
      }

while(1){
        sysfs_handle = fopen("/sys/class/gpio/gpio4/value","w");
        if (sysfs_handle == NULL)
        {
          printf("LED ..............");
        }

                fwrite("1", sizeof(char), 2, sysfs_handle);
                fclose(sysfs_handle);
               sleep(1);
sysfs_handle = fopen("/sys/class/gpio/gpio4/value","w");

if(sysfs_handle == NULL){
        printf("LED oFF -----------");
}

fwrite("0", sizeof(char), 2, sysfs_handle);
fclose(sysfs_handle);
sleep(1);
}

return 0;
}
        
