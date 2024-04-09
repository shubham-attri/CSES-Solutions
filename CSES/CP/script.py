import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders


# Your email credentials
sender_email = "stanzin22509@iiitd.ac.in"
sender_password = "slehm10cr7"

to_email = "shubham21354@iiitd.ac.in"

# Email content
subject = "AP Endsem"

# Setup the MIME
message = MIMEMultipart()
message['From'] = sender_email
message['To'] = to_email
message['Subject'] = subject


# Example usage
attachment_path = "/Users/attri/Desktop/Attri/Resume/InternPrep/CSES/CP/script.py"

# Attach the file
attachment = open(attachment_path, 'rb')
base = MIMEBase('application', 'octet-stream')
base.set_payload((attachment).read())
encoders.encode_base64(base)
base.add_header('Content-Disposition', "attachment; filename= %s" % "AP ensem")
message.attach(base)

# Connect to the SMTP server
server = smtplib.SMTP('smtp.gmail.com', 587)
server.starttls()

# Login to your email account
server.login(sender_email, sender_password)

# Send the email
server.sendmail(sender_email, to_email, message.as_string())

# Quit the server
server.quit()


