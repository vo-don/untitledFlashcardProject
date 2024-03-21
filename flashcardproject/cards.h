#ifndef CARDS_H
#define CARDS_H

#include <string>
#include <vector>
#include <iostream>
#include <Qt>

struct Card
{
    std::string key;
    std::string value;

    size_t daysUntilNext = 0;

    Qt::DateFormat dateAdded;

    size_t getDaysUntilNext() const;
    void addDaysUntilNext(size_t days);

    void setDateAdded(Qt::DateFormat date);

    // Implement a date class in order to make a date created variable
};

class Deck
{
public:
    Deck();

    void addCard(const std::string& key, const std::string& value);
    void removeCard(size_t index);
    void removeCard(const std::string& keyOrValue);

    void search(size_t index);
    void search(const std::string& keyOrValue);

private:
    std::vector<Card> cards;
};

#endif // CARDS_H
