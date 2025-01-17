# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cruiser_msgs/PowerSettingRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PowerSettingRequest(genpy.Message):
  _md5sum = "b8ab82471068ec9bf0220a528179c6bc"
  _type = "cruiser_msgs/PowerSettingRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 cmd
uint16 year
uint8 month
uint8 day
uint8 hour
uint8 min
uint8 sec
bool timerEnable
bool fullPowerOn
uint8 flag

"""
  __slots__ = ['cmd','year','month','day','hour','min','sec','timerEnable','fullPowerOn','flag']
  _slot_types = ['uint8','uint16','uint8','uint8','uint8','uint8','uint8','bool','bool','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cmd,year,month,day,hour,min,sec,timerEnable,fullPowerOn,flag

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PowerSettingRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.cmd is None:
        self.cmd = 0
      if self.year is None:
        self.year = 0
      if self.month is None:
        self.month = 0
      if self.day is None:
        self.day = 0
      if self.hour is None:
        self.hour = 0
      if self.min is None:
        self.min = 0
      if self.sec is None:
        self.sec = 0
      if self.timerEnable is None:
        self.timerEnable = False
      if self.fullPowerOn is None:
        self.fullPowerOn = False
      if self.flag is None:
        self.flag = 0
    else:
      self.cmd = 0
      self.year = 0
      self.month = 0
      self.day = 0
      self.hour = 0
      self.min = 0
      self.sec = 0
      self.timerEnable = False
      self.fullPowerOn = False
      self.flag = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_BH8B().pack(_x.cmd, _x.year, _x.month, _x.day, _x.hour, _x.min, _x.sec, _x.timerEnable, _x.fullPowerOn, _x.flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 11
      (_x.cmd, _x.year, _x.month, _x.day, _x.hour, _x.min, _x.sec, _x.timerEnable, _x.fullPowerOn, _x.flag,) = _get_struct_BH8B().unpack(str[start:end])
      self.timerEnable = bool(self.timerEnable)
      self.fullPowerOn = bool(self.fullPowerOn)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_BH8B().pack(_x.cmd, _x.year, _x.month, _x.day, _x.hour, _x.min, _x.sec, _x.timerEnable, _x.fullPowerOn, _x.flag))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 11
      (_x.cmd, _x.year, _x.month, _x.day, _x.hour, _x.min, _x.sec, _x.timerEnable, _x.fullPowerOn, _x.flag,) = _get_struct_BH8B().unpack(str[start:end])
      self.timerEnable = bool(self.timerEnable)
      self.fullPowerOn = bool(self.fullPowerOn)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_BH8B = None
def _get_struct_BH8B():
    global _struct_BH8B
    if _struct_BH8B is None:
        _struct_BH8B = struct.Struct("<BH8B")
    return _struct_BH8B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cruiser_msgs/PowerSettingResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class PowerSettingResponse(genpy.Message):
  _md5sum = "d22520ac39d556453b510a4435e4340f"
  _type = "cruiser_msgs/PowerSettingResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint16 year
uint8 month
uint8 day
uint8 hour
uint8 min
uint8 sec
bool manual
bool adapter
bool station
bool timer
uint8 state

bool success


"""
  __slots__ = ['year','month','day','hour','min','sec','manual','adapter','station','timer','state','success']
  _slot_types = ['uint16','uint8','uint8','uint8','uint8','uint8','bool','bool','bool','bool','uint8','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       year,month,day,hour,min,sec,manual,adapter,station,timer,state,success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PowerSettingResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.year is None:
        self.year = 0
      if self.month is None:
        self.month = 0
      if self.day is None:
        self.day = 0
      if self.hour is None:
        self.hour = 0
      if self.min is None:
        self.min = 0
      if self.sec is None:
        self.sec = 0
      if self.manual is None:
        self.manual = False
      if self.adapter is None:
        self.adapter = False
      if self.station is None:
        self.station = False
      if self.timer is None:
        self.timer = False
      if self.state is None:
        self.state = 0
      if self.success is None:
        self.success = False
    else:
      self.year = 0
      self.month = 0
      self.day = 0
      self.hour = 0
      self.min = 0
      self.sec = 0
      self.manual = False
      self.adapter = False
      self.station = False
      self.timer = False
      self.state = 0
      self.success = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_H11B().pack(_x.year, _x.month, _x.day, _x.hour, _x.min, _x.sec, _x.manual, _x.adapter, _x.station, _x.timer, _x.state, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 13
      (_x.year, _x.month, _x.day, _x.hour, _x.min, _x.sec, _x.manual, _x.adapter, _x.station, _x.timer, _x.state, _x.success,) = _get_struct_H11B().unpack(str[start:end])
      self.manual = bool(self.manual)
      self.adapter = bool(self.adapter)
      self.station = bool(self.station)
      self.timer = bool(self.timer)
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_H11B().pack(_x.year, _x.month, _x.day, _x.hour, _x.min, _x.sec, _x.manual, _x.adapter, _x.station, _x.timer, _x.state, _x.success))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 13
      (_x.year, _x.month, _x.day, _x.hour, _x.min, _x.sec, _x.manual, _x.adapter, _x.station, _x.timer, _x.state, _x.success,) = _get_struct_H11B().unpack(str[start:end])
      self.manual = bool(self.manual)
      self.adapter = bool(self.adapter)
      self.station = bool(self.station)
      self.timer = bool(self.timer)
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_H11B = None
def _get_struct_H11B():
    global _struct_H11B
    if _struct_H11B is None:
        _struct_H11B = struct.Struct("<H11B")
    return _struct_H11B
class PowerSetting(object):
  _type          = 'cruiser_msgs/PowerSetting'
  _md5sum = '273350ed07798e9062484e197194752f'
  _request_class  = PowerSettingRequest
  _response_class = PowerSettingResponse
