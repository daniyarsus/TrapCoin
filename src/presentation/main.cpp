#include <pistache/endpoint.h>
#include <pistache/router.h>

void handleHello(const Pistache::Rest::Request&, Pistache::Http::ResponseWriter writer) {
    writer.send(Pistache::Http::Code::Ok, "Hello, World!");
}

void handleBye(const Pistache::Rest::Request&, Pistache::Http::ResponseWriter writer) {
    writer.send(Pistache::Http::Code::Ok, "Bye!");
}

int main() {
    const Pistache::Address address(Pistache::Ipv4::any(), Pistache::Port(8000));
    Pistache::Http::Endpoint server(address);

    Pistache::Rest::Router router;

    Pistache::Rest::Routes::Get(
        router,
        "/hello",
        Pistache::Rest::Routes::bind(handleHello)
    );
    Pistache::Rest::Routes::Get(
        router,
        "/bye",
        Pistache::Rest::Routes::bind(handleBye)
    );

    const auto options = Pistache::Http::Endpoint::options().threads(1);
    server.init(options);
    server.setHandler(router.handler());
    server.serve();

    return 0;
}
