#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
static int num = 4000;

static int hello_init(void) {
	printk(KERN_ALERT "Hello World enter\n");
	printk(KERN_INFO "num is: %d\n",num);
	return 0;
}

static void hello_exit(void) {
	printk(KERN_ALERT "Hello World exit\n");
}

int add_integar(int a, int b) {
	return a+b;
}

module_init(hello_init);
module_exit(hello_exit);
module_param(num, int, S_IRUGO);

EXPORT_SYMBOL(add_integar);

MODULE_AUTHOR("Jack He");
MODULE_DESCRIPTIOM("A simple hello world Module");
MODULE_ALIAS("a simplest module");
