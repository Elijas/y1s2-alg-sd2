#include <iostream>
#include <cassert>

#include "deck.h"

int main() {
    //////////////////////////////////////////
    // TEST: Nodes can hold data and be linked
    //////////////////////////////////////////
    //-

    Node a{.data=1};
    Node b{.data=2};
    a.next = &b;

    assert(a.next->data == 2);

    //////////////////////////////////////////
    // TEST: Deck is initialized empty
    //////////////////////////////////////////
    //-

    Deck deck;

    assert(deck.isEmpty());

    //////////////////////////////////////////
    // TEST:
    //////////////////////////////////////////


}
