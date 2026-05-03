# description
just a simple kernel module that prints hello/goodbye, world
# how to compile and run
make
sudo insmod main.ko
sudo rmmod main.ko
# how to clean up
sudo rmmod main.ko
make clean
