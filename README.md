# cpp-lib-cookiecutter

<a href=https://cookiecutter.io target="_blank">Cookiecutter</a> template for developing modern C++ static libraries and programs.

## Features

Here is the technology stack that the bootstrapped project employs to lay the groundwork for a well managed and maintained C++ development project, and hence provide the developers with a better experience throughout the developement life cycle:

- <a href="https://google.github.io/googletest/" target="_blank">GoogleTest</a> : Performs unit testing and supports TDD.
- <a href="https://cmake.org/" target="_blank">CMake</a> : Simplifies cross-platform build and test processes.
- Build scripts : Automates test-running in each build and makes build process even simpler.
- <a href="https://clang.llvm.org/docs/ClangFormat.html" target="_blank">ClangFormat</a> : Keeps the coding style consistent across files in the project.
- <a href="https://www.doxygen.nl/" target="_blank">Doxygen</a> : Generates documentation in HTML, XML, and LaTeX formats from formatted comment blocks in source files.
- <a href="https://www.sphinx-doc.org/" target="_blank">Sphinx</a> docs : Generates static documentation site from documentation text file in reStructedText (reST) format.
- <a href="https://www.breathe-doc.org/" target="_blank">Breathe</a> (Sphinx plugin) : Bridges the gap between Doxygen generated XML and Sphinx's expected reST.
- <a href="https://google.github.io/googletest/" target="_blank">Furo</a> (Sphinx theme) : Gives the documentation site a clean and modern look.

### Bootstrapped project structure

```bash
.
├── src/
├── test/
├── scripts/
├── docs/                   
├── build/                  # to be created in the first build
├── bin/                    # to be created in the first build
├── include/                # to be created in the first build
├── lib/                    # to be created in the first build
├── ProjectConfig.h.in 
├── CMakeLists.txt
├── Doxyfile
├── LICENSE
└── README.md
```
Header and source files for the library and demo program are located in the `src/` subdirectory, whereas those for unit tests are located in the `test/` subdirectory.

By default, a <a href="https://choosealicense.com/licenses/bsd-3-clause/" target="_blank">BSD 3-Clause license</a> is included in the bootstrapped project. You'll need to update or remove it if it doesn't meet your project's licensing requirement. **Make sure you've done so before releasing your software.**

### Bootstrapped project dependencies

#### Build and test

- g++ (version 5+) or equivalent compiler that supports C++17 and above
- CMake (version 3.15+)
- Make (or equivalent build tool)
- GoogleTest (to be installed as submodule of the project using git)
- Git

#### Documentation site generation

- Doxygen
- Python 3.7+
- Sphinx
- Furo
- Breathe

## Getting Started

Install the latest <a href=https://cookiecutter.io target="_blank">Cookiecutter</a> if you haven't installed it yet. You may do so using <a href=https://pypi.org/project/pip/ target="_blank">pip</a>, assuming you have Python 3 installed on Linux, macOS, or Windows:

```bash
pip install -U cookiecutter
```
On Debian-based Linux, alternatively, you may install it via the package manager `apt`:

```bash
sudo apt install cookiecutter
```

To bootstrap your project, run <a href=https://cookiecutter.io target="_blank">Cookiecutter</a> with this template:

```bash
cookiecutter https://github.com/KriztoferY/cpp-lib-cookiecutter
```
Equivalently:

```bash
cookiecutter gh:KriztoferY/cpp-lib-cookiecutter
```

You'll then be prompted with a series of questions, for which the answers will be used to customize the bootstrapped project.

**IMPORTANT** : `library_name` cannot be empty.

## License <!-- omit in toc -->

This Cookiecutter template is licensed under the [BSD 3-Clause License](https://github.com/KriztoferY/cpp-lib-cookiecutter/blob/main/LICENSE).

The Acknowledgement section in the bootstrapped project README file should be retained without modification throughout the lifetime of your project.

Copyright &copy; 2022-2023 [KriztoferY](https://github.com/KriztoferY). All rights reserved.
