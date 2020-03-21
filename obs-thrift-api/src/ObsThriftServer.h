/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ObsThriftServer_H
#define ObsThriftServer_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "obs_thrift_server_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

/**
 * Ahh, now onto the cool part, defining a service. Services just need a name
 * and can optionally inherit from another service using the extends keyword.
 */
class ObsThriftServerIf {
 public:
  virtual ~ObsThriftServerIf() {}

  /**
   * A method definition looks like C code. It has a return type, arguments,
   * and optionally a list of exceptions that it may throw. Note that argument
   * lists and exception lists are specified using the exact same syntax as
   * field lists in struct or exception definitions.
   * 
   * @param path
   * @param layer
   * @param sceneName
   * @param sourceName
   * @param dimensions
   */
  virtual void launchVideo(const std::string& path, const int32_t layer, const std::string& sceneName, const std::string& sourceName, const SourceDimensions& dimensions) = 0;
  virtual void removeSource(const std::string& sceneName, const std::string& sourceName) = 0;
  virtual void muteSource(const std::string& sourceName) = 0;
  virtual void unmuteSource(const std::string& sourceName) = 0;
};

class ObsThriftServerIfFactory {
 public:
  typedef ObsThriftServerIf Handler;

  virtual ~ObsThriftServerIfFactory() {}

  virtual ObsThriftServerIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ObsThriftServerIf* /* handler */) = 0;
};

class ObsThriftServerIfSingletonFactory : virtual public ObsThriftServerIfFactory {
 public:
  ObsThriftServerIfSingletonFactory(const ::std::shared_ptr<ObsThriftServerIf>& iface) : iface_(iface) {}
  virtual ~ObsThriftServerIfSingletonFactory() {}

  virtual ObsThriftServerIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ObsThriftServerIf* /* handler */) {}

 protected:
  ::std::shared_ptr<ObsThriftServerIf> iface_;
};

class ObsThriftServerNull : virtual public ObsThriftServerIf {
 public:
  virtual ~ObsThriftServerNull() {}
  void launchVideo(const std::string& /* path */, const int32_t /* layer */, const std::string& /* sceneName */, const std::string& /* sourceName */, const SourceDimensions& /* dimensions */) {
    return;
  }
  void removeSource(const std::string& /* sceneName */, const std::string& /* sourceName */) {
    return;
  }
  void muteSource(const std::string& /* sourceName */) {
    return;
  }
  void unmuteSource(const std::string& /* sourceName */) {
    return;
  }
};

typedef struct _ObsThriftServer_launchVideo_args__isset {
  _ObsThriftServer_launchVideo_args__isset() : path(false), layer(false), sceneName(false), sourceName(false), dimensions(false) {}
  bool path :1;
  bool layer :1;
  bool sceneName :1;
  bool sourceName :1;
  bool dimensions :1;
} _ObsThriftServer_launchVideo_args__isset;

class ObsThriftServer_launchVideo_args {
 public:

  ObsThriftServer_launchVideo_args(const ObsThriftServer_launchVideo_args&);
  ObsThriftServer_launchVideo_args& operator=(const ObsThriftServer_launchVideo_args&);
  ObsThriftServer_launchVideo_args() : path(), layer(0), sceneName(), sourceName() {
  }

  virtual ~ObsThriftServer_launchVideo_args() noexcept;
  std::string path;
  int32_t layer;
  std::string sceneName;
  std::string sourceName;
  SourceDimensions dimensions;

  _ObsThriftServer_launchVideo_args__isset __isset;

  void __set_path(const std::string& val);

  void __set_layer(const int32_t val);

  void __set_sceneName(const std::string& val);

  void __set_sourceName(const std::string& val);

  void __set_dimensions(const SourceDimensions& val);

