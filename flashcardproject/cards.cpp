#include <cards.h>
#include <string>
#include <algorithm>

using namespace std;

struct Card
{
    std::string key;
    std::string value;

    size_t index;

    size_t daysUntilNext;

    // Implement a date class in order to make a date created variable
};

Deck::Deck() {}

void Deck::addCard(const std::string& key, const std::string& value)
{
    Card newCard = {key, value, cards.size(), 0};
    cards.push_back(newCard);
}

void Deck::removeCard(size_t index)
{
    if (cards.size() < index)
        cards.erase(cards.begin() + index); // simple way to find card by index number
}

void Deck::removeCard(const std::string& keyOrValue)
{
    auto it = find_if(cards.begin(), cards.end(), [&] (const Card& card) {
        return card.key == keyOrValue || card.value == keyOrValue; // lambda function to find card by value
    });

    if (it != cards.end()) // if found
    {
        cout << "Card found!\n\nKey : " << it->key << "\nValue : " << it->value << endl;
    }
    else // if iterator reaches the end, meaning the card was not found
        cout << "Card does not exist in this deck!" << endl;
}
void addDaysUntilNext(size_t days);

void search(size_t index);
void search(const std::string& keyOrValue);

};
