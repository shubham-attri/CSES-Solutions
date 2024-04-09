import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders

def send_sponsorship_email(to_email, company_name, attachment_path,instagram_link,facebook_link):
    # Your email credentials
    sender_email = "stanzin22509@iiitd.ac.in"
    sender_password = "slehm10cr7"

    # Email content
    subject = "Invitation for collaboration with IIIT Delhi || Odyssey 24"
    # body = f""" <html> Dear <b>{company_name}</b>,\n\nWe hope this email finds you well. Our college is hosting a cultural fest in January 2024 and we are reaching out to companies for sponsorship. We believe your company's values align with our event, and we would be honored to have you as a sponsor.\n\nAttached to this email, you will find detailed information about the sponsorship packages and benefits.\n\nThank you for considering our proposal. We look forward to the possibility of partnering with {company_name} for this exciting event.\n\nBest regards,\nYour Name\nYour Title\nYour College"""
    body = f"""<html>
    <body>
        <p>Respected Sir/Ma'am<br>Greetings from IIIT Delhi!</p>
        <p>We are thrilled to introduce Odyssey 24, the Annual Cultural Fest hosted by IIIT Delhi, a leading institute in the field of information technology established by the Government of Delhi in 2008. Odyssey 24 is slated to grace the stage on the 19th and 20th of January 2024, uniting students, artists, and cultural enthusiasts from across India. </p>
        <p>Odyssey 24 is a two-day extravaganza that promises a vibrant tapestry of diverse cultures, featuring mesmerizing performances and captivating events. The festival encompasses an extensive array of activities, including dance, music, art, fashion, and theater, among others. Moreover, the event will showcase multiple singer performances and comedy shows, which have consistently been crowd favorites. Over the years, Odyssey has garnered an annual footfall of over 45,000 students, encompassing not only college students from across India but also people from all walks of life. We have had the privilege of collaborating with renowned artists such as <strong>Salim Sulaiman, Jubin Nautiyal, Gajendra Verma, Sam Altman, Rahul Subramaniam, and Zakir Khan.</strong></p>
        <p>We extend a warm invitation to <strong>{company_name}</strong> to join hands with us for Odyssey'24, a cultural celebration that stands as a beacon of Delhi's cultural heritage. In the previous edition, our fest drew nearly <strong>45,000</strong> attendees from various corners of India, offering an exceptional marketing and business development opportunity. For your convenience, we have attached our fest proposal for your perusal. We believe that your association with Odyssey 24 will not only enhance our fest's grandeur but also provide your company with significant visibility and a unique platform to engage with a diverse and dynamic audience.</p>
        <p>We look forward to collaborating with <strong>{company_name}</strong> and establishing a fruitful association.</p>
        <p>Best Regards,<br>Janesh Kapoor<br>Sponsorship Head || Odyssey 24<br>IIIT Delhi<br>(Ph 9818067608)<br><a href="{facebook_link}">Facebook</a> || <a href="{instagram_link}">Instagram</a></p>

    </body>
    </html>
    """

    # Setup the MIME
    message = MIMEMultipart()
    message['From'] = sender_email
    message['To'] = to_email
    message['Subject'] = subject

    # Attach body text
    message.attach(MIMEText(body, 'html'))

    # Attach the file
    attachment = open(attachment_path, 'rb')
    base = MIMEBase('application', 'octet-stream')
    base.set_payload((attachment).read())
    encoders.encode_base64(base)
    base.add_header('Content-Disposition', "attachment; filename= %s" % "Odyssey 24 Brochure.pdf")
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

# Example usage
companies = {
    'shubham21354@iiitd.ac.in': 'Attri',
}

attachment_path = '/Users/attri/Desktop/Attri/Resume/InternPrep/CSES/CP/secret sport.cpp'
instagram_link = 'https://www.instagram.com/iiitdodyssey/'
facebook_link = 'https://www.facebook.com/odyssey.iiitd/'

for email, name in companies.items():
    send_sponsorship_email(email, name, attachment_path,instagram_link,facebook_link)