  bool operator == (const ObsThriftServer_launchVideo_args & rhs) const
  {
    if (!(path == rhs.path))
      return false;
    if (!(layer == rhs.layer))
      return false;
    if (!(sceneName == rhs.sceneName))
      return false;
    if (!(sourceName == rhs.sourceName))
      return false;
    if (!(dimensions == rhs.dimensions))
      return false;
    return true;
  }
  bool operator != (const ObsThriftServer_launchVideo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ObsThriftServer_launchVideo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_launchVideo_pargs {
 public:


  virtual ~ObsThriftServer_launchVideo_pargs() noexcept;
  const std::string* path;
  const int32_t* layer;
  const std::string* sceneName;
  const std::string* sourceName;
  const SourceDimensions* dimensions;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_launchVideo_result {
 public:

  ObsThriftServer_launchVideo_result(const ObsThriftServer_launchVideo_result&);
  ObsThriftServer_launchVideo_result& operator=(const ObsThriftServer_launchVideo_result&);
  ObsThriftServer_launchVideo_result() {
  }

  virtual ~ObsThriftServer_launchVideo_result() noexcept;

  bool operator == (const ObsThriftServer_launchVideo_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ObsThriftServer_launchVideo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ObsThriftServer_launchVideo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_launchVideo_presult {
 public:


  virtual ~ObsThriftServer_launchVideo_presult() noexcept;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ObsThriftServer_removeSource_args__isset {
  _ObsThriftServer_removeSource_args__isset() : sceneName(false), sourceName(false) {}
  bool sceneName :1;
  bool sourceName :1;
} _ObsThriftServer_removeSource_args__isset;

class ObsThriftServer_removeSource_args {
 public:

  ObsThriftServer_removeSource_args(const ObsThriftServer_removeSource_args&);
  ObsThriftServer_removeSource_args& operator=(const ObsThriftServer_removeSource_args&);
  ObsThriftServer_removeSource_args() : sceneName(), sourceName() {
  }

  virtual ~ObsThriftServer_removeSource_args() noexcept;
  std::string sceneName;
  std::string sourceName;

  _ObsThriftServer_removeSource_args__isset __isset;

  void __set_sceneName(const std::string& val);

  void __set_sourceName(const std::string& val);

  bool operator == (const ObsThriftServer_removeSource_args & rhs) const
  {
    if (!(sceneName == rhs.sceneName))
      return false;
    if (!(sourceName == rhs.sourceName))
      return false;
    return true;
  }
  bool operator != (const ObsThriftServer_removeSource_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ObsThriftServer_removeSource_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_removeSource_pargs {
 public:


  virtual ~ObsThriftServer_removeSource_pargs() noexcept;
  const std::string* sceneName;
  const std::string* sourceName;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_removeSource_result {
 public:

  ObsThriftServer_removeSource_result(const ObsThriftServer_removeSource_result&);
  ObsThriftServer_removeSource_result& operator=(const ObsThriftServer_removeSource_result&);
  ObsThriftServer_removeSource_result() {
  }

  virtual ~ObsThriftServer_removeSource_result() noexcept;

  bool operator == (const ObsThriftServer_removeSource_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ObsThriftServer_removeSource_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ObsThriftServer_removeSource_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_removeSource_presult {
 public:


  virtual ~ObsThriftServer_removeSource_presult() noexcept;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ObsThriftServer_muteSource_args__isset {
  _ObsThriftServer_muteSource_args__isset() : sourceName(false) {}
  bool sourceName :1;
} _ObsThriftServer_muteSource_args__isset;

class ObsThriftServer_muteSource_args {
 public:

  ObsThriftServer_muteSource_args(const ObsThriftServer_muteSource_args&);
  ObsThriftServer_muteSource_args& operator=(const ObsThriftServer_muteSource_args&);
  ObsThriftServer_muteSource_args() : sourceName() {
  }

  virtual ~ObsThriftServer_muteSource_args() noexcept;
  std::string sourceName;

  _ObsThriftServer_muteSource_args__isset __isset;

  void __set_sourceName(const std::string& val);

  bool operator == (const ObsThriftServer_muteSource_args & rhs) const
  {
    if (!(sourceName == rhs.sourceName))
      return false;
    return true;
  }
  bool operator != (const ObsThriftServer_muteSource_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ObsThriftServer_muteSource_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_muteSource_pargs {
 public:


  virtual ~ObsThriftServer_muteSource_pargs() noexcept;
  const std::string* sourceName;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_muteSource_result {
 public:

  ObsThriftServer_muteSource_result(const ObsThriftServer_muteSource_result&);
  ObsThriftServer_muteSource_result& operator=(const ObsThriftServer_muteSource_result&);
  ObsThriftServer_muteSource_result() {
  }

  virtual ~ObsThriftServer_muteSource_result() noexcept;

  bool operator == (const ObsThriftServer_muteSource_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ObsThriftServer_muteSource_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ObsThriftServer_muteSource_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_muteSource_presult {
 public:


  virtual ~ObsThriftServer_muteSource_presult() noexcept;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ObsThriftServer_unmuteSource_args__isset {
  _ObsThriftServer_unmuteSource_args__isset() : sourceName(false) {}
  bool sourceName :1;
} _ObsThriftServer_unmuteSource_args__isset;

class ObsThriftServer_unmuteSource_args {
 public:

  ObsThriftServer_unmuteSource_args(const ObsThriftServer_unmuteSource_args&);
  ObsThriftServer_unmuteSource_args& operator=(const ObsThriftServer_unmuteSource_args&);
  ObsThriftServer_unmuteSource_args() : sourceName() {
  }

  virtual ~ObsThriftServer_unmuteSource_args() noexcept;
  std::string sourceName;

  _ObsThriftServer_unmuteSource_args__isset __isset;

  void __set_sourceName(const std::string& val);

  bool operator == (const ObsThriftServer_unmuteSource_args & rhs) const
  {
    if (!(sourceName == rhs.sourceName))
      return false;
    return true;
  }
  bool operator != (const ObsThriftServer_unmuteSource_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ObsThriftServer_unmuteSource_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_unmuteSource_pargs {
 public:


  virtual ~ObsThriftServer_unmuteSource_pargs() noexcept;
  const std::string* sourceName;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_unmuteSource_result {
 public:

  ObsThriftServer_unmuteSource_result(const ObsThriftServer_unmuteSource_result&);
  ObsThriftServer_unmuteSource_result& operator=(const ObsThriftServer_unmuteSource_result&);
  ObsThriftServer_unmuteSource_result() {
  }

  virtual ~ObsThriftServer_unmuteSource_result() noexcept;

  bool operator == (const ObsThriftServer_unmuteSource_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ObsThriftServer_unmuteSource_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ObsThriftServer_unmuteSource_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ObsThriftServer_unmuteSource_presult {
 public:


  virtual ~ObsThriftServer_unmuteSource_presult() noexcept;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ObsThriftServerClient : virtual public ObsThriftServerIf {
 public:
  ObsThriftServerClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ObsThriftServerClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  /**
   * A method definition looks like C code. It has a return type, arguments,
   * and optionally a list of exceptions that it may throw. Note that argument
   * lists and exception lists are specified using the exact same syntax as
   * field lists in struct or exception definitions.
   * 
   * @param path
   * @param layer
   * @param sceneName
   * @param sourceName
   * @param dimensions
   */
  void launchVideo(const std::string& path, const int32_t layer, const std::string& sceneName, const std::string& sourceName, const SourceDimensions& dimensions);
  void send_launchVideo(const std::string& path, const int32_t layer, const std::string& sceneName, const std::string& sourceName, const SourceDimensions& dimensions);
  void recv_launchVideo();
  void removeSource(const std::string& sceneName, const std::string& sourceName);
  void send_removeSource(const std::string& sceneName, const std::string& sourceName);
  void recv_removeSource();
  void muteSource(const std::string& sourceName);
  void send_muteSource(const std::string& sourceName);
  void recv_muteSource();
  void unmuteSource(const std::string& sourceName);
  void send_unmuteSource(const std::string& sourceName);
  void recv_unmuteSource();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ObsThriftServerProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<ObsThriftServerIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ObsThriftServerProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_launchVideo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_removeSource(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_muteSource(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_unmuteSource(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ObsThriftServerProcessor(::std::shared_ptr<ObsThriftServerIf> iface) :
    iface_(iface) {
    processMap_["launchVideo"] = &ObsThriftServerProcessor::process_launchVideo;
    processMap_["removeSource"] = &ObsThriftServerProcessor::process_removeSource;
    processMap_["muteSource"] = &ObsThriftServerProcessor::process_muteSource;
    processMap_["unmuteSource"] = &ObsThriftServerProcessor::process_unmuteSource;
  }

  virtual ~ObsThriftServerProcessor() {}
};

class ObsThriftServerProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ObsThriftServerProcessorFactory(const ::std::shared_ptr< ObsThriftServerIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< ObsThriftServerIfFactory > handlerFactory_;
};

class ObsThriftServerMultiface : virtual public ObsThriftServerIf {
 public:
  ObsThriftServerMultiface(std::vector<std::shared_ptr<ObsThriftServerIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ObsThriftServerMultiface() {}
 protected:
  std::vector<std::shared_ptr<ObsThriftServerIf> > ifaces_;
  ObsThriftServerMultiface() {}
  void add(::std::shared_ptr<ObsThriftServerIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  /**
   * A method definition looks like C code. It has a return type, arguments,
   * and optionally a list of exceptions that it may throw. Note that argument
   * lists and exception lists are specified using the exact same syntax as
   * field lists in struct or exception definitions.
   * 
   * @param path
   * @param layer
   * @param sceneName
   * @param sourceName
   * @param dimensions
   */
  void launchVideo(const std::string& path, const int32_t layer, const std::string& sceneName, const std::string& sourceName, const SourceDimensions& dimensions) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->launchVideo(path, layer, sceneName, sourceName, dimensions);
    }
    ifaces_[i]->launchVideo(path, layer, sceneName, sourceName, dimensions);
  }

  void removeSource(const std::string& sceneName, const std::string& sourceName) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->removeSource(sceneName, sourceName);
    }
    ifaces_[i]->removeSource(sceneName, sourceName);
  }

  void muteSource(const std::string& sourceName) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->muteSource(sourceName);
    }
    ifaces_[i]->muteSource(sourceName);
  }

  void unmuteSource(const std::string& sourceName) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->unmuteSource(sourceName);
    }
    ifaces_[i]->unmuteSource(sourceName);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ObsThriftServerConcurrentClient : virtual public ObsThriftServerIf {
 public:
  ObsThriftServerConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  ObsThriftServerConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  /**
   * A method definition looks like C code. It has a return type, arguments,
   * and optionally a list of exceptions that it may throw. Note that argument
   * lists and exception lists are specified using the exact same syntax as
   * field lists in struct or exception definitions.
   * 
   * @param path
   * @param layer
   * @param sceneName
   * @param sourceName
   * @param dimensions
   */
  void launchVideo(const std::string& path, const int32_t layer, const std::string& sceneName, const std::string& sourceName, const SourceDimensions& dimensions);
  int32_t send_launchVideo(const std::string& path, const int32_t layer, const std::string& sceneName, const std::string& sourceName, const SourceDimensions& dimensions);
  void recv_launchVideo(const int32_t seqid);
  void removeSource(const std::string& sceneName, const std::string& sourceName);
  int32_t send_removeSource(const std::string& sceneName, const std::string& sourceName);
  void recv_removeSource(const int32_t seqid);
  void muteSource(const std::string& sourceName);
  int32_t send_muteSource(const std::string& sourceName);
  void recv_muteSource(const int32_t seqid);
  void unmuteSource(const std::string& sourceName);
  int32_t send_unmuteSource(const std::string& sourceName);
  void recv_unmuteSource(const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif
