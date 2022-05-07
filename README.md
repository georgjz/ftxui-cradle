# FTXUI Cradle

A simple C++ project template for [FTXUI][ftxui] projects. You'll need [CMake][cmake], [git][g], and a C++ compiler.

The CMake files are purposefully kept minimal and simple, I don't like it when people make assumptions about other people's projects. I prefer to add project dependencies as git submodules, instead of relying on CMake's fetch (I distrust build systems deeply).

To build the code in this repository, open your favorite terminal:

```bash
git clone --recurse-submodules https://github.com/georgjz/ftxui-cradle.git
cd ftxui-cradle
cmake -S . -B build -DCMAKE_BUILD-TYPE=Debug
cmake --build build
./build/ftxui-cradle
```

The code in this repository has been successfully tested with [gcc 11.3][gcc], [clang 14.0.0][clang], and [Microsoft Visual C++ 19.29.30141.0][msvc].

Enjoy.

[ftxui]: https://github.com/ArthurSonzogni/FTXUI
[cmake]: https://cmake.org
[g]: https://git-scm.com
[gcc]: https://gcc.gnu.org
[clang]: https://clang.llvm.org
[msvc]: https://docs.microsoft.com/en-us/cpp/
