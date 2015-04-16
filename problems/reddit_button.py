"""
The 1st of April brought the Button to Reddit - if you've not heard of it, read the blog post on it here. The value of the countdown at the instant that someone presses the button determines the flair that they obtain on the subreddit. For example, if the counter is at 53.04 seconds, then I would obtain a 53 flair, as that is the number of seconds (rounded down). After a person presses the button, the countdown resets from 60.00 seconds. Today's challenge is simple - you'll be given a list of users in no particular order, and told at which time each user pressed the button; you'll need to work out which flair each user gets.
You can assume that the countdown never runs to zero for this challenge, and that no two users will press the button at exactly the same moment.
At a time of 0.00 seconds, the countdown starts from 60.00 seconds, counting down. So at a time of 27.34 seconds, the countdown will read 32.66 assuming no-one has pressed the button; all times are given in this format, with a number of seconds and a number of hundredths of a second. The list of users will be given in this format:
7
UserA: 41.04
UserB: 7.06
UserC: 20.63
UserD: 54.28
UserE: 12.59
UserF: 31.17
UserG: 63.04
The number on the first line is the number of users in the input string; after that, the username of each user, followed by the number of seconds since the beginning of the countdown.
Output Description

Output the numerical flair that each user will receive, in the order in which the users click the buttons - for example:
UserB: 52
UserE: 54
UserC: 51
UserF: 49
UserA: 50
UserD: 46
UserG: 51
UserG clicked the button last, and so they are printed last - when they clicked the button, the countdown was at 51.24, so they receive the 51 flair.
"""
def main():
  pass

if __name__ == "__main__":
  main()
