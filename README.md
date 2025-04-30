Vision processor

Prosty projekt C++ używający CMake i vcpkg.

Wymagania





CMake 3.20+



vcpkg (sklonowany w C:/vcpkg/)



Kompilator: MSVC (zalecany) lub MinGW-w64

Konfiguracja





Sklonuj vcpkg (jeśli nie masz):

git clone https://github.com/microsoft/vcpkg.git C:/vcpkg
cd C:/vcpkg
.\bootstrap-vcpkg.bat



Zainstaluj zależności:

C:/vcpkg/vcpkg install --triplet=x64-windows

Budowanie





Skonfiguruj projekt:

cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake



Zbuduj:

cmake --build build



Uruchom:

.\build\Debug\my_project.exe

VS Code





Upewnij się, że masz rozszerzenia: C/C++, CMake Tools, CMake.



Projekt automatycznie skonfiguruje się dzięki .vscode/settings.json.