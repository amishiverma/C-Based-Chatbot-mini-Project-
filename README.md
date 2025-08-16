# C-Based-Chatbot-mini-Project-
A simple C-based console chatbot that simulates customer service FAQs using string matching.

---

## Overview
This project is a **C-based console chatbot** that responds to common customer queries, including shipping, returns, cancellations, payments, tracking packages, and account settings. It demonstrates **string handling, case-insensitive comparisons, and interactive console programming** in C.

---

## Features
- Responds to greetings like `"Hi"`  
- Handles queries about:
  - Shipping options and charges  
  - Returns, defective or incorrect products  
  - Order cancellations  
  - Payment methods  
  - Package tracking  
  - Return pickup issues  
  - Shipment delays  
  - Changing account settings  
- Case-insensitive input matching (`HI`, `hi`, `Hi`)  
- Flexible string matching using `strstr()` for keywords  
- Runs entirely in the terminal/console  

---

## How to Run

### 1. Clone the Repository
```bash
git clone https://github.com/amishiverma/C-Based-Chatbot-mini-Project.git
cd C-Based-Chatbot-mini-Project
```
---

## Compile
gcc chatbot.c -o chatbot

---

## Run
./chatbot       # On Windows, use: chatbot.exe

## Usage

Welcome to the customer service portal
How can I help you:
User: Hi
Bot: Hi dear customer
User: I have a doubt.
Bot: I understand. Please feel free to share your doubt, and I'll do my best to assist you.
User: What are the shipping options?
Bot: same day delivery=119 rupees
     one day delivery=100 rupee
     standard delivery=40 rupee
User: How can I track my package?
Bot: step1.go to your order
     step2.click on the order you want to track
     step3.select track package next to your order
     step4.select all updates to view your order


---

