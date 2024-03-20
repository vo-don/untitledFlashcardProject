#ifndef CARDS_H
#define CARDS_H

#include <string>
#include <vector>
#include <iostream>

struct Card;

class Deck
{
public:
    Deck();

    void addCard(const std::string& key, const std::string& value);
    void removeCard(size_t index);
    void removeCard(const std::string& keyOrValue);
    void addDaysUntilNext(size_t days);

    void search(size_t index);
    void search(const std::string& keyOrValue);

private:
    std::vector<Card> cards;
};

#endif // CARDS_H
