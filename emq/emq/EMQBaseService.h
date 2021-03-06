#include "../client/undefine.h"
/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef EMQBaseService_H
#define EMQBaseService_H

#include <thrift/TDispatchProcessor.h>
#include "Common_types.h"

namespace emq { namespace common {

class EMQBaseServiceIf {
 public:
  virtual ~EMQBaseServiceIf() {}

  /**
   * Get EMQ service version;
   * 
   */
  virtual void getServiceVersion(Version& _return) = 0;

  /**
   * Check the version compatibility between client and server;
   * 
   * 
   * @param clientVersion
   */
  virtual void validClientVersion(const Version& clientVersion) = 0;
};

class EMQBaseServiceIfFactory {
 public:
  typedef EMQBaseServiceIf Handler;

  virtual ~EMQBaseServiceIfFactory() {}

  virtual EMQBaseServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(EMQBaseServiceIf* /* handler */) = 0;
};

class EMQBaseServiceIfSingletonFactory : virtual public EMQBaseServiceIfFactory {
 public:
  EMQBaseServiceIfSingletonFactory(const boost::shared_ptr<EMQBaseServiceIf>& iface) : iface_(iface) {}
  virtual ~EMQBaseServiceIfSingletonFactory() {}

  virtual EMQBaseServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(EMQBaseServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<EMQBaseServiceIf> iface_;
};

class EMQBaseServiceNull : virtual public EMQBaseServiceIf {
 public:
  virtual ~EMQBaseServiceNull() {}
  void getServiceVersion(Version& /* _return */) {
    return;
  }
  void validClientVersion(const Version& /* clientVersion */) {
    return;
  }
};


class EMQBaseService_getServiceVersion_args {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  EMQBaseService_getServiceVersion_args(const EMQBaseService_getServiceVersion_args&);
  EMQBaseService_getServiceVersion_args& operator=(const EMQBaseService_getServiceVersion_args&);
  EMQBaseService_getServiceVersion_args() {
  }

  virtual ~EMQBaseService_getServiceVersion_args() throw();

  bool operator == (const EMQBaseService_getServiceVersion_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const EMQBaseService_getServiceVersion_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EMQBaseService_getServiceVersion_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const EMQBaseService_getServiceVersion_args& obj);
};


class EMQBaseService_getServiceVersion_pargs {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~EMQBaseService_getServiceVersion_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const EMQBaseService_getServiceVersion_pargs& obj);
};

typedef struct _EMQBaseService_getServiceVersion_result__isset {
  _EMQBaseService_getServiceVersion_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _EMQBaseService_getServiceVersion_result__isset;

class EMQBaseService_getServiceVersion_result {
 public:

  static const char* ascii_fingerprint; // = "BD9B529C75BE620301B272FBBB308EE2";
  static const uint8_t binary_fingerprint[16]; // = {0xBD,0x9B,0x52,0x9C,0x75,0xBE,0x62,0x03,0x01,0xB2,0x72,0xFB,0xBB,0x30,0x8E,0xE2};

  EMQBaseService_getServiceVersion_result(const EMQBaseService_getServiceVersion_result&);
  EMQBaseService_getServiceVersion_result& operator=(const EMQBaseService_getServiceVersion_result&);
  EMQBaseService_getServiceVersion_result() {
  }

  virtual ~EMQBaseService_getServiceVersion_result() throw();
  Version success;
  GalaxyEmqServiceException e;

  _EMQBaseService_getServiceVersion_result__isset __isset;

  void __set_success(const Version& val);

  void __set_e(const GalaxyEmqServiceException& val);

  bool operator == (const EMQBaseService_getServiceVersion_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const EMQBaseService_getServiceVersion_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EMQBaseService_getServiceVersion_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const EMQBaseService_getServiceVersion_result& obj);
};

typedef struct _EMQBaseService_getServiceVersion_presult__isset {
  _EMQBaseService_getServiceVersion_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _EMQBaseService_getServiceVersion_presult__isset;

class EMQBaseService_getServiceVersion_presult {
 public:

  static const char* ascii_fingerprint; // = "BD9B529C75BE620301B272FBBB308EE2";
  static const uint8_t binary_fingerprint[16]; // = {0xBD,0x9B,0x52,0x9C,0x75,0xBE,0x62,0x03,0x01,0xB2,0x72,0xFB,0xBB,0x30,0x8E,0xE2};


  virtual ~EMQBaseService_getServiceVersion_presult() throw();
  Version* success;
  GalaxyEmqServiceException e;

  _EMQBaseService_getServiceVersion_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const EMQBaseService_getServiceVersion_presult& obj);
};

typedef struct _EMQBaseService_validClientVersion_args__isset {
  _EMQBaseService_validClientVersion_args__isset() : clientVersion(false) {}
  bool clientVersion :1;
} _EMQBaseService_validClientVersion_args__isset;

class EMQBaseService_validClientVersion_args {
 public:

  static const char* ascii_fingerprint; // = "CF7092475FC7B30D5051F300C9AAEF66";
  static const uint8_t binary_fingerprint[16]; // = {0xCF,0x70,0x92,0x47,0x5F,0xC7,0xB3,0x0D,0x50,0x51,0xF3,0x00,0xC9,0xAA,0xEF,0x66};

  EMQBaseService_validClientVersion_args(const EMQBaseService_validClientVersion_args&);
  EMQBaseService_validClientVersion_args& operator=(const EMQBaseService_validClientVersion_args&);
  EMQBaseService_validClientVersion_args() {
  }

  virtual ~EMQBaseService_validClientVersion_args() throw();
  Version clientVersion;

  _EMQBaseService_validClientVersion_args__isset __isset;

  void __set_clientVersion(const Version& val);

  bool operator == (const EMQBaseService_validClientVersion_args & rhs) const
  {
    if (!(clientVersion == rhs.clientVersion))
      return false;
    return true;
  }
  bool operator != (const EMQBaseService_validClientVersion_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EMQBaseService_validClientVersion_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const EMQBaseService_validClientVersion_args& obj);
};


class EMQBaseService_validClientVersion_pargs {
 public:

  static const char* ascii_fingerprint; // = "CF7092475FC7B30D5051F300C9AAEF66";
  static const uint8_t binary_fingerprint[16]; // = {0xCF,0x70,0x92,0x47,0x5F,0xC7,0xB3,0x0D,0x50,0x51,0xF3,0x00,0xC9,0xAA,0xEF,0x66};


  virtual ~EMQBaseService_validClientVersion_pargs() throw();
  const Version* clientVersion;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const EMQBaseService_validClientVersion_pargs& obj);
};

typedef struct _EMQBaseService_validClientVersion_result__isset {
  _EMQBaseService_validClientVersion_result__isset() : e(false) {}
  bool e :1;
} _EMQBaseService_validClientVersion_result__isset;

class EMQBaseService_validClientVersion_result {
 public:

