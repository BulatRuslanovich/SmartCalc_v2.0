//
// Created by bulatruslanovich on 22/02/2024.
//

#ifndef SMARTCALC_IOBSERVERDEPOSIT_H
#define SMARTCALC_IOBSERVERDEPOSIT_H

#include "IObserver.h"

namespace s21 {
class IObserverDepositUpdate : public IObserverUpdate {
   public:
    virual ~IObserverDepositUpdate() = default;
}

class IObserverDepositError : public IObserverError {
   public:
    virual ~IObserverDepositError() = default;
}
#endif  // SMARTCALC_IOBSERVERDEPOSIT_H