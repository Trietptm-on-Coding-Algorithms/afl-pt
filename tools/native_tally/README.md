

./native_tally.py -d /tmp/ramdisk/zlib-10-24-qemu-feedback/ -b ../afl-2.42b/afl-showmap -p ./partition.sh -o /tmp/ramdisk/output -e 'cat AFL_FILE | ~/work/afl-pt/afl-2.42b/test_progs/zlib-1.2.11/obj-afl/minigzip -d' -t 1
