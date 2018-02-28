/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Common_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace emq { namespace common {

int _kErrorCodeValues[] = {
  ErrorCode::INVALID_ACTION,
  ErrorCode::INVALID_ATTRIBUTE,
  ErrorCode::QUEUE_DELETED_RECENTLY,
  ErrorCode::QUEUE_EXIST,
  ErrorCode::QUEUE_NAME_MISSING,
  ErrorCode::QUEUE_NOT_EXIST,
  ErrorCode::QUEUE_INUSE,
  ErrorCode::QUEUE_URI_CONFLICT,
  ErrorCode::INVALID_INDEX_ID,
  ErrorCode::MESSAGE_BODY_MISSING,
  ErrorCode::INVALID_RECEIPT_HANDLE,
  ErrorCode::INDEX_NOT_UNIQUE,
  ErrorCode::PERMISSION_DENIED,
  ErrorCode::REQUEST_LENGTH_EXCEEDED,
  ErrorCode::BAD_REQUEST,
  ErrorCode::INTERNAL_ERROR,
  ErrorCode::PARTITION_NOT_EXIST,
  ErrorCode::PARTITION_NOT_RUNNING,
  ErrorCode::QUEUE_NOT_CACHED,
  ErrorCode::PARTITION_NOT_SERVING,
  ErrorCode::TTRANSPORT_ERROR,
  ErrorCode::QUOTA_EXCEEDED,
  ErrorCode::QUOTA_NOT_EXIST,
  ErrorCode::QUOTA_LOCK_FAILED,
  ErrorCode::UNKNOWN
};
const char* _kErrorCodeNames[] = {
  "INVALID_ACTION",
  "INVALID_ATTRIBUTE",
  "QUEUE_DELETED_RECENTLY",
  "QUEUE_EXIST",
  "QUEUE_NAME_MISSING",
  "QUEUE_NOT_EXIST",
  "QUEUE_INUSE",
  "QUEUE_URI_CONFLICT",
  "INVALID_INDEX_ID",
  "MESSAGE_BODY_MISSING",
  "INVALID_RECEIPT_HANDLE",
  "INDEX_NOT_UNIQUE",
  "PERMISSION_DENIED",
  "REQUEST_LENGTH_EXCEEDED",
  "BAD_REQUEST",
  "INTERNAL_ERROR",
  "PARTITION_NOT_EXIST",
  "PARTITION_NOT_RUNNING",
  "QUEUE_NOT_CACHED",
  "PARTITION_NOT_SERVING",
  "TTRANSPORT_ERROR",
  "QUOTA_EXCEEDED",
  "QUOTA_NOT_EXIST",
  "QUOTA_LOCK_FAILED",
  "UNKNOWN"
};
const std::map<int, const char*> _ErrorCode_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(25, _kErrorCodeValues, _kErrorCodeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kRetryTypeValues[] = {
  RetryType::SAFE,
  RetryType::UNSAFE,
  RetryType::UNSURE
};
const char* _kRetryTypeNames[] = {
  "SAFE",
  "UNSAFE",
  "UNSURE"
};
const std::map<int, const char*> _RetryType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kRetryTypeValues, _kRetryTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


GalaxyEmqServiceException::~GalaxyEmqServiceException() throw() {
}


void GalaxyEmqServiceException::__set_errorCode(const int32_t val) {
  this->errorCode = val;
__isset.errorCode = true;
}

void GalaxyEmqServiceException::__set_errMsg(const std::string& val) {
  this->errMsg = val;
__isset.errMsg = true;
}

void GalaxyEmqServiceException::__set_details(const std::string& val) {
  this->details = val;
__isset.details = true;
}

void GalaxyEmqServiceException::__set_requestId(const std::string& val) {
  this->requestId = val;
__isset.requestId = true;
}

void GalaxyEmqServiceException::__set_queueName(const std::string& val) {
  this->queueName = val;
__isset.queueName = true;
}

const char* GalaxyEmqServiceException::ascii_fingerprint = "AB6EFCE8BCC752BB39DF6EAFF4BC0E59";
const uint8_t GalaxyEmqServiceException::binary_fingerprint[16] = {0xAB,0x6E,0xFC,0xE8,0xBC,0xC7,0x52,0xBB,0x39,0xDF,0x6E,0xAF,0xF4,0xBC,0x0E,0x59};

uint32_t GalaxyEmqServiceException::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->errorCode);
          this->__isset.errorCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->errMsg);
          this->__isset.errMsg = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->details);
          this->__isset.details = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->requestId);
          this->__isset.requestId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->queueName);
          this->__isset.queueName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t GalaxyEmqServiceException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("GalaxyEmqServiceException");

  if (this->__isset.errorCode) {
    xfer += oprot->writeFieldBegin("errorCode", ::apache::thrift::protocol::T_I32, 1);
    xfer += oprot->writeI32(this->errorCode);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.errMsg) {
    xfer += oprot->writeFieldBegin("errMsg", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->errMsg);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.details) {
    xfer += oprot->writeFieldBegin("details", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->details);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.requestId) {
    xfer += oprot->writeFieldBegin("requestId", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->requestId);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.queueName) {
    xfer += oprot->writeFieldBegin("queueName", ::apache::thrift::protocol::T_STRING, 5);
    xfer += oprot->writeString(this->queueName);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(GalaxyEmqServiceException &a, GalaxyEmqServiceException &b) {
  using ::std::swap;
  swap(a.errorCode, b.errorCode);
  swap(a.errMsg, b.errMsg);
  swap(a.details, b.details);
  swap(a.requestId, b.requestId);
  swap(a.queueName, b.queueName);
  swap(a.__isset, b.__isset);
}

GalaxyEmqServiceException::GalaxyEmqServiceException(const GalaxyEmqServiceException& other0) : TException() {
  errorCode = other0.errorCode;
  errMsg = other0.errMsg;
  details = other0.details;
  requestId = other0.requestId;
  queueName = other0.queueName;
  __isset = other0.__isset;
}
GalaxyEmqServiceException& GalaxyEmqServiceException::operator=(const GalaxyEmqServiceException& other1) {
  errorCode = other1.errorCode;
  errMsg = other1.errMsg;
  details = other1.details;
  requestId = other1.requestId;
  queueName = other1.queueName;
  __isset = other1.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const GalaxyEmqServiceException& obj) {
  using apache::thrift::to_string;
  out << "GalaxyEmqServiceException(";
  out << "errorCode="; (obj.__isset.errorCode ? (out << to_string(obj.errorCode)) : (out << "<null>"));
  out << ", " << "errMsg="; (obj.__isset.errMsg ? (out << to_string(obj.errMsg)) : (out << "<null>"));
  out << ", " << "details="; (obj.__isset.details ? (out << to_string(obj.details)) : (out << "<null>"));
  out << ", " << "requestId="; (obj.__isset.requestId ? (out << to_string(obj.requestId)) : (out << "<null>"));
  out << ", " << "queueName="; (obj.__isset.queueName ? (out << to_string(obj.queueName)) : (out << "<null>"));
  out << ")";
  return out;
}


Version::~Version() throw() {
}


void Version::__set_major(const int32_t val) {
  this->major = val;
}

void Version::__set_minor(const int32_t val) {
  this->minor = val;
}

void Version::__set_revision(const int32_t val) {
  this->revision = val;
}

void Version::__set_date(const std::string& val) {
  this->date = val;
}

void Version::__set_details(const std::string& val) {
  this->details = val;
__isset.details = true;
}

const char* Version::ascii_fingerprint = "8C54797AE785863F1D0CEEBA45DA2A4D";
const uint8_t Version::binary_fingerprint[16] = {0x8C,0x54,0x79,0x7A,0xE7,0x85,0x86,0x3F,0x1D,0x0C,0xEE,0xBA,0x45,0xDA,0x2A,0x4D};

uint32_t Version::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_major = false;
  bool isset_minor = false;
  bool isset_revision = false;
  bool isset_date = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->major);
          isset_major = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->minor);
          isset_minor = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->revision);
          isset_revision = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->date);
          isset_date = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->details);
          this->__isset.details = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_major)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_minor)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_revision)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_date)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Version::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Version");

  xfer += oprot->writeFieldBegin("major", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->major);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("minor", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->minor);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("revision", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->revision);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("date", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->date);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.details) {
    xfer += oprot->writeFieldBegin("details", ::apache::thrift::protocol::T_STRING, 5);
    xfer += oprot->writeString(this->details);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Version &a, Version &b) {
  using ::std::swap;
  swap(a.major, b.major);
  swap(a.minor, b.minor);
  swap(a.revision, b.revision);
  swap(a.date, b.date);
  swap(a.details, b.details);
  swap(a.__isset, b.__isset);
}

Version::Version(const Version& other2) {
  major = other2.major;
  minor = other2.minor;
  revision = other2.revision;
  date = other2.date;
  details = other2.details;
  __isset = other2.__isset;
}
Version& Version::operator=(const Version& other3) {
  major = other3.major;
  minor = other3.minor;
  revision = other3.revision;
  date = other3.date;
  details = other3.details;
  __isset = other3.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Version& obj) {
  using apache::thrift::to_string;
  out << "Version(";
  out << "major=" << to_string(obj.major);
  out << ", " << "minor=" << to_string(obj.minor);
  out << ", " << "revision=" << to_string(obj.revision);
  out << ", " << "date=" << to_string(obj.date);
  out << ", " << "details="; (obj.__isset.details ? (out << to_string(obj.details)) : (out << "<null>"));
  out << ")";
  return out;
}

}} // namespace