#include <pistache/endpoint.h>

using namespace Pistache;

struct HelloHandler : public Http::Handler {
    void onRequest(const Http::Request& req, Http::ResponseWriter response) {
        response.send(Http::Code::Ok, "You are connected to bitwyre technologies server");
    }
};

int main() {
    Http::listenAndServe<HelloHandler>("*:9080");
}
