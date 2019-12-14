偏好-共享中修改计算机名.偏好-共享中修改计算机名

![image-20191208001450493](https://tva1.sinaimg.cn/large/006tNbRwly1g9om4u3ypjj30y205kdgm.jpg)



然后地址栏输入http://typeme.local:8080/ *（本地mac有8080端口的web服务）*



开开启django时，使用0.0.0.0:xxxx，作为ip和端口例如：

**python3 manage.py runserver 0.0.0.0:9000**

然后在settings里修改ALLOWED_HOSTS = []，

改为**ALLOWED_HOSTS = ['\*',]**，注意不要漏掉“，”。

其他机器就可以通过这台机器的ip和端口号访问django了。

例如：http://192.168.14.40:9000/index.html

