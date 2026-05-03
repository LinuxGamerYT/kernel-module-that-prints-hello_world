// adds header files for the kernel module 
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

// function that prints hello when module is loaded
static int __init my_init(void){
    printk(KERN_ALERT "hello Jarvis\n");
    return 0;   
}

// function that prints goodbye when module is unloaded
static void  __exit my_exit(void){
    printk(KERN_ALERT "goodbye Jarvis\n");
}

// execute both functions
module_init(my_init);
module_exit(my_exit);

// information about the module
MODULE_LICENSE("GPL");
MODULE_AUTHOR("DoomGamerYT");
MODULE_DESCRIPTION("A simple kernel module that prints jarvis commands on load and unload.");
