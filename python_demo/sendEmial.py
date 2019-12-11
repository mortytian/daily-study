import smtplib
from email.mime.text import MIMEText
from email.header import Header
from email.mime.multipart import MIMEMultipart
 
# 第三方 SMTP 服务
mail_host="smtp.qq.com"  #设置服务器
mail_user="xxxx@qq.com"    #用户名
mail_pass="xxxx"   #口令 
 
 
sender = 'xxx@qq.com'
receivers = ['xxxx@163.com']  # 接收邮件，可设置为你的QQ邮箱或者其他邮箱
 
message = MIMEMultipart()
message['From'] = Header("test", 'utf-8')
message['To'] =  Header("{}".format(receivers[0]), 'utf-8')
subject = 'Python SMTP 邮件测试'
message['Subject'] = Header(subject, 'utf-8')
 
message.attach(MIMEText('test 邮件发送测试……', 'plain', 'utf-8'))

# att1 = MIMEText(open('tianye.jpg', 'rb').read(), 'base64', 'utf-8')
# att1["Content-Type"] = 'application/octet-stream'
# # 这里的filename可以任意写，写什么名字，邮件中显示什么名字
# att1["Content-Disposition"] = 'attachment; filename="tianye.jpg"'
# message.attach(att1)

try:
    smtpObj = smtplib.SMTP() 
    smtpObj.connect(mail_host, 25)    # 25 为 SMTP 端口号
    smtpObj.login(mail_user,mail_pass)
    smtpObj.sendmail(sender, receivers, message.as_string())
    print ("邮件发送成功")
except smtplib.SMTPException:
    print ("Error: 无法发送邮件")