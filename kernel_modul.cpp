#include <linux/init.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fdtable.h>
#include <linux/sched.h>

static int elso_init_module(void) {
	int i=0;
	struct task_struct *task;
	struct list_head *p;

	printk(KERN_NOTICE "Kernel modul\n");

	list_for_each(p,current->tasks.next) {
		task = list_entry(p,struct task_struct,tasks);
		i = (task->files)->next_fd;
		printk(KERN_NOTICE "%s %i %i\n", task->comm, task->pid, i);
	}
	
	return 0;
}

static void elso_exit_module(void) {
	printk(KERN_NOTICE "Good by\n");
}

module_init(elso_init_module);
module_exit(elso_exit_module);