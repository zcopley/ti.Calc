#!/usr/bin/env python
from os import path
Import('build env module')

env.Append(CPPDEFINES = ('TITANIUM_CALC_API_EXPORT', 1))

if build.is_win32():
    env.Append(CCFLAGS=['/MD', '/DUNICODE', '/D_UNICODE'])

build.mark_build_target(env.SharedLibrary(
    path.join(module.dir, 'ticalcmodule'), Glob('*.cpp')))
