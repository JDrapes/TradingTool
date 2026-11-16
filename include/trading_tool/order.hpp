#ifndef ORDER_HPP
#define ORDER_HPP

// Namespace
namespace trading_tool::order{

    // Enumeration class to hold side
    enum class Side {
        Buy,
        Sell
    };

    using OrderId = int;
    using Price = int; // Integer ticks
    using Quantity = int; // Remaining units

    // A struct to represent the order for the limit order
    struct Order {

        OrderId orderId = 0;

        // Side - Whether the order belongs on the bid side (Buy) or the ask side (Sell)
        Side side = Side::Buy;

        Price price = 0;

        // How much of the order is still available
        Quantity quantity = 0;

    };

} // namespace trading_tool::order

#endif // ORDER_HPP