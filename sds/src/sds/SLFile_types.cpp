/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "SLFile_types.h"

#include <algorithm>



int _kSLFileTypeValues[] = {
  SLFileType::DATUM_MAP,
  SLFileType::RC_BASIC
};
const char* _kSLFileTypeNames[] = {
  "DATUM_MAP",
  "RC_BASIC"
};
const std::map<int, const char*> _SLFileType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kSLFileTypeValues, _kSLFileTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


DatumMapMeta::~DatumMapMeta() throw() {
}


void DatumMapMeta::__set_keyIdMap(const std::map<int16_t, std::string> & val) {
  this->keyIdMap = val;
__isset.keyIdMap = true;
}

const char* DatumMapMeta::ascii_fingerprint = "6C4518B8E73BE9BDC44CA4D526E52979";
const uint8_t DatumMapMeta::binary_fingerprint[16] = {0x6C,0x45,0x18,0xB8,0xE7,0x3B,0xE9,0xBD,0xC4,0x4C,0xA4,0xD5,0x26,0xE5,0x29,0x79};

uint32_t DatumMapMeta::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->keyIdMap.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _ktype1;
            ::apache::thrift::protocol::TType _vtype2;
            xfer += iprot->readMapBegin(_ktype1, _vtype2, _size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              int16_t _key5;
              xfer += iprot->readI16(_key5);
              std::string& _val6 = this->keyIdMap[_key5];
              xfer += iprot->readString(_val6);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.keyIdMap = true;
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

uint32_t DatumMapMeta::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("DatumMapMeta");

  if (this->__isset.keyIdMap) {
    xfer += oprot->writeFieldBegin("keyIdMap", ::apache::thrift::protocol::T_MAP, 1);
    {
      xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I16, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->keyIdMap.size()));
      std::map<int16_t, std::string> ::const_iterator _iter7;
      for (_iter7 = this->keyIdMap.begin(); _iter7 != this->keyIdMap.end(); ++_iter7)
      {
        xfer += oprot->writeI16(_iter7->first);
        xfer += oprot->writeString(_iter7->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(DatumMapMeta &a, DatumMapMeta &b) {
  using ::std::swap;
  swap(a.keyIdMap, b.keyIdMap);
  swap(a.__isset, b.__isset);
}

DatumMapMeta::DatumMapMeta(const DatumMapMeta& other8) {
  keyIdMap = other8.keyIdMap;
  __isset = other8.__isset;
}
DatumMapMeta& DatumMapMeta::operator=(const DatumMapMeta& other9) {
  keyIdMap = other9.keyIdMap;
  __isset = other9.__isset;
  return *this;
}

RCBasicMeta::~RCBasicMeta() throw() {
}


void RCBasicMeta::__set_keys(const std::vector<std::string> & val) {
  this->keys = val;
__isset.keys = true;
}

void RCBasicMeta::__set_types(const std::map<std::string,  ::DataType::type> & val) {
  this->types = val;
__isset.types = true;
}

const char* RCBasicMeta::ascii_fingerprint = "B43F647ACF985E21BBDB79C4092CE14F";
const uint8_t RCBasicMeta::binary_fingerprint[16] = {0xB4,0x3F,0x64,0x7A,0xCF,0x98,0x5E,0x21,0xBB,0xDB,0x79,0xC4,0x09,0x2C,0xE1,0x4F};

uint32_t RCBasicMeta::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->keys.clear();
            uint32_t _size10;
            ::apache::thrift::protocol::TType _etype13;
            xfer += iprot->readListBegin(_etype13, _size10);
            this->keys.resize(_size10);
            uint32_t _i14;
            for (_i14 = 0; _i14 < _size10; ++_i14)
            {
              xfer += iprot->readString(this->keys[_i14]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.keys = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->types.clear();
            uint32_t _size15;
            ::apache::thrift::protocol::TType _ktype16;
            ::apache::thrift::protocol::TType _vtype17;
            xfer += iprot->readMapBegin(_ktype16, _vtype17, _size15);
            uint32_t _i19;
            for (_i19 = 0; _i19 < _size15; ++_i19)
            {
              std::string _key20;
              xfer += iprot->readString(_key20);
               ::DataType::type& _val21 = this->types[_key20];
              int32_t ecast22;
              xfer += iprot->readI32(ecast22);
              _val21 = ( ::DataType::type)ecast22;
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.types = true;
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

uint32_t RCBasicMeta::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("RCBasicMeta");

  if (this->__isset.keys) {
    xfer += oprot->writeFieldBegin("keys", ::apache::thrift::protocol::T_LIST, 1);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->keys.size()));
      std::vector<std::string> ::const_iterator _iter23;
      for (_iter23 = this->keys.begin(); _iter23 != this->keys.end(); ++_iter23)
      {
        xfer += oprot->writeString((*_iter23));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.types) {
    xfer += oprot->writeFieldBegin("types", ::apache::thrift::protocol::T_MAP, 2);
    {
      xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_I32, static_cast<uint32_t>(this->types.size()));
      std::map<std::string,  ::DataType::type> ::const_iterator _iter24;
      for (_iter24 = this->types.begin(); _iter24 != this->types.end(); ++_iter24)
      {
        xfer += oprot->writeString(_iter24->first);
        xfer += oprot->writeI32((int32_t)_iter24->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(RCBasicMeta &a, RCBasicMeta &b) {
  using ::std::swap;
  swap(a.keys, b.keys);
  swap(a.types, b.types);
  swap(a.__isset, b.__isset);
}

RCBasicMeta::RCBasicMeta(const RCBasicMeta& other25) {
  keys = other25.keys;
  types = other25.types;
  __isset = other25.__isset;
}
RCBasicMeta& RCBasicMeta::operator=(const RCBasicMeta& other26) {
  keys = other26.keys;
  types = other26.types;
  __isset = other26.__isset;
  return *this;
}

RCBasicRowGroupHeader::~RCBasicRowGroupHeader() throw() {
}


void RCBasicRowGroupHeader::__set_count(const int32_t val) {
  this->count = val;
__isset.count = true;
}

void RCBasicRowGroupHeader::__set_offset(const std::vector<int32_t> & val) {
  this->offset = val;
__isset.offset = true;
}

const char* RCBasicRowGroupHeader::ascii_fingerprint = "D5A2785771F7F0E07CEBCBC61182541C";
const uint8_t RCBasicRowGroupHeader::binary_fingerprint[16] = {0xD5,0xA2,0x78,0x57,0x71,0xF7,0xF0,0xE0,0x7C,0xEB,0xCB,0xC6,0x11,0x82,0x54,0x1C};

uint32_t RCBasicRowGroupHeader::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readI32(this->count);
          this->__isset.count = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->offset.clear();
            uint32_t _size27;
            ::apache::thrift::protocol::TType _etype30;
            xfer += iprot->readListBegin(_etype30, _size27);
            this->offset.resize(_size27);
            uint32_t _i31;
            for (_i31 = 0; _i31 < _size27; ++_i31)
            {
              xfer += iprot->readI32(this->offset[_i31]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.offset = true;
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

uint32_t RCBasicRowGroupHeader::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("RCBasicRowGroupHeader");

  if (this->__isset.count) {
    xfer += oprot->writeFieldBegin("count", ::apache::thrift::protocol::T_I32, 1);
    xfer += oprot->writeI32(this->count);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.offset) {
    xfer += oprot->writeFieldBegin("offset", ::apache::thrift::protocol::T_LIST, 2);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I32, static_cast<uint32_t>(this->offset.size()));
      std::vector<int32_t> ::const_iterator _iter32;
      for (_iter32 = this->offset.begin(); _iter32 != this->offset.end(); ++_iter32)
      {
        xfer += oprot->writeI32((*_iter32));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(RCBasicRowGroupHeader &a, RCBasicRowGroupHeader &b) {
  using ::std::swap;
  swap(a.count, b.count);
  swap(a.offset, b.offset);
  swap(a.__isset, b.__isset);
}

RCBasicRowGroupHeader::RCBasicRowGroupHeader(const RCBasicRowGroupHeader& other33) {
  count = other33.count;
  offset = other33.offset;
  __isset = other33.__isset;
}
RCBasicRowGroupHeader& RCBasicRowGroupHeader::operator=(const RCBasicRowGroupHeader& other34) {
  count = other34.count;
  offset = other34.offset;
  __isset = other34.__isset;
  return *this;
}

SLFileMeta::~SLFileMeta() throw() {
}


void SLFileMeta::__set_type(const SLFileType::type val) {
  this->type = val;
__isset.type = true;
}

void SLFileMeta::__set_datumMapMeta(const DatumMapMeta& val) {
  this->datumMapMeta = val;
__isset.datumMapMeta = true;
}

void SLFileMeta::__set_rcBasicMeta(const RCBasicMeta& val) {
  this->rcBasicMeta = val;
__isset.rcBasicMeta = true;
}

const char* SLFileMeta::ascii_fingerprint = "FE28C3EEEE40A69C63BC3541E3C3BF26";
const uint8_t SLFileMeta::binary_fingerprint[16] = {0xFE,0x28,0xC3,0xEE,0xEE,0x40,0xA6,0x9C,0x63,0xBC,0x35,0x41,0xE3,0xC3,0xBF,0x26};

uint32_t SLFileMeta::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          int32_t ecast35;
          xfer += iprot->readI32(ecast35);
          this->type = (SLFileType::type)ecast35;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->datumMapMeta.read(iprot);
          this->__isset.datumMapMeta = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->rcBasicMeta.read(iprot);
          this->__isset.rcBasicMeta = true;
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

uint32_t SLFileMeta::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("SLFileMeta");

  if (this->__isset.type) {
    xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 1);
    xfer += oprot->writeI32((int32_t)this->type);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.datumMapMeta) {
    xfer += oprot->writeFieldBegin("datumMapMeta", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->datumMapMeta.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.rcBasicMeta) {
    xfer += oprot->writeFieldBegin("rcBasicMeta", ::apache::thrift::protocol::T_STRUCT, 3);
    xfer += this->rcBasicMeta.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(SLFileMeta &a, SLFileMeta &b) {
  using ::std::swap;
  swap(a.type, b.type);
  swap(a.datumMapMeta, b.datumMapMeta);
  swap(a.rcBasicMeta, b.rcBasicMeta);
  swap(a.__isset, b.__isset);
}

SLFileMeta::SLFileMeta(const SLFileMeta& other36) {
  type = other36.type;
  datumMapMeta = other36.datumMapMeta;
  rcBasicMeta = other36.rcBasicMeta;
  __isset = other36.__isset;
}
SLFileMeta& SLFileMeta::operator=(const SLFileMeta& other37) {
  type = other37.type;
  datumMapMeta = other37.datumMapMeta;
  rcBasicMeta = other37.rcBasicMeta;
  __isset = other37.__isset;
  return *this;
}

DatumMapRecord::~DatumMapRecord() throw() {
}


void DatumMapRecord::__set_data(const std::map<int16_t,  ::Datum> & val) {
  this->data = val;
__isset.data = true;
}

void DatumMapRecord::__set_keyIdMap(const std::map<int16_t, std::string> & val) {
  this->keyIdMap = val;
__isset.keyIdMap = true;
}

const char* DatumMapRecord::ascii_fingerprint = "A105EC95A6DCCDED3DC2D75EDF509AA4";
const uint8_t DatumMapRecord::binary_fingerprint[16] = {0xA1,0x05,0xEC,0x95,0xA6,0xDC,0xCD,0xED,0x3D,0xC2,0xD7,0x5E,0xDF,0x50,0x9A,0xA4};

uint32_t DatumMapRecord::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->data.clear();
            uint32_t _size38;
            ::apache::thrift::protocol::TType _ktype39;
            ::apache::thrift::protocol::TType _vtype40;
            xfer += iprot->readMapBegin(_ktype39, _vtype40, _size38);
            uint32_t _i42;
            for (_i42 = 0; _i42 < _size38; ++_i42)
            {
              int16_t _key43;
              xfer += iprot->readI16(_key43);
               ::Datum& _val44 = this->data[_key43];
              xfer += _val44.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.data = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->keyIdMap.clear();
            uint32_t _size45;
            ::apache::thrift::protocol::TType _ktype46;
            ::apache::thrift::protocol::TType _vtype47;
            xfer += iprot->readMapBegin(_ktype46, _vtype47, _size45);
            uint32_t _i49;
            for (_i49 = 0; _i49 < _size45; ++_i49)
            {
              int16_t _key50;
              xfer += iprot->readI16(_key50);
              std::string& _val51 = this->keyIdMap[_key50];
              xfer += iprot->readString(_val51);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.keyIdMap = true;
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

uint32_t DatumMapRecord::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("DatumMapRecord");

  if (this->__isset.data) {
    xfer += oprot->writeFieldBegin("data", ::apache::thrift::protocol::T_MAP, 1);
    {
      xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I16, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->data.size()));
      std::map<int16_t,  ::Datum> ::const_iterator _iter52;
      for (_iter52 = this->data.begin(); _iter52 != this->data.end(); ++_iter52)
      {
        xfer += oprot->writeI16(_iter52->first);
        xfer += _iter52->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.keyIdMap) {
    xfer += oprot->writeFieldBegin("keyIdMap", ::apache::thrift::protocol::T_MAP, 2);
    {
      xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I16, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->keyIdMap.size()));
      std::map<int16_t, std::string> ::const_iterator _iter53;
      for (_iter53 = this->keyIdMap.begin(); _iter53 != this->keyIdMap.end(); ++_iter53)
      {
        xfer += oprot->writeI16(_iter53->first);
        xfer += oprot->writeString(_iter53->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(DatumMapRecord &a, DatumMapRecord &b) {
  using ::std::swap;
  swap(a.data, b.data);
  swap(a.keyIdMap, b.keyIdMap);
  swap(a.__isset, b.__isset);
}

DatumMapRecord::DatumMapRecord(const DatumMapRecord& other54) {
  data = other54.data;
  keyIdMap = other54.keyIdMap;
  __isset = other54.__isset;
}
DatumMapRecord& DatumMapRecord::operator=(const DatumMapRecord& other55) {
  data = other55.data;
  keyIdMap = other55.keyIdMap;
  __isset = other55.__isset;
  return *this;
}

ValueList::~ValueList() throw() {
}


void ValueList::__set_values(const std::vector< ::Value> & val) {
  this->values = val;
__isset.values = true;
}

const char* ValueList::ascii_fingerprint = "872BE22037EEE77A13DE4E5AD66FFF8D";
const uint8_t ValueList::binary_fingerprint[16] = {0x87,0x2B,0xE2,0x20,0x37,0xEE,0xE7,0x7A,0x13,0xDE,0x4E,0x5A,0xD6,0x6F,0xFF,0x8D};

uint32_t ValueList::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->values.clear();
            uint32_t _size56;
            ::apache::thrift::protocol::TType _etype59;
            xfer += iprot->readListBegin(_etype59, _size56);
            this->values.resize(_size56);
            uint32_t _i60;
            for (_i60 = 0; _i60 < _size56; ++_i60)
            {
              xfer += this->values[_i60].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.values = true;
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

uint32_t ValueList::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("ValueList");

  if (this->__isset.values) {
    xfer += oprot->writeFieldBegin("values", ::apache::thrift::protocol::T_LIST, 1);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->values.size()));
      std::vector< ::Value> ::const_iterator _iter61;
      for (_iter61 = this->values.begin(); _iter61 != this->values.end(); ++_iter61)
      {
        xfer += (*_iter61).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(ValueList &a, ValueList &b) {
  using ::std::swap;
  swap(a.values, b.values);
  swap(a.__isset, b.__isset);
}

ValueList::ValueList(const ValueList& other62) {
  values = other62.values;
  __isset = other62.__isset;
}
ValueList& ValueList::operator=(const ValueList& other63) {
  values = other63.values;
  __isset = other63.__isset;
  return *this;
}

DatumMap::~DatumMap() throw() {
}


void DatumMap::__set_data(const  ::Dictionary& val) {
  this->data = val;
__isset.data = true;
}

const char* DatumMap::ascii_fingerprint = "57939DD8C71DC631F68668442988EB66";
const uint8_t DatumMap::binary_fingerprint[16] = {0x57,0x93,0x9D,0xD8,0xC7,0x1D,0xC6,0x31,0xF6,0x86,0x68,0x44,0x29,0x88,0xEB,0x66};

uint32_t DatumMap::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->data.clear();
            uint32_t _size64;
            ::apache::thrift::protocol::TType _ktype65;
            ::apache::thrift::protocol::TType _vtype66;
            xfer += iprot->readMapBegin(_ktype65, _vtype66, _size64);
            uint32_t _i68;
            for (_i68 = 0; _i68 < _size64; ++_i68)
            {
              std::string _key69;
              xfer += iprot->readString(_key69);
               ::Datum& _val70 = this->data[_key69];
              xfer += _val70.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.data = true;
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

uint32_t DatumMap::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("DatumMap");

  if (this->__isset.data) {
    xfer += oprot->writeFieldBegin("data", ::apache::thrift::protocol::T_MAP, 1);
    {
      xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->data.size()));
      std::map<std::string,  ::Datum> ::const_iterator _iter71;
      for (_iter71 = this->data.begin(); _iter71 != this->data.end(); ++_iter71)
      {
        xfer += oprot->writeString(_iter71->first);
        xfer += _iter71->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(DatumMap &a, DatumMap &b) {
  using ::std::swap;
  swap(a.data, b.data);
  swap(a.__isset, b.__isset);
}

DatumMap::DatumMap(const DatumMap& other72) {
  data = other72.data;
  __isset = other72.__isset;
}
DatumMap& DatumMap::operator=(const DatumMap& other73) {
  data = other73.data;
  __isset = other73.__isset;
  return *this;
}
