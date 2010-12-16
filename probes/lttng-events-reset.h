/* Reset macros used within TRACE_EVENT to "nothing" */

#undef __field
#define __field(_type, _item)

#undef __field_ext
#define __field_ext(_type, _item, _filter_type)

#undef __array
#define __array(_type, _item, _length)

#undef __dynamic_array
#define __dynamic_array(_type, _item, _length)

#undef __string
#define __string(_item, _src)

#undef TP_PROTO
#define TP_PROTO(args...)

#undef TP_ARGS
#define TP_ARGS(args...)

#undef TP_STRUCT__entry
#define TP_STRUCT__entry(args...)

#undef TP_fast_assign
#define TP_fast_assign(args...)

#undef TP_printk
#define TP_printk(args...)

#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(_name, _proto, _args, _tstruct, _assign, _print)

#undef DEFINE_EVENT
#define DEFINE_EVENT(_template, _name, _proto, _args)