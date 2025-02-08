#include "pubsub_cpp/subscriber.h"

#include <cstdio>

int main()
{
    Subscriber sub_test("test");
    Subscriber sub_empty("empty");
    Subscriber sub_all("*");
    while (true) {
        if (sub_test.recv()) {
            printf("test recv: %s\n", sub_test.get_string());
        }
        if (sub_empty.recv()) {
            printf("empty recv\n");
        }
        if (sub_all.recv()) {
            printf("all (%s): %s\n", sub_all.get_recv_topic(), sub_all.get_string());
        }
    }
    return 0;
}
