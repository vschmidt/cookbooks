project_root/
├── build/             (Generated build artifacts, not checked into version control)
├── src/               (Main source code, including implementation files and private headers)
│   ├── module_a/      (Subdirectory for a specific module or component)
│   │   ├── module_a.cpp
│   │   └── module_a_private.h
│   └── main.cpp
├── include/           (Public headers, exposed to other projects or modules)
│   └── project_name/  (Subdirectory named after the project to avoid header name collisions)
│       ├── public_api.h
│       └── another_public_header.h
├── tests/             (Unit tests and integration tests)
│   ├── unit_tests/
│   └── integration_tests/
├── examples/          (Sample code demonstrating usage)
├── external/          (Third-party libraries or external dependencies)
├── docs/              (Project documentation)
├── CMakeLists.txt     (CMake build configuration)
├── README.md          (Project overview and setup instructions)
├── LICENSE            (License information)
└── .gitignore         (Files and directories to ignore in version control)