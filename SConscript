#!/usr/bin/env python
from os import path
Import('build env module')

env.Append(CPPDEFINES = ('TITANIUM_CALC_API_EXPORT', 1))
env.Append(LIBS = 'BusMath.lib')
env.Append(LIBPATH=path.join(build.titanium_source_dir, 'modules', 'ti.Calc'))

build.add_thirdparty(env, 'poco')

if build.is_win32():
    env.Append(CCFLAGS=['/MD', '/DUNICODE', '/D_UNICODE'])

build.mark_build_target(env.SharedLibrary(
    path.join(module.dir, 'ticalcmodule'), Glob('*.cpp')))
