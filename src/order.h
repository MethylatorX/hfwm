#ifndef ORDER_H
#define ORDER_H

enum order {
	ORDER_PREV,
	ORDER_NEXT
};

enum order
order_lookup(const char *s);

#endif

