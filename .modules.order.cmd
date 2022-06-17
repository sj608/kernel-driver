cmd_/home/sj/projects/kernel-driver/modules.order := {   echo /home/sj/projects/kernel-driver/simpleModule.ko; :; } | awk '!x[$$0]++' - > /home/sj/projects/kernel-driver/modules.order
