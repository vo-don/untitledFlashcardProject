#include <cards.h>
#include <string>
#include <algorithm>
#include <QDateTime>
#include <cstdlib> // For strtoul

using namespace std;

string DEFAULT_TIME = "0000-00-00";

Deck::Deck() {}

void Deck::addCard(const std::string& key, const std::string& value)
{
    Card newCard = {key, value, cards.size(), QDateTime::currentDateTime()};
    cards.push_back(newCard);
}

void Deck::removeCard(size_t index)
{
    if (cards.size() < index)
        cards.erase(cards.begin() + index); // simple way to find card by index number
}

void Deck::removeCard(const std::string& keyOrValue)
{
    size_t keyOrValueSizeT = strtoul(keyOrValue.c_str(), nullptr, 10);

    auto it = find_if(cards.begin(), cards.end(), [&] (const Card& card)
    {
        return card.daysUntilNext == keyOrValueSizeT || card.value == keyOrValue; // lambda function to find card by value
    });

    if (it != cards.end()) // if found
    {
        cout << "Card found!\n\nKey : " << it->key << "\nValue : " << it->value << endl;
    }
    else // if iterator reaches the end, meaning the card was not found
        cout << "Card does not exist in this deck!" << endl;
}

void Card::addDaysUntilNext(const size_t days)
{
    daysUntilNext += days;
}

void Card::setDateAdded(const QDateTime date)
{
    dateAdded = date;
}

void search(size_t index);
void search(const std::string& keyOrValue);


