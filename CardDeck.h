//
//  CardDeck.hpp
//  CS331_HW05
//
//  Created by yongqiang chen on 11/24/19.
//  Copyright © 2019 yongqiang chen. All rights reserved.
//

#ifndef CardDeck_h_
#define CardDeck_h_

#include "CardHand.h"

class CardDeck{
    int deck [52];
    int remain;

public:
    CardDeck();
    CardHand deal (int size);
};

#endif /* CardDeck_hpp */
