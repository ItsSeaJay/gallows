# Gallows
An implementation of the pen-and-paper game 'Hangman' in C++

![Alt text](/gallows-screenshot.png)

# Notice
Gallows was developed using the Microsoft Visual Studio: Community Edition (2017) IDE, for the associated compiler. You may have to do some leg work when it comes to compiling the game with other tools, such as The GNU Compiler Collection.

# Installation
Clone the repository, or download the zip file and extract the compiled game to a suitable location to your computer. Ensure that the 'Data' folder is directly adjacent to the executable file and run it. If you want to be able to play **Gallows** from any location within the command prompt - or through the run command - be sure to add it to your system path.

# How to Play
**Gallows** is best played directly from the command prompt in Windows.

The game will give you a random word, showing only the number of letters it contains. Your challenge is to guess that word one character at a time. Guess incorrectly, and you tiptoe ever closer to your demise. You cannot guess the same letter multiple times, and once a letter is guessed correctly, all instances of that letter will be shown.

Be warned that you will guess a letter as soon as you press the key. There's no going back...

# License
**Gallows** is released under the MIT Open Source License, as outlined in the included LICENSE file.

# Planned Features
The following features may be considered for a future version of the game:
- Music/Sound Effects
- Dictionary file validation
- The ability to guess a whole word, not just a letter
- Command line arguments to pick a list of words outside of the default

# Mod Support
**Gallows**, by default, ships with a list of around one hundred of the most commonly used English words. Naturally, this can be patronisingly easy for some players, so feel free to replace them with whatever obscure, invented, rude, or copyrighted words you can think of!

The game's list of guessable words can be found in `Data/dictionary.txt`. Each word is stored on its own line, containing only alphabetical characters, and no spaces. Here's an example:

```
insert
words
here
```

Blank lines of text are not counted as words, and the file can be theoretically as long or as short as you like, provided that you can fit it on your computer. This dictionary file has only been tested with the ASCII character set. Words containing non-roman characters may exibit odd behaviour.
