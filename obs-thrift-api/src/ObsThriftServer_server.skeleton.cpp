// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "ObsThriftServer.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

class ObsThriftServerHandler : virtual public ObsThriftServerIf {
 public:
  ObsThriftServerHandler() {
    // Your initialization goes here
  }

  /**
   * A method definition looks like C code. It has a return type, arguments,
   * and optionally a list of exceptions that it may throw. Note that argument
   * lists and exception lists are specified using the exact same syntax as
   * field lists in struct or exception definitions.
   * 
   * @param path
   * @param layer
   * @param sourceName
   */
  void launchVideo(const std::string& path, const int32_t layer, const std::string& sourceName) {
    // Your implementation goes here
    printf("launchVideo\n");
  }

  void removeSource(const std::string& sourceName) {
    // Your implementation goes here
    printf("removeSource\n");
  }

  void muteSource(const std::string& sourceName) {
    // Your implementation goes here
    printf("muteSource\n");
  }

  void unmuteSource(const std::string& sourceName) {
    // Your implementation goes here
    printf("unmuteSource\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<ObsThriftServerHandler> handler(new ObsThriftServerHandler());
  ::std::shared_ptr<TProcessor> processor(new ObsThriftServerProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