  static const char* ascii_fingerprint; // = "A2F65054E5F622394FA717621012DFC2";
  static const uint8_t binary_fingerprint[16]; // = {0xA2,0xF6,0x50,0x54,0xE5,0xF6,0x22,0x39,0x4F,0xA7,0x17,0x62,0x10,0x12,0xDF,0xC2};

  EMQBaseService_validClientVersion_result(const EMQBaseService_validClientVersion_result&);
  EMQBaseService_validClientVersion_result& operator=(const EMQBaseService_validClientVersion_result&);
  EMQBaseService_validClientVersion_result() {
  }

  virtual ~EMQBaseService_validClientVersion_result() throw();
  GalaxyEmqServiceException e;

  _EMQBaseService_validClientVersion_result__isset __isset;

  void __set_e(const GalaxyEmqServiceException& val);

  bool operator == (const EMQBaseService_validClientVersion_result & rhs) const
  {
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const EMQBaseService_validClientVersion_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EMQBaseService_validClientVersion_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const EMQBaseService_validClientVersion_result& obj);
};

typedef struct _EMQBaseService_validClientVersion_presult__isset {
  _EMQBaseService_validClientVersion_presult__isset() : e(false) {}
  bool e :1;
} _EMQBaseService_validClientVersion_presult__isset;

class EMQBaseService_validClientVersion_presult {
 public:

  static const char* ascii_fingerprint; // = "A2F65054E5F622394FA717621012DFC2";
  static const uint8_t binary_fingerprint[16]; // = {0xA2,0xF6,0x50,0x54,0xE5,0xF6,0x22,0x39,0x4F,0xA7,0x17,0x62,0x10,0x12,0xDF,0xC2};


  virtual ~EMQBaseService_validClientVersion_presult() throw();
  GalaxyEmqServiceException e;

  _EMQBaseService_validClientVersion_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const EMQBaseService_validClientVersion_presult& obj);
};

class EMQBaseServiceClient : virtual public EMQBaseServiceIf {
 public:
  EMQBaseServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  EMQBaseServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getServiceVersion(Version& _return);
  void send_getServiceVersion();
  void recv_getServiceVersion(Version& _return);
  void validClientVersion(const Version& clientVersion);
  void send_validClientVersion(const Version& clientVersion);
  void recv_validClientVersion();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class EMQBaseServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<EMQBaseServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (EMQBaseServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getServiceVersion(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_validClientVersion(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  EMQBaseServiceProcessor(boost::shared_ptr<EMQBaseServiceIf> iface) :
    iface_(iface) {
    processMap_["getServiceVersion"] = &EMQBaseServiceProcessor::process_getServiceVersion;
    processMap_["validClientVersion"] = &EMQBaseServiceProcessor::process_validClientVersion;
  }

  virtual ~EMQBaseServiceProcessor() {}
};

class EMQBaseServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  EMQBaseServiceProcessorFactory(const ::boost::shared_ptr< EMQBaseServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< EMQBaseServiceIfFactory > handlerFactory_;
};

class EMQBaseServiceMultiface : virtual public EMQBaseServiceIf {
 public:
  EMQBaseServiceMultiface(std::vector<boost::shared_ptr<EMQBaseServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~EMQBaseServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<EMQBaseServiceIf> > ifaces_;
  EMQBaseServiceMultiface() {}
  void add(boost::shared_ptr<EMQBaseServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getServiceVersion(Version& _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getServiceVersion(_return);
    }
    ifaces_[i]->getServiceVersion(_return);
    return;
  }

  void validClientVersion(const Version& clientVersion) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->validClientVersion(clientVersion);
    }
    ifaces_[i]->validClientVersion(clientVersion);
  }

};

}} // namespace

#endif
