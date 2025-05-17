#bot creation in telegram
#search Botfather in telegram
#new bot creation -  /newbot
     # give a new name
     #copy the api
#create a python code and run it below same
#then again back into a botfather then click a link for your bot link   - https://t.me/telebotard1_bot

import telepot
import time

def telebotard(msg):
    content_type, chat_type, chat_id = telepot.glance(msg)

    # Get user's full name safely
    first_name = msg['from'].get('first_name', '')
    last_name = msg['from'].get('last_name', '')
    userName = first_name + " " + last_name

    if content_type == 'text':
        command = msg['text']
        print(f"Got command: {command} from {userName}")

        if 'hello' in command.lower():
            bot.sendMessage(chat_id, "Hello! This is TeleBot. How can I help you?")

# Initialize the bot with your token
bot = telepot.Bot('7796557286:AAG9arIEMkopwgF_R5UF0vZCmgTJdCb8YGE')

# Start listening for messages
bot.message_loop(telebotard)

# Keep the program running
while True:
    time.sleep(20)
