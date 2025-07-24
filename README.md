# pnd_adam_u_deploy

## 编译
```shell
colcon build --packages-select pnd_adam_u_deploy --cmake-clean-cache
```

## 运行
   ```shell
   sudo ./run.sh
   ```

注意：这只是启动了pnd_adam_u_deploy节点，如果要控制adam_u，需要运行/home/pnd-humanoid/Documents/adam_u_demo下的run_pndrobotros2.sh
确保pndrobotros2节点正常启动
