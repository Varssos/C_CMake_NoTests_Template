# C_CMake_NoTests_Template

My C with CMake project configuration

## 1. Definitions

`{PROJECT_ROOT}` - project root path.
`{BUILD_DIR}` - `build`


## 2. Build

### 2.1 Requirements

- GCC >= 8.4 (version 8.4 provides experimental support)
- cmake >= 3.16

### 2.2 Build

Build with unit tests and in debug mode
```
cmake -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
sudo cmake --install build
```

## 3. Project contents
``` 
├── sources                 # sources directory
├── .vscode                 # my VS code configuration
├── CMakeLists.txt          # cmake directives
├── LICENSE                 # License doc
├── module_config.cmake     # basic module configuration
├── README.md               # this file
├── toolchain.cmake         # toolchain configuration for cmake
├── .clang-format           # clang-format file which unify code style
├── .gitignore              # gitignore config file
└── .gitmodules             # gitmodule config file
```

## 4. Run app and tests

### 4.1 Run app 
```
./build/app
```


