Navi Bot S.I.S.T.
Navi Bot S.I.S.T. is a smart assistant system developed for Sathyabama Institute of Science and Technology. It integrates a web-based chatbot, a simple map-based navigation system, and a QR code display using an ESP32 with an OLED screen.

📌 Features
🤖 Chatbot: A web-based assistant that answers frequently asked questions related to courses, fees, departments, and general college inquiries.

🗺️ Campus Map: A clean, clickable HTML/CSS map that helps users visually locate and understand the layout of the college buildings.

📱 QR Code Display: An ESP32-based system that displays a scannable QR code on an OLED screen, linking directly to the chatbot and map website for quick mobile access.

🛠️ Technologies Used
Frontend:

HTML & CSS (for chatbot UI and map)

Hardware:

ESP32 WROOM-32 (C Type)

OLED Display (SSD1306)

Arduino IDE (for programming ESP32)

QR Code:

Static link encoded as a QR and displayed using a library like U8g2 or Adafruit_SSD1306

🔧 Setup Instructions
Web Interface
Clone or download the project files.

Open index.html in any modern web browser.

The chatbot and map will be accessible directly.

ESP32 QR Code Display
Connect the OLED display to the ESP32.

Open the Arduino IDE and install the required libraries:

Adafruit GFX

Adafruit SSD1306

qrcode library (like qrcode.h)

Upload the provided .ino file to your ESP32.

The OLED screen will display a scannable QR code linking to your website.

📷 Preview
(Add screenshots or photos of:)

Chatbot UI

Campus Map UI

QR Code on OLED display

🎯 Purpose
This project helps students, visitors, and staff quickly access campus information and directions without needing to ask around. The QR system allows quick access through smartphones, making the system portable and efficient.

👨‍💻 Author
Kevin Alex A
BE CSE Student | Sathyabama Institute of Science and Technology
