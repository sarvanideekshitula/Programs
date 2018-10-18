# I was taking a ride in the car.
# I was riding in the car.

from nltk.stem import PorterStemmer
from nltk.tokenize import word_tokenize

ps = PorterStemmer()
example_words = ["python", "pythoner", "pythoning", "pythoned", "pythonly"]

# for w in example_words:
#    print(ps.stem(w))

example_sentence = "It is very important to be pythonly while you are pythoning with Python. All pythoners have pythoned poorly at least once."

words = word_tokenize(example_sentence)

for w in words:
    print(ps.stem(w))
