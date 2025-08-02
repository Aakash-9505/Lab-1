from googletrans import Translator

# Read sentences from file
with open("1-a.txt", "r", encoding="utf-8") as file:
    sentences = [line.strip() for line in file.readlines()]  # Strip extra spaces and newlines

translator = Translator()
# Translate sentences
translated_sentences = [translator.translate(sentence, src='en', dest='te').text for sentence in sentences]

# Save to output file with format "sen1 ++$++ sen2"
with open("1.txt", "a", encoding="utf-8") as file:
    for original, translated in zip(sentences, translated_sentences):
        file.write(original + " ++$++ " + translated + "\n")

print("Translation complete.")
