#Python Easy1
print("What is your name, age, and username?")
NameInput = input("Name:")
AgeInput = input("Age:")
UserNameInput = input("Username:")
print('Your name is {}, you are {} years old, and your username is {}.'.format(NameInput, AgeInput, UserNameInput))
f = open('pyRedditBioList', 'w')
f.write('{} {} {}'.format(NameInput, AgeInput, UserNameInput))