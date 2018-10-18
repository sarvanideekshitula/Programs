# tokenizing - word tokenizers... sentence tokenizers
# lexicon and corporas
# corpora - body of text ex: medical journals, presidential speeches, anything in english language
# lexicon - words and their meanings

# investor-speak.... regular english-speak
# investor-speak 'bull' = someone who is positive about the market
# english-speak 'bull' = scary animal you dont want running towards you

from nltk.tokenize import sent_tokenize, word_tokenize

example_text = "Hello Mr. Srivatsav Gunisetty, how are you doing today? The weather is great and python is awesome. The sky is pinkish-blue. You should not eat cardboard."

print(sent_tokenize(example_text))

print(word_tokenize(example_text))
