# Prerequisites

- Conan
- Premake 5

```
conan profile update settings.compiler.libcxx=libstdc++11 default
conan profile update settings.arch=x86 default
conan profile update settings.compiler.toolset=v141_xp default
conan profile update settings.compiler.runtime=MT default

conan remote add bincrafters "https://api.bintray.com/conan/bincrafters/public-conan"

conan install . --build=missing
```

# Build

## Linux

```
premake5 gmake
make
```

## Windows

```
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" x86
premake5 vs2019
msbuild /p:Platform=Win32
```
