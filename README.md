ti.Calc
=======

This is an example module for Titanium Desktop.

To build it, you first need to get a copy of the Titanium Desktop source code. I followed [these instructions](http://developer.appcelerator.com/doc/desktop/building) for doing that (and building it):

Next,

- Put the code for ti.Calc in the modules subdirectory with all the other ti.* modules (ti.App, ti.Codec, ....)
- Edit the SConscript in the modules subdirectory, and append ti.Calc to the end of the list of modules to build

Then run scons as usual...

`scons debug=1 sdkinstaller run=1`

TODO
----

- Explain what it's supposed to do
- Sample application using ti.Calc
