obj-$(CONFIG_HUAWEI_GPIO_UNITE) += hwgpio.o

GET_LOCAL_DIR = $(patsubst %/, %, $(dir $(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))))

gpio_hsad:
	$(shell cd $(GET_LOCAL_DIR);perl gen_gpio_cfg.pl ../../../../device/huawei/customize/hsad > /dev/null 2>&1)
