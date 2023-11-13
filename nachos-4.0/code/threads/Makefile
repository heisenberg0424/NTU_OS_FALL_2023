# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the threads assignment.  The threads assignment must
#  be done first!
#
# Copyright (c) 1992-1996 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DTHREADS
INCPATH = -I../lib -I../threads -I../machine
HFILES = $(THREAD_H)
CFILES = $(THREAD_C)
C_OFILES = $(THREAD_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
bitmap.o: ../lib/bitmap.cc /usr/include/stdc-predef.h ../lib/bitmap.h \
 ../lib/copyright.h ../lib/utility.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h
debug.o: ../lib/debug.cc /usr/include/stdc-predef.h ../lib/debug.h \
 ../lib/copyright.h ../lib/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h
hash.o: ../lib/hash.cc /usr/include/stdc-predef.h ../lib/copyright.h
libtest.o: ../lib/libtest.cc /usr/include/stdc-predef.h ../lib/libtest.h \
 ../lib/copyright.h ../lib/bitmap.h ../lib/utility.h ../lib/hash.h \
 ../lib/list.h ../lib/debug.h ../lib/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/list.cc ../lib/hash.cc
list.o: ../lib/list.cc /usr/include/stdc-predef.h ../lib/copyright.h
sysdep.o: ../lib/sysdep.cc /usr/include/stdc-predef.h ../lib/sysdep.h \
 ../lib/copyright.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 /usr/include/i386-linux-gnu/sys/socket.h \
 /usr/include/i386-linux-gnu/sys/uio.h \
 /usr/include/i386-linux-gnu/bits/uio.h \
 /usr/include/i386-linux-gnu/bits/socket.h \
 /usr/include/i386-linux-gnu/bits/socket_type.h \
 /usr/include/i386-linux-gnu/bits/sockaddr.h \
 /usr/include/i386-linux-gnu/asm/socket.h \
 /usr/include/asm-generic/socket.h \
 /usr/include/i386-linux-gnu/asm/sockios.h \
 /usr/include/asm-generic/sockios.h /usr/include/i386-linux-gnu/sys/un.h \
 ../lib/debug.h ../lib/utility.h /usr/include/i386-linux-gnu/sys/file.h \
 /usr/include/fcntl.h /usr/include/i386-linux-gnu/bits/fcntl.h \
 /usr/include/i386-linux-gnu/bits/fcntl-linux.h \
 /usr/include/i386-linux-gnu/bits/stat.h \
 /usr/include/i386-linux-gnu/sys/time.h /usr/include/unistd.h \
 /usr/include/i386-linux-gnu/bits/posix_opt.h \
 /usr/include/i386-linux-gnu/bits/environments.h \
 /usr/include/i386-linux-gnu/bits/confname.h /usr/include/getopt.h \
 /usr/include/signal.h /usr/include/i386-linux-gnu/bits/signum.h \
 /usr/include/i386-linux-gnu/bits/siginfo.h \
 /usr/include/i386-linux-gnu/bits/sigaction.h \
 /usr/include/i386-linux-gnu/bits/sigcontext.h \
 /usr/include/i386-linux-gnu/bits/sigstack.h \
 /usr/include/i386-linux-gnu/sys/ucontext.h \
 /usr/include/i386-linux-gnu/bits/sigthread.h
interrupt.o: ../machine/interrupt.cc /usr/include/stdc-predef.h \
 ../machine/interrupt.h ../machine/callback.h ../lib/copyright.h \
 ../lib/list.h ../lib/copyright.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../lib/list.cc ../threads/main.h ../lib/debug.h \
 ../threads/kernel.h ../threads/alarm.h ../machine/callback.h \
 ../threads/scheduler.h ../threads/thread.h ../lib/sysdep.h \
 ../lib/utility.h ../machine/timer.h ../machine/interrupt.h \
 ../machine/stats.h
stats.o: ../machine/stats.cc /usr/include/stdc-predef.h \
 ../machine/stats.h ../lib/copyright.h ../lib/debug.h ../lib/copyright.h \
 ../lib/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h
timer.o: ../machine/timer.cc /usr/include/stdc-predef.h \
 ../machine/timer.h ../machine/callback.h ../lib/copyright.h \
 ../lib/utility.h ../lib/copyright.h ../threads/main.h ../lib/debug.h \
 ../lib/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../threads/kernel.h ../threads/alarm.h \
 ../machine/callback.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc ../threads/thread.h ../lib/sysdep.h \
 ../machine/timer.h ../machine/interrupt.h ../machine/stats.h
alarm.o: ../threads/alarm.cc /usr/include/stdc-predef.h \
 ../threads/alarm.h ../machine/callback.h ../lib/copyright.h \
 ../threads/scheduler.h ../lib/list.h ../lib/copyright.h ../lib/debug.h \
 ../lib/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../lib/list.cc ../threads/thread.h ../lib/sysdep.h \
 ../lib/utility.h ../machine/timer.h ../machine/callback.h \
 ../threads/main.h ../lib/debug.h ../threads/kernel.h \
 ../machine/interrupt.h ../machine/stats.h
kernel.o: ../threads/kernel.cc /usr/include/stdc-predef.h \
 ../threads/kernel.h ../threads/alarm.h ../machine/callback.h \
 ../lib/copyright.h ../threads/scheduler.h ../lib/list.h \
 ../lib/copyright.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../lib/list.cc ../threads/thread.h ../lib/sysdep.h \
 ../lib/utility.h ../machine/timer.h ../machine/callback.h ../lib/debug.h \
 ../machine/interrupt.h ../machine/stats.h ../machine/elevatortest.h \
 ../lib/libtest.h ../threads/main.h ../threads/synch.h \
 ../threads/synchlist.h ../threads/synchlist.cc
main.o: ../threads/main.cc /usr/include/stdc-predef.h ../lib/copyright.h \
 ../threads/main.h ../lib/debug.h ../lib/copyright.h ../lib/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../threads/kernel.h ../threads/alarm.h \
 ../machine/callback.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc ../threads/thread.h ../lib/sysdep.h \
 ../lib/utility.h ../machine/timer.h ../machine/callback.h \
 ../machine/interrupt.h ../machine/stats.h
scheduler.o: ../threads/scheduler.cc /usr/include/stdc-predef.h \
 ../threads/scheduler.h ../lib/copyright.h ../lib/list.h \
 ../lib/copyright.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../lib/list.cc ../threads/thread.h ../lib/sysdep.h \
 ../lib/utility.h ../lib/debug.h ../threads/main.h ../threads/kernel.h \
 ../threads/alarm.h ../machine/callback.h ../machine/timer.h \
 ../machine/callback.h ../machine/interrupt.h ../machine/stats.h
synch.o: ../threads/synch.cc /usr/include/stdc-predef.h \
 ../threads/synch.h ../lib/copyright.h ../lib/list.h ../lib/copyright.h \
 ../lib/debug.h ../lib/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../lib/list.cc ../threads/main.h ../lib/debug.h \
 ../threads/kernel.h ../threads/alarm.h ../machine/callback.h \
 ../threads/scheduler.h ../threads/thread.h ../lib/sysdep.h \
 ../lib/utility.h ../machine/timer.h ../machine/callback.h \
 ../machine/interrupt.h ../machine/stats.h
synchlist.o: ../threads/synchlist.cc /usr/include/stdc-predef.h \
 ../threads/synchlist.h ../lib/copyright.h ../lib/list.h \
 ../lib/copyright.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../lib/list.cc ../threads/synch.h ../threads/main.h \
 ../lib/debug.h ../threads/kernel.h ../threads/alarm.h \
 ../machine/callback.h ../threads/scheduler.h ../threads/thread.h \
 ../lib/sysdep.h ../lib/utility.h ../machine/timer.h \
 ../machine/callback.h ../machine/interrupt.h ../machine/stats.h \
 ../threads/synchlist.cc
thread.o: ../threads/thread.cc /usr/include/stdc-predef.h \
 ../threads/thread.h ../lib/copyright.h ../lib/sysdep.h \
 ../lib/copyright.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../threads/switch.h ../threads/synch.h ../lib/list.h \
 ../lib/debug.h ../lib/sysdep.h ../lib/utility.h ../lib/list.cc \
 ../threads/main.h ../lib/debug.h ../threads/kernel.h ../threads/alarm.h \
 ../machine/callback.h ../threads/scheduler.h ../machine/timer.h \
 ../machine/callback.h ../machine/interrupt.h ../machine/stats.h
elevatortest.o: ../machine/elevatortest.cc /usr/include/stdc-predef.h \
 ../machine/elevatortest.h ../lib/copyright.h ../machine/elevator.h \
 ../machine/callback.h ../lib/list.h ../lib/copyright.h ../lib/debug.h \
 ../lib/sysdep.h /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../lib/list.cc ../lib/utility.h ../threads/synch.h \
 ../threads/main.h ../lib/debug.h ../threads/kernel.h ../threads/alarm.h \
 ../machine/callback.h ../threads/scheduler.h ../threads/thread.h \
 ../lib/sysdep.h ../machine/timer.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/thread.h
elevator.o: ../machine/elevator.cc /usr/include/stdc-predef.h \
 ../machine/elevator.h ../machine/callback.h ../lib/copyright.h \
 ../lib/list.h ../lib/copyright.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/5/iostream \
 /usr/include/i386-linux-gnu/c++/5/bits/c++config.h \
 /usr/include/i386-linux-gnu/c++/5/bits/os_defines.h \
 /usr/include/features.h /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/include/i386-linux-gnu/c++/5/bits/cpu_defines.h \
 /usr/include/c++/5/ostream /usr/include/c++/5/ios \
 /usr/include/c++/5/iosfwd /usr/include/c++/5/bits/stringfwd.h \
 /usr/include/c++/5/bits/memoryfwd.h /usr/include/c++/5/bits/postypes.h \
 /usr/include/c++/5/cwchar /usr/include/wchar.h /usr/include/stdio.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stdarg.h \
 /usr/include/i386-linux-gnu/bits/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/5/include/stddef.h /usr/include/xlocale.h \
 /usr/include/c++/5/exception \
 /usr/include/c++/5/bits/atomic_lockfree_defines.h \
 /usr/include/c++/5/bits/char_traits.h \
 /usr/include/c++/5/bits/stl_algobase.h \
 /usr/include/c++/5/bits/functexcept.h \
 /usr/include/c++/5/bits/exception_defines.h \
 /usr/include/c++/5/bits/cpp_type_traits.h \
 /usr/include/c++/5/ext/type_traits.h \
 /usr/include/c++/5/ext/numeric_traits.h \
 /usr/include/c++/5/bits/stl_pair.h /usr/include/c++/5/bits/move.h \
 /usr/include/c++/5/bits/concept_check.h \
 /usr/include/c++/5/bits/stl_iterator_base_types.h \
 /usr/include/c++/5/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/5/debug/debug.h /usr/include/c++/5/bits/stl_iterator.h \
 /usr/include/c++/5/bits/ptr_traits.h \
 /usr/include/c++/5/bits/predefined_ops.h \
 /usr/include/c++/5/bits/localefwd.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++locale.h \
 /usr/include/c++/5/clocale /usr/include/locale.h \
 /usr/include/i386-linux-gnu/bits/locale.h /usr/include/c++/5/cctype \
 /usr/include/ctype.h /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/c++/5/bits/ios_base.h /usr/include/c++/5/ext/atomicity.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr.h \
 /usr/include/i386-linux-gnu/c++/5/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/sched.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/setjmp.h \
 /usr/include/i386-linux-gnu/c++/5/bits/atomic_word.h \
 /usr/include/c++/5/bits/locale_classes.h /usr/include/c++/5/string \
 /usr/include/c++/5/bits/allocator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/c++allocator.h \
 /usr/include/c++/5/ext/new_allocator.h /usr/include/c++/5/new \
 /usr/include/c++/5/bits/ostream_insert.h \
 /usr/include/c++/5/bits/cxxabi_forced.h \
 /usr/include/c++/5/bits/stl_function.h \
 /usr/include/c++/5/backward/binders.h \
 /usr/include/c++/5/bits/range_access.h \
 /usr/include/c++/5/bits/basic_string.h \
 /usr/include/c++/5/ext/alloc_traits.h \
 /usr/include/c++/5/bits/basic_string.tcc \
 /usr/include/c++/5/bits/locale_classes.tcc /usr/include/c++/5/stdexcept \
 /usr/include/c++/5/streambuf /usr/include/c++/5/bits/streambuf.tcc \
 /usr/include/c++/5/bits/basic_ios.h \
 /usr/include/c++/5/bits/locale_facets.h /usr/include/c++/5/cwctype \
 /usr/include/wctype.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_base.h \
 /usr/include/c++/5/bits/streambuf_iterator.h \
 /usr/include/i386-linux-gnu/c++/5/bits/ctype_inline.h \
 /usr/include/c++/5/bits/locale_facets.tcc \
 /usr/include/c++/5/bits/basic_ios.tcc \
 /usr/include/c++/5/bits/ostream.tcc /usr/include/c++/5/istream \
 /usr/include/c++/5/bits/istream.tcc /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/stdlib.h \
 /usr/include/i386-linux-gnu/bits/waitflags.h \
 /usr/include/i386-linux-gnu/bits/waitstatus.h \
 /usr/include/i386-linux-gnu/sys/types.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h /usr/include/alloca.h \
 /usr/include/i386-linux-gnu/bits/stdlib-float.h /usr/include/string.h \
 ../lib/utility.h ../lib/list.cc ../lib/utility.h ../threads/kernel.h \
 ../threads/alarm.h ../machine/callback.h ../threads/scheduler.h \
 ../threads/thread.h ../lib/sysdep.h ../machine/timer.h ../lib/debug.h \
 ../machine/interrupt.h ../machine/stats.h ../threads/main.h \
 ../threads/kernel.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
