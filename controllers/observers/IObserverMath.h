//
// Created by bulatruslanovich on 22/02/2024.
//

#ifndef SMARTCALC_IOBSERVERMATH_H
#define SMARTCALC_IOBSERVERMATH_H

#include "IObserver.h"

namespace s21 {
class IObserverMathUpdate : public IObserverUpdate {
public:
    virual ~IObserverMathUpdate() = default;
}

class IObserverMathError : public IObserverError {
public:
    virual ~IObserverMathError() = default;
}

#endif  // SMARTCALC_IOBSERVERMATH_H