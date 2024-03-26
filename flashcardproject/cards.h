#ifndef CARDS_H
#define CARDS_H

#include <string>
#include <vector>
#include <iostream>
#include <QDateTime>

struct Card
{
    std::string key;
    std::string value;

    size_t daysUntilNext = 0;

    QDateTime dateAdded;

    size_t getDaysUntilNext() const;
    void addDaysUntilNext(size_t days);

    void setDateAdded(QDateTime date);

    // Implement a date class in order to make a date created variable
};

class Deck
{
public:
    Deck(const std::string name, std::vector<Card>& initialCards);

    void addCard(const std::string& key, const std::string& value);
    void removeCard(size_t index);
    void removeCard(const std::string& keyOrValue);

    void search(size_t index);
    void search(const std::string& keyOrValue);

private:
    std::string name;

    std::vector<Card> cards;
};

void createNewDeck(std::string name);

#endif // CARDS_H
