import discord
from discord.ext import commands
from requests import get
from dotenv import dotenv_values
import json

config = dotenv_values(".env")
prefix = config['BOT_MEME_PREFIX']
bot = discord.Client()

@bot.event
async def on_ready():

    await bot.change_presence(
        status=discord.Status.do_not_disturb,
        activity=discord.Activity(
            type=discord.ActivityType.watching,
            name=f"{prefix}help"
        )
    )

    print(f'Logged on as {bot.user}!')

@bot.event
async def on_message(message):

    if message.author == bot.user or message.author.bot:
        return

    if message.content.startswith(f"{prefix}meme"):
        # await message.channel.send("Example Meme")  # Debug message
        content = get("https://meme-api.herokuapp.com/gimme").text
    data = json.loads(content,)
    meme = discord.Embed(title=f"{data['title']}", Color=discord.Color.random(
    )).set_image(url=f"{data['url']}")
    await message.reply(embed=meme)

bot.run(config['BOT_MEME_TOKEN'])