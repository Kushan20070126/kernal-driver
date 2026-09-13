#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kushan");
MODULE_DESCRIPTION("A simple LDD module");


static int kushan_module_init(void){
    printk("Hello World form kushan ... \n");
    return 0;
}

static void kushan_module_exit(void){
    printk("Goodbye World form kushan ... \n");
}

module_init(kushan_module_init);
module_exit(kushan_module_exit);