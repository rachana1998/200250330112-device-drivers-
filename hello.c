#include<linux/init.h>
#include<linux/module.h>


static int helloworld_init(void)
{
	printk(KERN_ALERT "Hello, world\n");
	return 0;
}

static void helloworld_exit(void)
{
	printk(KERN_ALERT "Goodbye, world\n");

}

module_init(helloworld_init);
module_exit(helloworld_exit);

