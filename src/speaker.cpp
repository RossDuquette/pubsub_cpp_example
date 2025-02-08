#include "pubsub_cpp/publisher.h"

#include <cstdio>
#include <thread>

int main()
{
    Publisher pub_test("test");
    Publisher pub_empty("empty");
    for (int i = 0; i < 10; i++) {
        char msg[32];
        sprintf(msg, "From speaker test: %d", i);
        pub_test.send_string(msg);
        pub_empty.send_empty();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return 0;
}
