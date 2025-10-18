#include "PaymentSystem.h"
#include <iostream>
#include <sstream>
#include <cassert>

using namespace std;

void testParsePaymentMode() {
    PaymentSystem ps;

    assert(ps.parsePaymentMode("PayPal") == PaymentSystem::PaymentMode::PayPal);
    assert(ps.parsePaymentMode("paypal") == PaymentSystem::PaymentMode::PayPal);
    assert(ps.parsePaymentMode("GOOGLEPAY") == PaymentSystem::PaymentMode::GooglePay);
    assert(ps.parsePaymentMode("creditcard") == PaymentSystem::PaymentMode::CreditCard);
    assert(ps.parsePaymentMode("invalid") == PaymentSystem::PaymentMode::Unknown);
    assert(ps.parsePaymentMode("") == PaymentSystem::PaymentMode::Unknown);
}



int main() {
    testParsePaymentMode();
    return 0;
}
