# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rtabmap_msgs/GlobalBundleAdjustmentRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GlobalBundleAdjustmentRequest(genpy.Message):
  _md5sum = "2e1ed640ba9f481fdaa2226734d70674"
  _type = "rtabmap_msgs/GlobalBundleAdjustmentRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Global Bundle Adjustment service
#
#       Perform global bundle adjustment. Note that as soon as the map 
#       is modified again, the graph is re-optimized the standard way (without SBA).
#       It then makes only sense to use this after a mapping run (and after a call 
#       to /rtabmap/pause) when you know that the robot will restart in localization 
#       mode the next time, or at the beginning of the localization session.
#

# Optimizer type (0=g2o, 1=CVSBA), default 0
int32 type

# Iterations,        default 0 (use Optimizer/Iterations already loaded in the node)
int32 iterations

# Pixel variance,    default 0 (use g2o/PixelVariance already loaded in the node)
float32 pixel_variance

# Use vocabulary matches, default false (rematch all features between frames)
bool voc_matches
"""
  __slots__ = ['type','iterations','pixel_variance','voc_matches']
  _slot_types = ['int32','int32','float32','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type,iterations,pixel_variance,voc_matches

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GlobalBundleAdjustmentRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.type is None:
        self.type = 0
      if self.iterations is None:
        self.iterations = 0
      if self.pixel_variance is None:
        self.pixel_variance = 0.
      if self.voc_matches is None:
        self.voc_matches = False
    else:
      self.type = 0
      self.iterations = 0
      self.pixel_variance = 0.
      self.voc_matches = False

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
      buff.write(_get_struct_2ifB().pack(_x.type, _x.iterations, _x.pixel_variance, _x.voc_matches))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 13
      (_x.type, _x.iterations, _x.pixel_variance, _x.voc_matches,) = _get_struct_2ifB().unpack(str[start:end])
      self.voc_matches = bool(self.voc_matches)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2ifB().pack(_x.type, _x.iterations, _x.pixel_variance, _x.voc_matches))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 13
      (_x.type, _x.iterations, _x.pixel_variance, _x.voc_matches,) = _get_struct_2ifB().unpack(str[start:end])
      self.voc_matches = bool(self.voc_matches)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2ifB = None
def _get_struct_2ifB():
    global _struct_2ifB
    if _struct_2ifB is None:
        _struct_2ifB = struct.Struct("<2ifB")
    return _struct_2ifB
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rtabmap_msgs/GlobalBundleAdjustmentResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GlobalBundleAdjustmentResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "rtabmap_msgs/GlobalBundleAdjustmentResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# return false if failure

"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GlobalBundleAdjustmentResponse, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class GlobalBundleAdjustment(object):
  _type          = 'rtabmap_msgs/GlobalBundleAdjustment'
  _md5sum = '2e1ed640ba9f481fdaa2226734d70674'
  _request_class  = GlobalBundleAdjustmentRequest
  _response_class = GlobalBundleAdjustmentResponse
