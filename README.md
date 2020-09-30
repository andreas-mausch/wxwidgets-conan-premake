Sample project to test the compatibility of wxWidgets, conan and premake
in order to build cross-platform GUI applications for Linux, macOS and Windows.

(Check the `xrc` branch for [XML Based Resource System](https://docs.wxwidgets.org/3.1/overview_xrc.html))

# Prerequisites

- Conan
- Premake 5

## Conan profile

### Linux profile

```
conan profile update settings.compiler.libcxx=libstdc++11 default
```

### Windows profile

```
conan profile update settings.arch=x86 default
conan profile update settings.compiler.toolset=v141_xp default
conan profile update settings.compiler.runtime=MT default
```

## Conan remote

```
conan remote add bincrafters "https://api.bintray.com/conan/bincrafters/public-conan"
```

# Build

```
conan install . --build=missing
```

## Linux & Mac

```
premake5 gmake2
make
```

## Windows

```
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" x86
premake5 vs2019
msbuild /p:Platform=Win32
```

# My personal conclusion

I always thought wxWidgets is some very old technology and pretty much deprecated.
I was wrong with that.

I really really dislike some things, like the `wxBEGIN_EVENT_TABLE` declaration for example (Macros :cold_sweat:).

The 'Hello World' wxWidgets on Linux results in a 7mb executable. Imo that's bloated, and imo wxWidgets carries
a lot of stuff which might be convenient, but doesn't belong in a pure GUI lib (implementations of jpeg, png, zlib, html, webview (a complete browser!), ..).
I'm not quite sure why the linker doesn't discard the unused bits.

Check out the `conanfile.txt` for my personal preferences.

But I still like it better than Qt and there are not that many choices for a GUI lib out there.
So it is okayish to me until there is something better.
