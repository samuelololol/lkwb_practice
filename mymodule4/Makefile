MODULE_FILENAME=mymodule4

obj-m += $(MODULE_FILENAME).o
KO_FILE = $(MODULE_FILENAME).ko

export KROOT=/lib/modules/$(shell uname -r)/build

modules:
	@$(MAKE) -C $(KROOT) M=$(PWD) modules

modules_install:
	@$(MAKE) -C $(KROOT) M=$(PWD) modules_install

clean:
	@$(MAKE) -C $(KROOT) M=$(PWD) clean
	rm -rf Module.symvers modules.order

insert: modules
	sudo insmod $(CURDIR)/$(KO_FILE) param1=10

remove:
	sudo rmmod $(MODULE_FILENAME)

printlog: modules
	sudo dmesg -c
	sudo insmod $(CURDIR)/$(KO_FILE) param1=10
	sudo dmesg -c
	sudo rmmod $(MODULE_FILENAME)
	dmesg
